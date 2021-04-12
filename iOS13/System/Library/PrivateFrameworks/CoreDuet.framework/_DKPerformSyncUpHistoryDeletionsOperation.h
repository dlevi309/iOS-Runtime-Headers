/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKPerformSyncUpHistoryAdditionsOperation, _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, NSArray, NSDate, _DKSyncHistory;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {

	_DKPerformSyncUpHistoryAdditionsOperation* _sibling;
	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _me;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	NSArray* _streamNames;
	NSDate* _now;
	_DKSyncHistory* _history;
	unsigned long long _batchNumber;

}
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2 ;
-(void)main;
-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncUpHistoryDeletions;
-(BOOL)existsAdditionsSyncHistory;
-(void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1 ;
-(void)handleUpdateStorageWithStartDate:(id)arg1 endDate:(id)arg2 deletedEventIDsCount:(unsigned long long)arg3 orError:(id)arg4 ;
-(id)initWithParent:(id)arg1 sibling:(id)arg2 localStorage:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 type:(id)arg7 ;
@end

