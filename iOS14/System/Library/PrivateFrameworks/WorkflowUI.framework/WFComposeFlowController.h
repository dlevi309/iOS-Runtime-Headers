/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFWorkflowWizardNameViewControllerDelegate.h>

@protocol WFComposeFlowControllerDelegate;
@class UIViewController, UINavigationController, WFDatabase, WFWorkflow, WFWizardNamePresentationManager, NSString;

@interface WFComposeFlowController : NSObject <WFWorkflowWizardNameViewControllerDelegate> {

	id<WFComposeFlowControllerDelegate> _delegate;
	UIViewController* _presenter;
	UINavigationController* _navigationController;
	WFDatabase* _database;
	WFWorkflow* _workflow;
	WFWizardNamePresentationManager* _presentationManager;

}

@property (nonatomic,retain) WFWizardNamePresentationManager * presentationManager;               //@synthesize presentationManager=_presentationManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFComposeFlowControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presenter;                               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                             //@synthesize database=_database - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) BOOL workflowHasContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishEditing:(BOOL)arg1 ;
-(id<WFComposeFlowControllerDelegate>)delegate;
-(void)setPresentationManager:(WFWizardNamePresentationManager *)arg1 ;
-(WFWizardNamePresentationManager *)presentationManager;
-(UIViewController *)presenter;
-(void)setDelegate:(id<WFComposeFlowControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(WFDatabase *)database;
-(UINavigationController *)navigationController;
-(void)workflowWizardNameViewController:(id)arg1 didFinishWithName:(id)arg2 ;
-(id)initWithPresenter:(id)arg1 navigationController:(id)arg2 database:(id)arg3 workflow:(id)arg4 ;
-(BOOL)workflowHasContent;
-(void)startCancelFlowWithButton:(id)arg1 ;
-(void)startSaveFlow;
@end

