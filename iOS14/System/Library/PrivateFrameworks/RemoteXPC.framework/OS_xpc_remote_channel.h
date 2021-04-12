/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
*/


@protocol OS_dispatch_queue, OS_nw_connection, OS_dispatch_io;
@class NSObject;

@interface OS_xpc_remote_channel : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSObject*<OS_nw_connection> conn;
	/*^block*/id event_handler;
	/*^block*/id msg_handler;
	unsigned state;
	int error;
	int stream_direction;
	NSObject*<OS_dispatch_io> stream_io;
	NSObject*<OS_dispatch_io> parent_io;
	BOOL tx_complete;
	unsigned char wire_version;

}
@end

