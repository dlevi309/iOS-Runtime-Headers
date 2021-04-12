/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, _DKSyncHistory, NSDate;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _peer;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	BOOL _highPriority;
	_DKSyncHistory* _history;
	NSDate* _highWaterMark;
	unsigned long long _batchNumber;
	BOOL _foundDeletions;

}
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2 ;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncDownPeerDeletions;
-(void)performSyncDownPeerDeletionsWithDidPrewarm:(BOOL)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1 ;
-(void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4 ;
@end

