/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CMPocketStateQueueBlockPair : NSObject {

	NSObject*<OS_dispatch_queue> fQueryQueue;
	/*^block*/id fQueryBlock;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)dispatchWithState:(long long)arg1 andError:(id)arg2 ;
-(void)dealloc;
@end

