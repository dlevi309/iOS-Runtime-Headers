/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

