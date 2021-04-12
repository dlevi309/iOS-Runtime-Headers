/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
*/


@protocol OS_dispatch_io;
@class OS_xpc_remote_channel, NSObject;

@interface OS_xpc_remote_pending_stream : NSObject {

	unsigned long long stream_id;
	OS_xpc_remote_channel* channel;
	NSObject*<OS_dispatch_io> io;
	int direction;
	/*^block*/id completion_handler;
	int error;
	OS_xpc_remote_pending_stream* link_stqe_next;

}
@end

