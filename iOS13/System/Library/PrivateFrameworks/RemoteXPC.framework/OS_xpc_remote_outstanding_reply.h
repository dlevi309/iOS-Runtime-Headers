/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_outstanding_reply : NSObject {

	unsigned long long msg_id;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	OS_xpc_remote_outstanding_reply* link_stqe_next;

}
@end

