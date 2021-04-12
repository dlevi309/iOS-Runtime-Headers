/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
*/


@protocol OS_dispatch_data, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface OS_xpc_remote_message : NSObject {

	unsigned long long msg_id;
	/*^block*/id barrier;
	NSObject*<OS_dispatch_data> body;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	int ool_length;
	NSObject*<OS_xpc_object> ool[16];
	OS_xpc_remote_message* link_stqe_next;

}
@end

