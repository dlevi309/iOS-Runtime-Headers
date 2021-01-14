/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willExitWithNextState:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg1 ;
-(void)didExitWithNextState:(id)arg1 ;
-(void)setStateMachine:(MTStateMachine *)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(MTStateMachine *)stateMachine;
-(id)initWithStateMachine:(id)arg1 ;
@end

