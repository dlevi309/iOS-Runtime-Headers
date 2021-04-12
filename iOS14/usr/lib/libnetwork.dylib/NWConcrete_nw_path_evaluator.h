/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path_evaluator.h>

@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_browse_descriptor, OS_nw_advertise_descriptor, OS_dispatch_queue;
@class NSObject, NWConcrete_nw_path, NSString;

@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator> {

	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_browse_descriptor> descriptor;
	NSObject*<OS_nw_advertise_descriptor> advertise_descriptor;
	NWConcrete_nw_path* path;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id update_block;
	/*^block*/id cancel_handler;
	unsigned char client_id[16];
	os_unfair_lock_s lock;
	unsigned flow_count;
	unsigned short custom_ethertype;
	unsigned char custom_ip_protocol;
	unsigned is_default : 1;
	unsigned is_listener : 1;
	unsigned is_interpose : 1;
	unsigned started : 1;
	unsigned cancelled : 1;
	unsigned logging : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

