/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject {

	CMExerciseMinuteInternal* _internal;

}

@property (nonatomic,readonly) CMExerciseMinuteInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxExerciseMinuteDataEntries;
+(BOOL)isExerciseMinuteAvailable;
-(CMExerciseMinuteInternal *)_internal;
-(id)init;
-(void)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)dealloc;
@end

