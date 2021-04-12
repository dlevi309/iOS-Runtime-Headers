/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCurrentState:(MTStateMachineState *)arg1 ;
-(MTStateMachineState *)currentState;
-(id<MTStateMachineDelegate>)delegate;
-(id)stateMachineLog;
-(void)setInfoProvider:(id<MTStateMachineInfoProvider>)arg1 ;
-(id<MTStateMachineInfoProvider>)infoProvider;
-(void)enterState:(id)arg1 ;
-(void)setDelegate:(id<MTStateMachineDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithDelegate:(id)arg1 ;
-(id)stateMachineName;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
@end

