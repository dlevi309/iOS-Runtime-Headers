/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMExerciseMinuteData;

@interface CMExerciseMinuteInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	BOOL fStartedUpdates;
	CMExerciseMinuteData* fMostRecentRecord;
	/*^block*/id fHandler;

}
-(id)init;
-(void)_teardown;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

