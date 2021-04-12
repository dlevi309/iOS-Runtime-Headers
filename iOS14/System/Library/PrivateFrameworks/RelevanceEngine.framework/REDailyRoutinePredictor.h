/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REObservableSingleton.h>
#import <libobjc.A.dylib/REPeriodOfDayPredictorDelegate.h>

@protocol OS_dispatch_queue;
@class REPeriodOfDayPredictor, REUpNextTimer, NSObject, NSDateInterval, NSLock, NSNumber, NSString;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate> {

	REPeriodOfDayPredictor* _periodOfDayPredictor;
	REUpNextTimer* _endMorningRoutineTimer;
	REUpNextTimer* _beginEveningRoutineTimer;
	REUpNextTimer* _endEveningRoutineTimer;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentRoutine;
	NSDateInterval* _currentRoutineInterval;
	NSLock* _routineLock;
	NSNumber* _overrideRoutineType;

}

@property (nonatomic,readonly) unsigned long long currentRoutineType; 
@property (nonatomic,readonly) NSDateInterval * currentRoutineInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_init;
-(void)dealloc;
-(void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1 ;
-(void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1 ;
-(id)_eveningRoutineIntervalForEvening:(id)arg1 ;
-(id)_morningRoutineIntervalForMorning:(id)arg1 ;
-(void)_updateCurrentRoutine;
-(void)_queue_setupMorningBeginTimerIfNeeded;
-(void)_queue_setupEveningBeginTimerIfNeeded;
-(void)_queue_didEndMorningRoutine;
-(void)_queue_didEndEveningRoutine;
-(void)_queue_didBeginMorningRoutine;
-(void)_queue_didBeginEveningRoutine;
-(unsigned long long)currentRoutineType;
-(NSDateInterval *)currentRoutineInterval;
-(id)routineIntervalForNextRoutine:(unsigned long long)arg1 ;
-(id)routineIntervalForPreviousRoutine:(unsigned long long)arg1 ;
-(void)_setOverrideRoutineType:(unsigned long long)arg1 ;
@end

