1. Specifics about this infrastructure:
-----------------------------------------

For every additional element, why you are adding it
An additional server allows for horizontal scaling, and to accommodate the increase demand in capacity, ensuring that the website remains responsive and available to users.
The addition of a load balance (HApoxy) helps distribute incoming traffic across multiple server instance. It ensures that each server receives appropriate share of the workload.


What distribution algorithm your load balancer is configured with and how it works
Our load balance uses a Weighted Round Robin algorithm: which assigns a wight to each server instance, it allows for more fine-grained control over the distribution of workload, enabling admin to prioritize certain servers over others. 

Is your load-balancer enabling an Active-Active or Active-Passive setup, explain the difference between both
Our load-balancer uses an Active-Active setup which distributes traffic across multiple active servers, allowing for better scalability. 

An active-active setup all/both servers are actively serving traffic simultaneously, allowing for better resource utilization and scalability.
It also provides higher fault tolerance and resilience to failures because multiple servers are actively handling traffic. 

An active-passive setup only one server is actively serving traffic at a time, which may result in underutilization of resources until it becomes active. It relies on failover mechanisms to switch to passive server in case of failures on the active server. 

How a database Primary-Replica (Master-Slave) cluster works
A Primary-Replica cluster is where one database server, known as primary/master, handles both read and write operations, while the other server(s), known as slaves, replicate data from primary server and handle read-only operations. 

The primary server handles write operations, ensuring data consistency and durability, while the replica server(s) offload read operations, distributing the workload and improving performance, while also serving as backups in case of primary failure. 

What is the difference between the Primary node and the Replica node in regard to the application
The primary node handles the read and write operations. It processes incoming requests, executes write operations and updating the data in the database. It is the authoritative source of data and servers as the main point of contact for clients, it is also the central point where write operations are directed, ensuring data consistency and integrity. 

The replica node handles the read-only operations. It maintains a copy of the data from the primary node and synchronizes changes from the primary through replication mechanisms. It also serves as backups and provide redundancy in case the primary node fails. It allows for seamless failover and continuity of service. 


Issues with Distributed web infrastructure:
-----------------------------------------------------

SPOF
Single Point of Failure: If the load balancer fails or becomes overloaded, it can disrupt the distribution of traffic and prevent users from accessing the web application. 
Additionally is the master node fails or becomes unavailable, write operations cannot be processed impacting the availability and consistency of the data. 

Security issues (no firewall, no HTTPS)
Without a firewall, the infrastructure is more susceptible to unauthorized access attempts from malicious actor.

Without  HTTPS encryption, data transmitted between clients and servers is sent in plaintext, making it susceptible to interception and eavesdropping. 
Attackers can also conduct man-in-the-middle (MITM) attacks which intercept and manipulate communication between clients and servers. 

No monitoring
Operating without monitoring leaves the system vulnerable to performance issues, security threats and operational inefficiencies. It also allows challenges when it comes to optimizing resource allocation and utilization, leading to inefficient use of infrastructure resources and higher operational costs 

