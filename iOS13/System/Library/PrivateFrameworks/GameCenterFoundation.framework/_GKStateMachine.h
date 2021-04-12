/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol _GKStateMachineDelegate;
#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSString, NSDictionary;

@interface _GKStateMachine : NSObject {

	os_unfair_lock_s _lock;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<_GKStateMachineDelegate> _delegate;
	BOOL _shouldLogStateTransitions;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) id<_GKStateMachineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_GKStateMachineDelegate>)delegate;
-(void)setDelegate:(id<_GKStateMachineDelegate>)arg1 ;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(BOOL)applyState:(id)arg1 ;
-(BOOL)_setCurrentState:(id)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
@end

