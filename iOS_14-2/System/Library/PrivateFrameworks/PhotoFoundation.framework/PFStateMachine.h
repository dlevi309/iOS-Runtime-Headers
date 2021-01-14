/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, PFStateMachineGraph, PFStateMachineNode, NSString, NSMutableArray;

@interface PFStateMachine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _uuid;
	PFStateMachineGraph* _graph;
	PFStateMachineNode* _previousNode;
	PFStateMachineNode* _currentNode;
	id _owner;
	NSString* _name;
	id _delayedEventCancelToken;
	NSMutableArray* _subflowStack;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) id uuid;                      //@synthesize uuid=_uuid - In the implementation block
-(id)graph;
-(id)uuid;
-(id)owner;
-(void)handleEvent:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)trace:(id)arg1 ;
-(id)currentNode;
-(void)_handleEvent:(id)arg1 ;
-(id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3 ;
-(id)previousNode;
-(void)_pushReturnTransition:(id)arg1 ;
-(id)_popReturnTransition;
-(void)postEvent:(id)arg1 afterTimeout:(double)arg2 ;
-(void)atomicHandleEvent:(/*^block*/id)arg1 ;
-(void)atomicHandleEventAsync:(/*^block*/id)arg1 ;
-(id)atomicQueue;
-(void)_cancelLastDelayedEvent;
-(void)traceObject:(id)arg1 state:(id)arg2 ;
-(void)dealloc;
@end

