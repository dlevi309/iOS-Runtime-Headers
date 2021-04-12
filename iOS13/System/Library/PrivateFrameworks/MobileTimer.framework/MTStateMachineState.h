/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTStateMachineEventHandler.h>

@class MTStateMachine, NSString;

@interface MTStateMachineState : NSObject <MTStateMachineEventHandler> {

	MTStateMachine* _stateMachine;

}

@property (assign,nonatomic,__weak) MTStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTStateMachine *)stateMachine;
-(void)setStateMachine:(MTStateMachine *)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg1 ;
-(void)didExitWithNextState:(id)arg1 ;
@end

