/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TACircularBuffer, NSMutableDictionary, TAVisitStateSettings, NSHashTable, TAScanRequest, TAInterVisitMetricsSnapshot;

@interface TAVisitState : NSObject <NSSecureCoding> {

	unsigned long long _state;
	TACircularBuffer* _visitSnapshotBuffer;
	TACircularBuffer* _interVisitMetricSnapshotBuffer;
	NSMutableDictionary* _importantLois;
	TAVisitStateSettings* _settings;
	NSHashTable* _observers;
	TAScanRequest* _scanRequest;
	TAInterVisitMetricsSnapshot* _interVisitMetricsSnapshotBackup;

}

@property (nonatomic,retain) TAVisitStateSettings * settings;                                            //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) TAScanRequest * scanRequest;                                                //@synthesize scanRequest=_scanRequest - In the implementation block
@property (nonatomic,retain) TAInterVisitMetricsSnapshot * interVisitMetricsSnapshotBackup;              //@synthesize interVisitMetricsSnapshotBackup=_interVisitMetricsSnapshotBackup - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) TACircularBuffer * visitSnapshotBuffer;                                   //@synthesize visitSnapshotBuffer=_visitSnapshotBuffer - In the implementation block
@property (nonatomic,readonly) TACircularBuffer * interVisitMetricSnapshotBuffer;                        //@synthesize interVisitMetricSnapshotBuffer=_interVisitMetricSnapshotBuffer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * importantLois;                                      //@synthesize importantLois=_importantLois - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)visitStateTypeToString:(unsigned long long)arg1 ;
-(NSMutableDictionary *)importantLois;
-(void)addObserver:(id)arg1 ;
-(void)notifyObserversOfStateChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)closeVisitSnapshotWithStore:(id)arg1 visit:(id)arg2 ;
-(void)purgeInterVisitSnapshotBufferWithCurrentDate:(id)arg1 ;
-(NSHashTable *)observers;
-(void)purgeWithClock:(id)arg1 ;
-(unsigned long long)evaluateLatestVisitSnapshotAndRecoverIfNecessary;
-(void)issueVisitEntryScanRequestIfNecessaryWithOpenSnapshot:(id)arg1 clock:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(unsigned long long)stateTransitionDecisionGivenTACLVisit:(id)arg1 ;
-(void)openVisitSnapshotWithStore:(id)arg1 visit:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(id)getDisplayEventsWithFirstPrecedingInInterval:(id)arg1 store:(id)arg2 ;
-(void)setScanRequest:(TAScanRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(TAInterVisitMetricsSnapshot *)interVisitMetricsSnapshotBackup;
-(void)openInterVisitSnapshotWithDepartureVisit:(id)arg1 ;
-(void)performStateTransitionDecision:(unsigned long long)arg1 store:(id)arg2 visit:(id)arg3 andAppendOutgoingRequestsTo:(id)arg4 ;
-(void)setSettings:(TAVisitStateSettings *)arg1 ;
-(void)updateInterVisitSnapshot:(id)arg1 store:(id)arg2 ;
-(id)description;
-(TACircularBuffer *)visitSnapshotBuffer;
-(void)closeLatestInterVisitSnapshotWithStore:(id)arg1 date:(id)arg2 ;
-(void)updateImportantLOIs:(id)arg1 currentDate:(id)arg2 ;
-(void)recoverInterVisitSnapshotWithArrivalVisit:(id)arg1 store:(id)arg2 ;
-(void)issueInterVisitScanRequestIfNecessaryWithClosedSnapshot:(id)arg1 store:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)labelLoiTypeForLastVisitSnapshot:(id)arg1 ;
-(TAVisitStateSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(void)purgeVisitSnapshotBufferWithCurrentDate:(id)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 ;
-(void)setInterVisitMetricsSnapshotBackup:(TAInterVisitMetricsSnapshot *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)ingestTAEvent:(id)arg1 store:(id)arg2 appendOutgoingRequestsTo:(id)arg3 ;
-(unsigned long long)state;
-(void)resetInterVisitBackupSnapshot;
-(id)initWithSettings:(id)arg1 scanRequestSettings:(id)arg2 ;
-(id)getLastestValidVisitDepartureDate;
-(TAScanRequest *)scanRequest;
-(void)mergeWithAnotherTAVisitState:(id)arg1 ;
-(void)updateInterVisitBackupSnapshotWithStore:(id)arg1 ;
-(TACircularBuffer *)interVisitMetricSnapshotBuffer;
-(void)notifyObserversOfMetricsHint:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)openInterVisitBackupSnapshotWithArrivalVisit:(id)arg1 ;
-(void)updateInterVisitSnapshotWithStore:(id)arg1 ;
@end

