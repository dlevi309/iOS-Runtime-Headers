/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_ethernet_channel.h>

@protocol OS_nw_interface, OS_dispatch_queue, OS_nw_context, OS_nw_path_evaluator, OS_nw_path_flow_registration, OS_nw_path_flow;
@class NSObject, NSString;

@interface NWConcrete_nw_ethernet_channel : NSObject <OS_nw_ethernet_channel> {

	os_unfair_lock_s _lock;
	unsigned short _ether_type;
	NSObject*<OS_nw_interface> _interface;
	const char* _interfaceName;
	int _state;
	NSObject*<OS_dispatch_queue> _client_queue;
	/*^block*/id _client_state_handler;
	/*^block*/id _client_receive_handler;
	NSObject*<OS_nw_context> _context;
	NSObject*<OS_nw_path_evaluator> _evaluator;
	NSObject*<OS_nw_path_flow_registration> _registration;
	NSObject*<OS_nw_path_flow> _flow;
	unsigned char _flow_local_ethernet_address[6];
	void* _input_source;
	BOOL _input_suspended;
	BOOL _cancelled;
	unsigned char _nexusInstance[16];
	unsigned _nexusPort;
	unsigned char _flowId[16];
	channelRef _channel;
	channel_attrRef _attributes;
	int _channel_fd;
	unsigned short _slot_size;
	channel_ring_descRef _rx_ring;
	channel_ring_descRef _tx_ring;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

