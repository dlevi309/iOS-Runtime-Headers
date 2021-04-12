/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFRunWorkflowViewControllerDelegate.h>

@protocol WFActionExtensionViewControllerDelegate;
@class NSDictionary, WFRunWorkflowViewController, WFRunWorkflowToolbar, NSString;

@interface WFActionExtensionViewController : UIViewController <WFRunWorkflowViewControllerDelegate> {

	NSDictionary* _eventDictionary;
	id<WFActionExtensionViewControllerDelegate> _delegate;
	WFRunWorkflowViewController* _workflowViewController;
	WFRunWorkflowToolbar* _toolbar;

}

@property (nonatomic,retain) WFRunWorkflowViewController * workflowViewController;                     //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,retain) WFRunWorkflowToolbar * toolbar;                                           //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,copy) NSDictionary * eventDictionary;                                             //@synthesize eventDictionary=_eventDictionary - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionExtensionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionExtensionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionExtensionViewControllerDelegate>)arg1 ;
-(void)cleanup;
-(void)loadView;
-(WFRunWorkflowToolbar *)toolbar;
-(void)setToolbar:(WFRunWorkflowToolbar *)arg1 ;
-(void)cancelPressed;
-(id)initWithWorkflow:(id)arg1 ;
-(NSDictionary *)eventDictionary;
-(void)runWithInput:(id)arg1 ;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)runWorkflowToolbarForWorkflowViewController:(id)arg1 ;
-(id)initWithSingleUseWorkflowToken:(id)arg1 error:(id*)arg2 ;
-(void)workflowCancelled;
-(void)workflowFinishedWithOutput:(id)arg1 error:(id)arg2 ;
-(void)handoffWithWorkflowControllerState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventDictionary:(NSDictionary *)arg1 ;
-(WFRunWorkflowViewController *)workflowViewController;
-(void)setWorkflowViewController:(WFRunWorkflowViewController *)arg1 ;
@end

