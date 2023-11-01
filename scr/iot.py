#!/usr/bin/python3

import serial
import paho.mqtt.client as mqtt
import json

ser = serial.Serial("/dev/ttyACM0", 115200, timeout = 1) 
print("Se ha conectado al puerto serial /dev/ttyACM0")

client = mqtt.Client("STM32_JOSE_Y_DANNY")

server = "iot.eie.ucr.ac.cr"
port = 1883
topic = "v1/devices/me/telemetry"
token = "6weqsemviee72ta8t788"

client.username_pw_set(token)
client.connect(server, port)

dictionary = dict()

while True:
	line = ser.readline().decode("utf-8")
	line = line.replace("\r", "").replace("\n", "")
	line = line.split(",")
	if len(line) == 4:
		dictionary["X"] = line[0]
		dictionary["Y"] = line[1]
		dictionary["Z"] = line[2]
		dictionary["Battery"] = line[3]
		if float(line[3]) < 7:
			dictionary["Low Battery"] = "Yes"
		else:
			dictionary["Low Battery"] = "No"
		msg = json.dumps(dictionary)
		print(msg)
		client.publish(topic, msg)
