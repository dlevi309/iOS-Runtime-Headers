/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <Foundation/NSString.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, SUCoreDiag, NSMutableDictionary, NSObject;

@interface SUCoreFSM : NSString {

	BOOL _isActive;
	BOOL _performingEvent;
	NSString* _fsmName;
	NSString* _instanceName;
	NSString* _fullName;
	NSDictionary* _stateTable;
	NSString* _startState;
	SUCoreDiag* _diag;
	NSString* _currentState;
	NSMutableDictionary* _registeredActionTable;
	NSString* _pendingFollowupEvent;
	id _pendingFollowupInfo;
	NSObject*<OS_dispatch_queue> _extendedStateQueue;

}

@property (nonatomic,readonly) NSString * fullName;                                          //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSDictionary * stateTable;                                    //@synthesize stateTable=_stateTable - In the implementation block
@property (nonatomic,readonly) NSString * startState;                                        //@synthesize startState=_startState - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                  //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NSString * currentState;                                        //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredActionTable;                  //@synthesize registeredActionTable=_registeredActionTable - In the implementation block
@property (assign,nonatomic) BOOL performingEvent;                                           //@synthesize performingEvent=_performingEvent - In the implementation block
@property (nonatomic,retain) NSString * pendingFollowupEvent;                                //@synthesize pendingFollowupEvent=_pendingFollowupEvent - In the implementation block
@property (nonatomic,retain) id pendingFollowupInfo;                                         //@synthesize pendingFollowupInfo=_pendingFollowupInfo - In the implementation block
@property (nonatomic,retain,readonly) NSString * fsmName;                                    //@synthesize fsmName=_fsmName - In the implementation block
@property (nonatomic,retain,readonly) NSString * instanceName;                               //@synthesize instanceName=_instanceName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> extendedStateQueue;              //@synthesize extendedStateQueue=_extendedStateQueue - In the implementation block
@property (nonatomic,readonly) SUCoreDiag * diag;                                            //@synthesize diag=_diag - In the implementation block
-(BOOL)isActive;
-(NSString *)currentState;
-(NSString *)fullName;
-(void)setCurrentState:(NSString *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(NSString *)startState;
-(NSString *)instanceName;
-(id)_initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6 registeringAndActivating:(BOOL)arg7 ;
-(void)_registerAllActions:(id)arg1 withInfoClass:(Class)arg2 stateTable:(id)arg3 actionTable:(id)arg4 loggingRegistration:(BOOL)arg5 ;
-(BOOL)_activateMachineWithStateTable:(id)arg1 withActionTable:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)extendedStateQueue;
-(id)_acceptEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 attachedAction:(id*)arg4 ;
-(NSString *)pendingFollowupEvent;
-(SUCoreDiag *)diag;
-(void)setPendingFollowupEvent:(NSString *)arg1 ;
-(void)setPendingFollowupInfo:(id)arg1 ;
-(void)setPerformingEvent:(BOOL)arg1 ;
-(void)_performEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 forCell:(id)arg4 attachedAction:(id)arg5 checkingAttached:(BOOL)arg6 ;
-(NSMutableDictionary *)registeredActionTable;
-(void)_registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5 actionTable:(id)arg6 loggingRegistration:(BOOL)arg7 ;
-(NSDictionary *)stateTable;
-(void)postEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)_postEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)postProtectedEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)followupEvent:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)performingEvent;
-(NSString *)fsmName;
-(void)_simulateEventAlteration:(id)arg1 fsmEvent:(id*)arg2 eventInfo:(id*)arg3 attachedAction:(id*)arg4 ;
-(id)pendingFollowupInfo;
-(void)_triggerAction:(id)arg1 usingAttached:(id)arg2 onEvent:(id)arg3 inState:(id)arg4 withInfo:(id)arg5 nextState:(id)arg6 ;
-(id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 ;
-(id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 ;
-(id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 usingDelegate:(id)arg4 registeringAllInfoClass:(Class)arg5 ;
-(id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6 ;
-(void)teardownMachine;
-(void)registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5 ;
-(void)registerAllActions:(id)arg1 withInfoClass:(Class)arg2 ;
-(void)activateMachine;
-(void)postEvent:(id)arg1 ;
-(void)postProtectedEvent:(id)arg1 ;
-(void)followupEvent:(id)arg1 ;
-(id)copyCurrentState;
@end

