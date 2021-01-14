/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPStateMachineDelegate.h>
#import <libobjc.A.dylib/HKSPStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HKSPStateMachineEventHandler.h>

@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider;
@class HKSPStateMachineState, NSString;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler> {

	BOOL _initialized;
	HKSPStateMachineState* _currentState;
	id<HKSPStateMachineDelegate> _delegate;
	id<HKSPStateMachineInfoProvider> _infoProvider;

}

@property (nonatomic,readonly) BOOL initialized;                                                  //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (nonatomic,readonly) HKSPStateMachineState * currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialState:(id)arg1 ;
-(HKSPStateMachineState *)currentState;
-(id<HKSPStateMachineDelegate>)delegate;
-(id)stateMachineLog;
-(id<HKSPStateMachineInfoProvider>)infoProvider;
-(BOOL)enterState:(id)arg1 ;
-(BOOL)initialized;
-(NSString *)description;
-(void)updateState;
-(id)stateMachineName;
-(BOOL)enterState:(id)arg1 context:(id)arg2 ;
-(void)notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
@end

