2. Specifics about this infrastructure:
----------------------------------------
For every additional element, why you are adding it
Firewalls: Firewalls act as a barrier between public internet and the internal network, filtering incoming and outgoing traffic based on predefined security rules. Adding them creates layers of defense to protect against different types of cyber threats.

Secure Sockets Layer (SSL): are used to encrypt data transmitted between the web server and the user's browser, ensuring privacy and data integrity. It provides authentication, verifying the identity of the server to the user's browser, which helps build trust and confidence in the website. 

Monitoring Clients: are software agents or scripts installed on server or network device to collect performance metrics, they monitor key performance indicators (KPI's) detect anomalies, and generate alerts or notifications in case of issues or security. 

What are firewalls for
Firewalls act as a barrier between the public internet and internal network, filtering incoming and outgoing traffic based on predefined security rules. It performs network-level filtering, application-level filtering, or perimeter defense, providing comprehensive security coverage. 

Why is the traffic served over HTTPS
Hypertext Transfer Protocol Secure, means that the communication between the client (web browser) and the server is encrypted using SSL/TLS (Secure Sockets Layer/Transport Layer Security). Serving traffic over HTTPS provides a secure and encrypted 
communication channel between clients and servers, protecting sensitive data and ensuring privacy, integrity, authenticity of web content. 

What monitoring is used for
Monitoring helps track the performance of servers, networks, databases, and applications in real-time.  It ensures that services and resources are available and accessible to users, and helps detect and mitigate security threats and vulnerabilities. 

Monitoring helps maintain the health, performance, security and availability of web infrastructure and applications, enabling organizations to proactively manage and optimize the digital assets. it  

How the monitoring tool is collecting data
The collecting of data is done through agent-based monitoring which gets collected from CPU usage, memory utilisation, disk I/O, network traffic and process activity. Data is also collects application-specific metrics, logs, and performance data. Monitoring gather comprehensive insights into the health, performance and availability of infrastructure and applications, enabling effective monitoring and management of digital assets. 

Explain what to do if you want to monitor your web server QPS
To monitor the Queries Per Second (QPS) a monitoring tool that supports measuring QPS metrics should be installed on the web server. The tool should be configured to target the web server and enable metrics exporting in the web server configuration.


Issues with Secured and monitored web infrastructure:
-----------------------------------------------------

Why terminating SSL at the load balancer level is an issue
Terminating SSL at the load balancer means that the SSL connection between the client and the backend server is terminated. Termination at the load balancer prevents backend servers from directly observing encrypted traffic, limiting visibility into the contents of the traffic.

Terminating can also offer benefits such as offloading SSL processing from backend servers, improving scalability and simplifying certificate management. 

Why having only one MySQL server capable of accepting writes is an issue
If the server experiences hardware failure software crashes or other issues, the entire write operation functionality becomes unavailable until the server is restored or replaced. 
Scalability is limited and there is no backup system to automatically take over write operations.


Why having servers with all the same components (database, web server and application server) might be a problem
Having servers with identical components causes the servers to compete for the same system resources, leading to resource contention and performance degradation. It can be challenging if the workload for one component grows disproportionately which can lead to inefficiencies and increased infrastructure costs.
