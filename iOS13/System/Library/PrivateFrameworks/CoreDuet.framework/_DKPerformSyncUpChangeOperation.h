/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 policy:(id)arg4 type:(id)arg5 insertedEvents:(id)arg6 deletedEvents:(id)arg7 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncUpChange;
@end

