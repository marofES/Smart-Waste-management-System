# Smart-Waste-management-System
Smart waste management solutions use sensors placed in waste receptacles to measure fill levels and to notify city collection services when bins are ready to be emptied.

The main purpose of the entire waste management system was to build a smart waste bin which surrounding by several kind of sensors. The sensors were used for a particular measurement. Like ultrasonic sensor use for distance measurement. By that we were found the bin was full or not. MQ4 Gas Sensor were use for sensing the (Methane [CH4] is a colorless) gas existing limit.

The next one was Load Cell HX711 sensor. It was measuring the amount of waste this bin was producing. Sensors were providing the reliable data from different kind of positions. After receiving the data we were using it for predict the waste amount for a particular area by using KNN machine learning algorithm. Since this algorithm required no training before making predictions, new data could be add seamlessly. Also there were only two parameters required to implement KNN(the value of k and the distance). Finally we were find the shortest path by using Dijkstra for quick transport of fulled area
waste.

For the whole procedure we were using Thing-speak which is an iot platform for analyzing the data and cloud storage. It was showing the data graphs per channel wise. For data transmit with iot platform we used ESP8266 Wi-Fi module. This module was a connection bridge between the main station and the platform.At last we were sending the result via e-mail to municipal. For that we were used IFTTT. Its a Collections groups together applets for different platforms. Like here it was connecting between Thing-speak server and e-mail server.
