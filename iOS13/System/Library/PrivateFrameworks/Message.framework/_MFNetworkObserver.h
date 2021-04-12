/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MFNetworkObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(void)execute;
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

