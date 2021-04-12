/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSNumber, NSCalendar, NSString;

@interface CHCompanionWorkoutCreditManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _anchor;
	NSCalendar* _calendar;
	BOOL _hasPairedWatches;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)stopObservingWorkouts;
-(void)_queue_performWorkoutCreditFixup;
-(void)_queue_processWorkouts;
-(id)_queue_workoutAnchor;
-(void)_queue_fastForwardAnchor;
-(void)_queue_setWorkoutAnchor:(id)arg1 ;
-(id)_queue_userLocalProtectedDomain;
-(id)_queue_workoutsSinceAnchor:(id*)arg1 error:(id)arg2 ;
-(id)_queue_samplesForType:(id)arg1 fromStartTime:(id)arg2 toEndTime:(id)arg3 ;
-(BOOL)_queue_generateAndSaveSamplesForIntervals:(id)arg1 withExerciseMinuteTable:(id)arg2 standHourTable:(id)arg3 standMinuteTable:(id)arg4 error:(id)arg5 ;
-(void)performWorkoutCreditFixup;
@end

