/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, NSMutableArray;

@interface _DKPerformSyncDownPeerOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _peer;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	NSMutableArray* _operations;

}
-(BOOL)isAsynchronous;
-(void)main;
-(void)endOperation;
@end

