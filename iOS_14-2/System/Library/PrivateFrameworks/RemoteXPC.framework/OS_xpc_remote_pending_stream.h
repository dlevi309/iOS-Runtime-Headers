/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

