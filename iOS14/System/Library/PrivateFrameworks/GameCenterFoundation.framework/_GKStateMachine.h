/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol _GKStateMachineDelegate;
#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString;

@interface _GKStateMachine : NSObject {

	os_unfair_lock_s _lock;
	BOOL _shouldLogStateTransitions;
	NSDictionary* _validTransitions;
	id<_GKStateMachineDelegate> _delegate;
	NSString* _currentState;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (__weak) id<_GKStateMachineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)setCurrentState:(NSString *)arg1 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(NSDictionary *)validTransitions;
-(id)init;
-(NSString *)currentState;
-(id<_GKStateMachineDelegate>)delegate;
-(void)setDelegate:(id<_GKStateMachineDelegate>)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(BOOL)applyState:(id)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)dealloc;
@end

