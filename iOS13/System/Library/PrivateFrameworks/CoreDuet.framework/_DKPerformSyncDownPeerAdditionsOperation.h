/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage, _DKKeyValueStore;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, NSArray, _DKSyncHistory, NSDate;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _peer;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	NSArray* _streamNames;
	BOOL _highPriority;
	_DKSyncHistory* _history;
	id<_DKKeyValueStore> _keyValueStore;
	NSDate* _startDate;
	NSDate* _highWaterMark;
	unsigned long long _batchNumber;
	NSArray* _overlappingWindows;
	BOOL _foundAdditions;

}
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3 ;
+(void)_updateEventStatsWithIsNewestMissingWindow:(BOOL)arg1 ;
+(void)_updateEventStatsWithSyncLatencyOfEvent:(id)arg1 ingressDate:(id)arg2 transportType:(long long)arg3 ;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncDownPeerAdditions;
-(void)performSyncDownPeerAdditionsWithDidPrewarm:(BOOL)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerAdditionsWithHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerAdditionsWithCompletedWindows:(id)arg1 ;
-(void)handleFetchedEvents:(id)arg1 completedWindows:(id)arg2 missingWindows:(id)arg3 ;
-(void)coalesceRedundantOverlappingWindows;
-(void)updateEvents:(id)arg1 withSourceDeviceID:(id)arg2 ;
@end

