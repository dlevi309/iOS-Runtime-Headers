/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject {

	NSMutableDictionary* _nodes;
	NSMutableDictionary* _globalTransitions;
	PFStateMachineNode* _initialNode;

}

@property (retain) PFStateMachineNode * initialNode;              //@synthesize initialNode=_initialNode - In the implementation block
-(id)dot:(BOOL)arg1 ;
-(id)init;
-(id)addNode:(id)arg1 ;
-(id)transitionForEventName:(id)arg1 ;
-(PFStateMachineNode *)initialNode;
-(void)addGlobalTransition:(id)arg1 ;
-(void)addGlobalTransitionOn:(id)arg1 to:(id)arg2 ;
-(id)findNodeWithName:(id)arg1 ;
-(void)setInitialNode:(PFStateMachineNode *)arg1 ;
@end

