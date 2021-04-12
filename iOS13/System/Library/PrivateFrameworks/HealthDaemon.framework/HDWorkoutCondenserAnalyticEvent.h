/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSError, NSString;

@interface HDWorkoutCondenserAnalyticEvent : NSObject <HDAnalyticSubmissionEvent> {

	BOOL _hasWatchSource;
	BOOL _success;
	long long _reason;
	long long _batchSize;
	double _duration;
	NSError* _error;
	NSError* _underlyingError;
	long long _workoutsToCondense;
	long long _workoutsToRecondense;
	long long _condensedWorkouts;
	long long _processedWorkouts;
	long long _createdSeries;
	long long _deletedSamples;

}

@property (nonatomic,readonly) long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) long long batchSize;                         //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchSource;                         //@synthesize hasWatchSource=_hasWatchSource - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,readonly) long long workoutsToCondense;                //@synthesize workoutsToCondense=_workoutsToCondense - In the implementation block
@property (nonatomic,readonly) long long workoutsToRecondense;              //@synthesize workoutsToRecondense=_workoutsToRecondense - In the implementation block
@property (nonatomic,readonly) long long condensedWorkouts;                 //@synthesize condensedWorkouts=_condensedWorkouts - In the implementation block
@property (nonatomic,readonly) long long processedWorkouts;                 //@synthesize processedWorkouts=_processedWorkouts - In the implementation block
@property (nonatomic,readonly) long long createdSeries;                     //@synthesize createdSeries=_createdSeries - In the implementation block
@property (nonatomic,readonly) long long deletedSamples;                    //@synthesize deletedSamples=_deletedSamples - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)reason;
-(NSError *)error;
-(double)duration;
-(long long)batchSize;
-(BOOL)success;
-(NSError *)underlyingError;
-(unsigned)AWDMetricID;
-(id)codableRepresentationForAWDSubmission;
-(long long)deletedSamples;
-(BOOL)hasWatchSource;
-(long long)workoutsToCondense;
-(long long)workoutsToRecondense;
-(long long)condensedWorkouts;
-(long long)processedWorkouts;
-(long long)createdSeries;
-(id)initWithReason:(long long)arg1 batchSize:(long long)arg2 hasWatchSource:(BOOL)arg3 duration:(double)arg4 success:(BOOL)arg5 error:(id)arg6 workoutsToCondense:(long long)arg7 workoutsToRecondense:(long long)arg8 condensedWorkouts:(long long)arg9 processedWorkouts:(long long)arg10 createdSeries:(long long)arg11 deletedSamples:(long long)arg12 ;
@end

