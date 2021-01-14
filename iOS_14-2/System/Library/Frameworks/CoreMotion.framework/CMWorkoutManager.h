/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(CMWorkoutManagerInternal *)_internal;
-(id)init;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(void)startWorkout:(id)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)userDismissedWorkoutAlert;
-(void)triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
-(void)dealloc;
@end

