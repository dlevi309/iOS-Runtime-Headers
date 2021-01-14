/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMStepCounterProxy : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fStartedUpdates;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	long long fStepCountFromStart;
	long long fPrevStepCount;

}
-(id)init;
-(void)_teardown;
-(void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

