/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BOOL)cancel;
@end

