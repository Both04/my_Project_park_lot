# my_Project_park_lot

คณะวิทยาศาสตร์และวิศวกรรมศาตร์ ภาควิชาวิศวกรรมไฟฟ้าและคอมพิวเตอร์ 
หลักสูตร วิศวกรรมคอมพิวเตอร์ ชั้นปีที่ 2 
มหาวิทยาลัยเกษตรศาสตร์ วิทยาเขตเฉลิมพระเกียติ จังหวัดสกลนคร

ผู้จัดทำ
นายกันตณ หอทอง 6140207215
นายรัตนศักดิ์ แสนรังค์ 6140204832

โครงการที่จอดรถทันสมัย
หลักการทำงาน
จะมีอยู่2ส่วน
ส่วนที่ 1 
	มีการนับจำนวนรถด้วย LDR แบบดิจิตอล ในส่วนของ LDR จะมี LDR IN และ LDR OUT บริเวณทางเข้า เมื่อรถไปบังตัว LDR แล้วตัว Servo ก็จะทำงาน โดยตัว Servo จะเป็นตัวควบคุมการเปิด-ปิดของไม้กั้น และตัว LCD จะเป็นตัวบอกจำนวนรถที่เข้าและออก เมื่อรถเต็ม Servo จะไม่ทำงานจนกว่าจะมีที่ว่าง และ LDR อีก 2 ตัว จะเป็นการติดตั้งบริเวณที่จอดรถ เมื่อรถไปบังตัว LDR จะขึ้นสถานะว่าช่องจอดรถไม่ว่าง

ส่วนที่ 2 
	คือการจับระยะรถที่เข้าใกล้ตัว Ultrasonic เมื่อรถยิ่งเข้าใกล้ เสียงจะดังขึ้นเรื่อย ๆ ตามระดับของระยะที่จะเข้าใกล้ตัว Sensor และมี LED ช่วยแสดงสถานะของระยะที่เข้าใกล้ระหว่าง รถกับSensor
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Faculty of Science and Engineering, Department of Electrical and Computer Engineering
2nd year computer engineering course
Kasetsart University, Chalermprakiet Campus, Sakon Nakhon Province

Provider
Mr Kantan Horthong 6140207215
Mr. Rattanasak Saenrang 6140204832

Modern car park project
Principles
There will be 2 parts
Part 1
There are a lot of LDRs in LDRs and LDRs have both LDR in and out of the LDR area and the Servo will work on its own. The LCD will tell you the number of vehicles entering and exiting when the servo is busy and the other 2 LDRs will be installed in the parking space. LDR will depend on the busy parking space.

Part 2
Ultrasonic sensor, when the sound signal is detected and the ultrasonic sensor when there is noise, the sensor will have an LED to show the distance between the sensors
