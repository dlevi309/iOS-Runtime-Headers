/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKExpressModeSettingsCoordinatorDelegate, OS_dispatch_queue;
@class PKExpressPassController, PKPass, LAContext, NSObject, NSMutableDictionary;

@interface NPKExpressModeSettingsCoordinator : NSObject {

	BOOL _expressStateUpdatePending;
	int _notifyToken;
	PKExpressPassController* _expressPassController;
	id<NPKExpressModeSettingsCoordinatorDelegate> _delegate;
	PKPass* _currentPass;
	unsigned long long _currentOperation;
	LAContext* _currentContext;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _previousPassStates;

}

@property (nonatomic,retain) PKExpressPassController * expressPassController;                            //@synthesize expressPassController=_expressPassController - In the implementation block
@property (nonatomic,retain) PKPass * currentPass;                                                       //@synthesize currentPass=_currentPass - In the implementation block
@property (assign,nonatomic) unsigned long long currentOperation;                                        //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) LAContext * currentContext;                                                 //@synthesize currentContext=_currentContext - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int notifyToken;                                                            //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic) BOOL expressStateUpdatePending;                                             //@synthesize expressStateUpdatePending=_expressStateUpdatePending - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previousPassStates;                                   //@synthesize previousPassStates=_previousPassStates - In the implementation block
@property (assign,nonatomic,__weak) id<NPKExpressModeSettingsCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setNotifyToken:(int)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<NPKExpressModeSettingsCoordinatorDelegate>)delegate;
-(id)completionHandler;
-(int)notifyToken;
-(void)setDelegate:(id<NPKExpressModeSettingsCoordinatorDelegate>)arg1 ;
-(LAContext *)currentContext;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCurrentContext:(LAContext *)arg1 ;
-(unsigned long long)currentOperation;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentOperation:(unsigned long long)arg1 ;
-(void)setCurrentPass:(PKPass *)arg1 ;
-(PKPass *)currentPass;
-(void)_handleExpressStateChange;
-(PKExpressPassController *)expressPassController;
-(unsigned long long)_expressModeStateForPassWithUniqueID:(id)arg1 ;
-(void)_checkForConflictsInEnablingExpressForPass:(id)arg1 ;
-(void)_invokeCompletionHandlerWithSuccess:(BOOL)arg1 ;
-(void)_requestUserAuthenticationForPass:(id)arg1 ;
-(void)_handleUserCancelled;
-(void)_handleSuccessfulUserAuthenticationWithCredential:(id)arg1 forPass:(id)arg2 ;
-(void)_handleFailedUserAuthentication;
-(void)_upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 ;
-(void)_enableExpressModeForPass:(id)arg1 withCredential:(id)arg2 ;
-(void)_handleSuccessForPass:(id)arg1 ;
-(void)_handleFailedPassUpgrade;
-(void)_handleFailedEnableExpress;
-(unsigned long long)_expressModeStateForPassWithUniqueID:(id)arg1 fromControllerState:(id)arg2 ;
-(id)initWithExpressPassController:(id)arg1 queue:(id)arg2 ;
-(BOOL)isExpressModeSupportedForPass:(id)arg1 ;
-(unsigned long long)expressModeStateForPass:(id)arg1 ;
-(void)enableExpressModeForPass:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableExpressModeForPass:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExpressPassController:(PKExpressPassController *)arg1 ;
-(BOOL)expressStateUpdatePending;
-(void)setExpressStateUpdatePending:(BOOL)arg1 ;
-(NSMutableDictionary *)previousPassStates;
-(void)setPreviousPassStates:(NSMutableDictionary *)arg1 ;
@end

