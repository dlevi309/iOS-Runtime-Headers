/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(void)main;
-(void)endOperation;
@end

