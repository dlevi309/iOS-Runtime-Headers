/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFEditWorkflowViewControllerDelegate.h>
#import <libobjc.A.dylib/WFComponentNavigationContext.h>

@class UIViewController, WFWorkflow, WFEditWorkflowViewController, NSString;

@interface VCUIEditActionViewController : UIViewController <WFEditWorkflowViewControllerDelegate, WFComponentNavigationContext> {

	WFWorkflow* _workflow;
	WFEditWorkflowViewController* _workflowViewController;

}

@property (nonatomic,retain) WFEditWorkflowViewController * workflowViewController;                   //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                 //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController; 
-(void)viewDidLoad;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(WFEditWorkflowViewController *)workflowViewController;
-(void)setWorkflowViewController:(WFEditWorkflowViewController *)arg1 ;
-(UIViewController *)componentHostingViewController;
-(BOOL)workflowViewControllerCanRemoveActions:(id)arg1 ;
@end

