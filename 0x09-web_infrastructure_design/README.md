0x09-web_infrastructure_design
----------------------------------

0. Simple web stack

* Simple web infrastructure design that consists of:

        * 1 server
        * 1 web server (Nginx)
        * 1 application server
        * 1 application files (your code base)
        * 1 database (MySQL)
        * 1 domain name foobar.com congifured with a www record tht points to the server 8.8.8.8

================================================================

1. Distributed web infrastructure

* Three server web infrastructure:

        * 2 servers
        * 1 web server (Nginx)
        * 1 application server
        * 1 load balancer (HAproxy)
        * 1 set of application files (code base)
        * 1 database

===============================================================

2. Secured and monitored web infrastructure

* Secured and monitored web infrastructure that consists of:

        * 3 firewalls
        * 1 SSL certificate to serve www.foobar.com over HTTPS
        * 3 monitoring clients (data collector for Sumologic or other monitoring services)

===============================================================

AUTHORS
--------

* Godwin Asuquo <asuquogodwin34@gmail.com>
* Roslyn Lewis <roslynclewis1004@gmail.com>
