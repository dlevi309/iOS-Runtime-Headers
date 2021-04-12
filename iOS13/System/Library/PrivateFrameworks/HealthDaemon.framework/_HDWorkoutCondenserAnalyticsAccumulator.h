/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCondensedWorkouts:(long long)arg1 ;
-(void)setProcessedWorkouts:(long long)arg1 ;
-(void)setCreatedSeries:(long long)arg1 ;
-(long long)workoutsToCondense;
-(long long)workoutsToRecondense;
-(long long)condensedWorkouts;
-(long long)processedWorkouts;
-(long long)createdSeries;
-(void)setHasProcessedWorkout:(BOOL)arg1 ;
-(BOOL)hasProcessedWorkout;
@end

