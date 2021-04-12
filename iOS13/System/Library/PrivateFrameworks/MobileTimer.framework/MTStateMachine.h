/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTStateMachineEventHandler.h>

@protocol MTStateMachineDelegate, MTStateMachineInfoProvider;
@class MTStateMachineState, NSString;

@interface MTStateMachine : NSObject <MTStateMachineEventHandler> {

	MTStateMachineState* _currentState;
	id<MTStateMachineDelegate> _delegate;
	id<MTStateMachineInfoProvider> _infoProvider;

}

@property (nonatomic,retain) MTStateMachineState * currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<MTStateMachineDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MTStateMachineInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<MTStateMachineDelegate>)delegate;
-(void)setDelegate:(id<MTStateMachineDelegate>)arg1 ;
-(MTStateMachineState *)currentState;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCurrentState:(MTStateMachineState *)arg1 ;
-(void)enterState:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(id<MTStateMachineInfoProvider>)infoProvider;
-(id)stateMachineLog;
-(id)stateMachineName;
-(void)setInfoProvider:(id<MTStateMachineInfoProvider>)arg1 ;
@end

