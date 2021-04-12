/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXLocationManagerRoutine.h>

@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {

	RTRoutineManager* _routineManager;

}
+(id)closestLOI:(id)arg1 toLocation:(id)arg2 ;
-(id)init;
-(id)initWithRoutineManager:(id)arg1 ;
-(void)fetchLOILocationOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchLOIVisitedDuring:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(unsigned long long)fetchRoutineModeFromLocation:(id)arg1 ;
@end

