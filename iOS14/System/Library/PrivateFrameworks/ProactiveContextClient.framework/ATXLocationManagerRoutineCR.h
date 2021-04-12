/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXLocationManagerRoutine.h>

@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {

	RTRoutineManager* _routineManager;

}
+(id)closestLOI:(id)arg1 toLocation:(id)arg2 ;
-(id)init;
-(void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)fetchLOILocationOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchLOIVisitedDuring:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)fetchRoutineModeFromLocation:(id)arg1 ;
-(id)initWithRoutineManager:(id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

