/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAVisitStateSettings, NSHashTable, TAScanRequest, TAInterVisitMetricsSnapshot, TACircularBuffer, NSMutableDictionary;

@interface TAVisitState : NSObject {

	TAVisitStateSettings* _settings;
	NSHashTable* _observers;
	TAScanRequest* _scanRequest;
	TAInterVisitMetricsSnapshot* _interVisitMetricsSnapshotBackup;
	unsigned long long _state;
	TACircularBuffer* _poiSnapshotBuffer;
	TACircularBuffer* _interVisitMetricSnapshotBuffer;
	NSMutableDictionary* _importantLois;

}

@property (nonatomic,readonly) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) TACircularBuffer * poiSnapshotBuffer;                           //@synthesize poiSnapshotBuffer=_poiSnapshotBuffer - In the implementation block
@property (nonatomic,readonly) TACircularBuffer * interVisitMetricSnapshotBuffer;              //@synthesize interVisitMetricSnapshotBuffer=_interVisitMetricSnapshotBuffer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * importantLois;                            //@synthesize importantLois=_importantLois - In the implementation block
+(id)visitStateTypeToString:(unsigned long long)arg1 ;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)state;
-(BOOL)setState:(unsigned long long)arg1 ;
-(TACircularBuffer *)poiSnapshotBuffer;
-(TACircularBuffer *)interVisitMetricSnapshotBuffer;
-(void)purgeWithClock:(id)arg1 ;
-(void)updateImportantLOIs:(id)arg1 currentDate:(id)arg2 ;
-(unsigned long long)stateTransitionDecisionGivenTACLVisit:(id)arg1 ;
-(void)performStateTransitionDecision:(unsigned long long)arg1 store:(id)arg2 visit:(id)arg3 andAppendOutgoingRequestsTo:(id)arg4 ;
-(void)labelLoiTypeForLastVisitSnapshot:(id)arg1 ;
-(void)updateInterVisitSnapshotWithStore:(id)arg1 ;
-(void)updateInterVisitBackupSnapshotWithStore:(id)arg1 ;
-(void)purgeVisitSnapshotBufferWithCurrentDate:(id)arg1 ;
-(void)purgeInterVisitSnapshotBufferWithCurrentDate:(id)arg1 ;
-(void)notifyObserversOfStateChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)closeVisitSnapshotWithStore:(id)arg1 visit:(id)arg2 ;
-(unsigned long long)evaluateLatestVisitSnapshotAndRecoverIfNecessary;
-(void)openInterVisitSnapshotWithDepartureVisit:(id)arg1 ;
-(void)issueInterVisitScanRequestIfNecessaryWithClosedSnapshot:(id)arg1 store:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(void)notifyObserversOfMetricsHint:(unsigned long long)arg1 ;
-(void)openVisitSnapshotWithStore:(id)arg1 visit:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(void)issueVisitEntryScanRequestIfNecessaryWithOpenSnapshot:(id)arg1 clock:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(void)closeLatestInterVisitSnapshotWithStore:(id)arg1 date:(id)arg2 ;
-(void)openInterVisitBackupSnapshotWithArrivalVisit:(id)arg1 ;
-(id)getDisplayEventsWithFirstPrecedingInInterval:(id)arg1 store:(id)arg2 ;
-(void)updateInterVisitSnapshot:(id)arg1 store:(id)arg2 ;
-(void)resetInterVisitBackupSnapshot;
-(id)initWithSettings:(id)arg1 scanRequestSettings:(id)arg2 ;
-(void)ingestTAEvent:(id)arg1 store:(id)arg2 appendOutgoingRequestsTo:(id)arg3 ;
-(void)closeInterVisitBackupSnapshotWithStore:(id)arg1 date:(id)arg2 ;
-(NSMutableDictionary *)importantLois;
@end

