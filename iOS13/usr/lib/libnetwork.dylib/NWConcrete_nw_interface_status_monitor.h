/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_interface_status_monitor.h>

@protocol OS_nw_interface, OS_nw_channel, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor> {

	NSObject*<OS_nw_interface> interface;
	NSObject*<OS_nw_channel> channel;
	/*^block*/id packet_handler;
	NSObject*<OS_dispatch_queue> packet_handler_queue;
	/*^block*/id update_handler;
	NSObject*<OS_dispatch_queue> update_handler_queue;
	void* channel_event_source;
	void* interface_advisory_source;
	unsigned cancelled : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

