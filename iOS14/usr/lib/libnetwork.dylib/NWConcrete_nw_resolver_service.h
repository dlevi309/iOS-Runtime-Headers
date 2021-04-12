/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_resolver_service.h>

@protocol OS_nw_endpoint, OS_dnssd_getaddrinfo;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver_service : NSObject <OS_nw_resolver_service> {

	NSObject*<OS_nw_endpoint> service_host;
	NSObject*<OS_nw_endpoint> alternative_origin;
	NSObject*<OS_dnssd_getaddrinfo> gai;
	unsigned short priority;
	unsigned short port;
	unsigned short flags;
	unsigned sensitive_redacted : 1;
	unsigned host_matches_origin : 1;
	unsigned port_matches_origin : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
@end

