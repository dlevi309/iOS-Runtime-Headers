/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/WFSiriUserInterface.h>

@protocol WFLWorkflowControllerDelegate;
@class NSArray, WFWorkflowController, INInteraction, WFWorkflow, NSProgress, NSString;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFSiriUserInterface> {

	NSArray* _airPlayRouteIDs;
	id<WFLWorkflowControllerDelegate> _delegate;
	long long _executionContext;
	WFWorkflowController* _controller;
	INInteraction* _lastInteraction;

}

@property (nonatomic,readonly) WFWorkflowController * controller;                            //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) INInteraction * lastInteraction;                                //@synthesize lastInteraction=_lastInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<WFLWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) NSProgress * progress; 
@property (assign,nonatomic) long long executionContext;                                     //@synthesize executionContext=_executionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs;                               //@synthesize airPlayRouteIDs=_airPlayRouteIDs - In the implementation block
@property (nonatomic,readonly) NSString * userInterfaceType; 
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(NSProgress *)progress;
-(void)runWithInput:(id)arg1 ;
-(id<WFLWorkflowControllerDelegate>)delegate;
-(void)stop;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)setDelegate:(id<WFLWorkflowControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRunning;
-(id)runSource;
-(WFWorkflowController *)controller;
-(void)workflowControllerWillRun:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 ;
-(void)presentAlert:(id)arg1 ;
-(NSString *)userInterfaceType;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureIntent:(id)arg1 ;
-(BOOL)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showConfirmInteraction:(id)arg1 requireAuthentication:(BOOL)arg2 requireConfirmation:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(INInteraction *)lastInteraction;
-(void)setLastInteraction:(INInteraction *)arg1 ;
@end

