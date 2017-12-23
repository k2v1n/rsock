//
// Created on 12/22/17.
//

#ifndef RSOCK_CAP_UTIL_H
#define RSOCK_CAP_UTIL_H


//typedef char CAP_ERR_TYPE[PCAP_ERRBUF_SIZE];

#include <string>
#include <vector>

using PortLists = std::vector<u_int16_t >;

int devWithIpv4(std::string &devName, const std::string &ip);

int ipv4OfDev(const char *dev, char *ip_buf, char *err);

const std::string BuildFilterStr(const std::string &srcIp, const std::string &dstIp, const PortLists &srcPorts,
                                 const PortLists &dstPorts);

#endif //RSOCK_CAP_UTIL_H
