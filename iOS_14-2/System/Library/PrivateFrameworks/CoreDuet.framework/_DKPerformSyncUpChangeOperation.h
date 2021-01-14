/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSync2Policy, _DKSyncType, NSArray, _CDMutablePerfMetric;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	NSArray* _insertedEvents;
	NSArray* _deletedEventIDs;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;

}
-(BOOL)isAsynchronous;
-(void)main;
-(void)endOperation;
@end

