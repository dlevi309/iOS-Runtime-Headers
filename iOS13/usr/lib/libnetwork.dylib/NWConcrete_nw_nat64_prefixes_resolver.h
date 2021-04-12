/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_nat64_prefixes_resolver.h>

@protocol OS_nw_parameters, OS_nw_context, OS_dispatch_queue, OS_nw_path_evaluator;
@class NSObject, NSString;

@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver> {

	os_unfair_lock_s lock;
	unsigned ifindex;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_context> context;
	NWConcrete_nw_nat64_prefixes_resolver* internally_retained_object;
	unsigned dns_service_id;
	DNSServiceRef_tRef dns_service;
	int dns_error;
	/*^block*/id update_handler;
	/*^block*/id cancel_handler;
	NSObject*<OS_dispatch_queue> client_queue;
	in6_addr* ipv6_addrs;
	NSObject*<OS_nw_path_evaluator> evaluator;
	int address_count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithParameters:(id)arg1 ;
@end

