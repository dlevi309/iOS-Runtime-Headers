/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <Foundation/NSString.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSMutableDictionary, SUCoreDiag, NSObject;

@interface SUCoreFSM : NSString {

	BOOL _isActive;
	BOOL _performingEvent;
	NSString* _fsmName;
	NSString* _instanceName;
	NSString* _fullName;
	NSDictionary* _stateTable;
	NSMutableDictionary* _usageTable;
	unsigned long long _untrackedOccurrences;
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
@property (nonatomic,retain) NSMutableDictionary * usageTable;                               //@synthesize usageTable=_usageTable - In the implementation block
@property (assign,nonatomic) unsigned long long untrackedOccurrences;                        //@synthesize untrackedOccurrences=_untrackedOccurrences - In the implementation block
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
-(void)setCurrentState:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)currentState;
-(SUCoreDiag *)diag;
-(BOOL)isActive;
-(NSString *)instanceName;
-(void)setIsActive:(BOOL)arg1 ;
-(NSString *)startState;
-(NSString *)fsmName;
-(void)postEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)extendedStateQueue;
-(void)postEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)followupEvent:(id)arg1 ;
-(id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 ;
-(void)registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5 ;
-(void)activateMachine;
-(void)postProtectedEvent:(id)arg1 ;
-(void)postProtectedEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)followupEvent:(id)arg1 withInfo:(id)arg2 ;
-(id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6 ;
-(id)copyCurrentState;
-(NSDictionary *)stateTable;
-(id)_initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6 registeringAndActivating:(BOOL)arg7 ;
-(void)_registerAllActions:(id)arg1 withInfoClass:(Class)arg2 stateTable:(id)arg3 actionTable:(id)arg4 loggingRegistration:(BOOL)arg5 ;
-(BOOL)_activateMachineWithStateTable:(id)arg1 withActionTable:(id)arg2 ;
-(id)_acceptEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 attachedAction:(id*)arg4 ;
-(NSString *)pendingFollowupEvent;
-(void)setPendingFollowupEvent:(NSString *)arg1 ;
-(void)setPendingFollowupInfo:(id)arg1 ;
-(void)setPerformingEvent:(BOOL)arg1 ;
-(void)_performEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 forCell:(id)arg4 attachedAction:(id)arg5 checkingAttached:(BOOL)arg6 ;
-(NSMutableDictionary *)registeredActionTable;
-(void)_registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5 actionTable:(id)arg6 loggingRegistration:(BOOL)arg7 ;
-(void)_postEvent:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)performingEvent;
-(NSMutableDictionary *)usageTable;
-(void)_simulateEventAlteration:(id)arg1 fsmEvent:(id*)arg2 eventInfo:(id*)arg3 attachedAction:(id*)arg4 ;
-(id)pendingFollowupInfo;
-(void)_trackEventOccurrence:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 ;
-(void)_triggerAction:(id)arg1 usingAttached:(id)arg2 onEvent:(id)arg3 inState:(id)arg4 withInfo:(id)arg5 nextState:(id)arg6 ;
-(void)setUsageTable:(NSMutableDictionary *)arg1 ;
-(unsigned long long)untrackedOccurrences;
-(void)setUntrackedOccurrences:(unsigned long long)arg1 ;
-(id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 ;
-(id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 usingDelegate:(id)arg4 registeringAllInfoClass:(Class)arg5 ;
-(void)teardownMachine;
-(void)registerAllActions:(id)arg1 withInfoClass:(Class)arg2 ;
-(id)copyCurrentStateProtected;
-(void)dumpEventInStateOccurrences:(id)arg1 ;
@end

