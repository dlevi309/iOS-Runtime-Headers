/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKTaskCompletionCounter : NSObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	long long _target;

}
+(id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidate;
-(void)decrementCounter;
-(void)incrementCounter;
-(void)allTasksEnqueued;
@end

