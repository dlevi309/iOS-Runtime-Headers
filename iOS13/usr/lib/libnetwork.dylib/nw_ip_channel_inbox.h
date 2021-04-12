/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/nw_listener_inbox.h>

@protocol OS_nw_path, OS_nw_path_flow, OS_nw_channel;
@class NSObject;

@interface nw_ip_channel_inbox : nw_listener_inbox {

	NSObject*<OS_nw_path> _path;
	NSObject*<OS_nw_path_flow> _flow;
	NSObject*<OS_nw_channel> _channel;
	nw_protocol* _protocol;
	const sockaddr_in_4_6* _local;
	unsigned _scopeid;
	unsigned short _local_port;
	unsigned char _ip_proto;
	unsigned _bound_local_address : 1;

}
-(BOOL)cancel;
-(id)initWithPath:(id)arg1 flow:(id)arg2 parameters:(id)arg3 delegate:(id)arg4 ;
-(BOOL)matchesFlow:(id)arg1 parameters:(id)arg2 ;
@end

