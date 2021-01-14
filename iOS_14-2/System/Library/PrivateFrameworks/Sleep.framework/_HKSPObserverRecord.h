/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@protocol NAScheduler;
@interface _HKSPObserverRecord : NSObject {

	id _observer;
	id<NAScheduler> _callbackScheduler;

}

@property (nonatomic,__weak,readonly) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler;              //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
-(id)observer;
-(id<NAScheduler>)callbackScheduler;
-(id)initWithObserver:(id)arg1 callbackScheduler:(id)arg2 ;
@end

