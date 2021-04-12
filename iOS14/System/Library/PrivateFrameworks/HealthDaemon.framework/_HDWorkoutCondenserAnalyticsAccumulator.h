/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject {

	BOOL _hasProcessedWorkout;
	long long _workoutsToCondense;
	long long _workoutsToRecondense;
	long long _condensedWorkouts;
	long long _processedWorkouts;
	long long _createdSeries;
	long long _deletedSamples;

}

@property (assign,nonatomic) long long workoutsToCondense;                //@synthesize workoutsToCondense=_workoutsToCondense - In the implementation block
@property (assign,nonatomic) long long workoutsToRecondense;              //@synthesize workoutsToRecondense=_workoutsToRecondense - In the implementation block
@property (assign,nonatomic) long long condensedWorkouts;                 //@synthesize condensedWorkouts=_condensedWorkouts - In the implementation block
@property (assign,nonatomic) long long processedWorkouts;                 //@synthesize processedWorkouts=_processedWorkouts - In the implementation block
@property (assign,nonatomic) long long createdSeries;                     //@synthesize createdSeries=_createdSeries - In the implementation block
@property (assign,nonatomic) long long deletedSamples;                    //@synthesize deletedSamples=_deletedSamples - In the implementation block
@property (assign,nonatomic) BOOL hasProcessedWorkout;                    //@synthesize hasProcessedWorkout=_hasProcessedWorkout - In the implementation block
-(id)init;
-(id)description;
-(long long)deletedSamples;
-(void)setDeletedSamples:(long long)arg1 ;
-(void)setWorkoutsToCondense:(long long)arg1 ;
-(void)setWorkoutsToRecondense:(long long)arg1 ;
-(void)setHasProcessedWorkout:(BOOL)arg1 ;
-(long long)condensedWorkouts;
-(void)setCondensedWorkouts:(long long)arg1 ;
-(BOOL)hasProcessedWorkout;
-(long long)processedWorkouts;
-(void)setProcessedWorkouts:(long long)arg1 ;
-(long long)createdSeries;
-(void)setCreatedSeries:(long long)arg1 ;
-(long long)workoutsToCondense;
-(long long)workoutsToRecondense;
@end

