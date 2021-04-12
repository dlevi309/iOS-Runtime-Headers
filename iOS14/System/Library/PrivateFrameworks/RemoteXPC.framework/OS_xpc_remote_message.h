/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

