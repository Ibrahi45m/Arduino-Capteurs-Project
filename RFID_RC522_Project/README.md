• RFID RC522 Access System 🔐

•• 📌 Description
This project uses the RFID RC522 module with an Arduino Uno to read RFID cards and display their unique ID (UID) on the Serial Monitor. It can be extended to build access control systems.

•• 🧰 Components
- Arduino Uno
- RFID RC522 Module
- RFID Card / Tag
- Breadboard
- Jumper wires

•• 🔌 Wiring (Connection)

| RC522 Pin | Arduino Uno |
|----------|------------|
| SDA (SS) | 10         |
| SCK      | 13         |
| MOSI     | 11         |
| MISO     | 12         |
| RST      | 9          |
| GND      | GND        |
| 3.3V     | 3.3V       |

⚠️ Important: Do NOT connect to 5V (use 3.3V only)

---

•• ⚙️ How It Works
- The RC522 module detects an RFID card.
- Arduino reads the card UID.
- The UID is printed on the Serial Monitor.
- This UID can be used to allow or deny access.

---

•• 💻 Code Features
- Detect new RFID cards
- Read UID bytes
- Display UID in HEX format

---

•• 🚀 Possible Improvements
- Add buzzer or LED for access feedback
- Store authorized UID cards
- Build a door lock system

---

•• 📷 Project Image
•• 📷 Wiring Diagram
![Wiring](rfid_schema.png)

•• 📷 Real Implementation
![Real Setup](rfid_real.jpg)
