/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CMPocketStateQueueBlockPair : NSObject {

	NSObject*<OS_dispatch_queue> fQueryQueue;
	/*^block*/id fQueryBlock;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)dispatchWithState:(long long)arg1 andError:(id)arg2 ;
@end

