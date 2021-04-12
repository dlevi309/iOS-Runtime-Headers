/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

