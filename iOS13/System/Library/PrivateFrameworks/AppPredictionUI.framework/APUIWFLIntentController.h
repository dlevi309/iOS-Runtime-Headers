/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <libobjc.A.dylib/WFLActionUserInterface.h>
#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>

@protocol APUIWFLIntentControllerDelegate;
@class INIntent, WFLWorkflowController, NSString;

@interface APUIWFLIntentController : NSObject <WFLActionUserInterface, WFLWorkflowControllerDelegate> {

	INIntent* _intent;
	long long _executionContext;
	id<APUIWFLIntentControllerDelegate> _delegate;
	WFLWorkflowController* _workflowController;
	/*^block*/id _intentProceedHandler;

}

@property (nonatomic,retain) INIntent * intent;                                                //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) WFLWorkflowController * workflowController;                       //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,copy) id intentProceedHandler;                                            //@synthesize intentProceedHandler=_intentProceedHandler - In the implementation block
@property (assign,nonatomic) long long executionContext;                                       //@synthesize executionContext=_executionContext - In the implementation block
@property (assign,nonatomic,__weak) id<APUIWFLIntentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<APUIWFLIntentControllerDelegate>)delegate;
-(void)setDelegate:(id<APUIWFLIntentControllerDelegate>)arg1 ;
-(void)stop;
-(void)begin;
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(/*^block*/id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2 ;
-(void)handleIntentAction:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 withIntentResponse:(id)arg4 proceedHandler:(/*^block*/id)arg5 ;
-(void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(/*^block*/id)arg4 ;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(WFLWorkflowController *)workflowController;
-(void)logDebugInformation:(id)arg1 ;
-(void)confirmationGranted:(BOOL)arg1 ;
-(void)_setWorkflowControllerExecutionContext;
-(void)setWorkflowController:(WFLWorkflowController *)arg1 ;
-(id)intentProceedHandler;
-(void)setIntentProceedHandler:(id)arg1 ;
@end

