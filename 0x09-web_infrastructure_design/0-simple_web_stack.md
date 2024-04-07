0. Specifics about this infrastructure:
-----------------------------------------

* **What is a server?**

A server is a computer or software system that provides functionality, services, data or resources to other computers, know as clients, over a network. These services can range from delivering web pages and emails, to storing and managing files or running applications.

* **What is the role of the domain name?**

A domain name is a human-readable label that corresponds to a specific numeric address on the Internet called an IP. It serves as identifiers and facilitators of communication and online presence on the internet enabling users to access websites, send emails and interact with online resources.

* **What type of DNS record www is in www.foobar.com**

The "www" in a DNS (Domain Name System) record refers to a subdomain used to denote World Wide Web or a specific server within a domain. It ensures that both variations of www.foobar.com and foobar.com points to the same location

* *What is the role of the web server?**

To deliver web content to clients over the internet or an intranet. It acts as a mediator between clients, such as web browsers, and the backend systems or files that contain the requested content. It is the foundation on which websites and web applications are built.

* **What is the role of the application server?**

The backbone of the web application, it is the intermediary between the front-end(client-side) and the back-end(database).
It handles user requests, executed business logic, generates dynamic content. and optimizing performance and reliability.

* **What is the role of the database?**

The database serves as the central repository for storing and managing data in web application, ensuring data integrity, consistency and accessibility while providing mechanisms for efficient data retrieval and manipulation.
It's primary role is to store, manage, and organize structured data that the application needs to function.

* **What is the server using to communicate with the computer of the user requesting the website**

Primarily through the Hypertext Transfer Protocol (HTTP), this process allows for seamless communication between a user's computer and the server hosting the website, enabling the retrieval and display of web content over the internet.


Issues with Simple web stack:
--------------------------------

* **SPOF**

Single Point of failure: The entire web stack relies on a single server to handle incoming requests ad manage data in the database. If the server experiences issues e.g.. hardware failure, software crashing or an issue with the network infrastructure, the entire website becomes inaccessible until the server is restored or replaced

* **Downtime when maintenance needed (like deploying new code web server needs to be restarted)**

When maintenance is needed e.g.. deploying new code; the website will need to be  taken offline temporarily to prevent interruptions during updates, leading to user frustration if not notified in a timely manner.


* **Cannot scale if too much incoming traffic**

When too much incoming traffic this will lead to the website slowing down, server overload, timeouts and dropped connections.
In extreme cases there is a risk of system failure, crashes or outages.
