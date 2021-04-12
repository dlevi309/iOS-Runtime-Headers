/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/WFAutomationSummaryViewControllerDelegate.h>

@protocol WFEditAutomationCoordinatorDelegate;
@class UINavigationController, WFDatabase, WFTriggerManager, WFConfiguredTriggerRecord, NSString, WFTrigger, WFWorkflowReference, WFWorkflow, WFAutomationSummaryViewController;

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate> {

	UINavigationController* _navigationController;
	id<WFEditAutomationCoordinatorDelegate> _delegate;
	WFDatabase* _database;
	WFTriggerManager* _triggerManager;
	WFConfiguredTriggerRecord* _triggerRecord;
	NSString* _triggerIdentifier;
	WFTrigger* _trigger;
	WFWorkflowReference* _workflowReference;
	WFWorkflow* _workflow;
	WFAutomationSummaryViewController* _automationSummaryViewController;

}

@property (nonatomic,retain) WFDatabase * database;                                                            //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFTriggerManager * triggerManager;                                                //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) WFConfiguredTriggerRecord * triggerRecord;                                      //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerIdentifier;                                              //@synthesize triggerIdentifier=_triggerIdentifier - In the implementation block
@property (nonatomic,retain) WFTrigger * trigger;                                                              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * workflowReference;                                        //@synthesize workflowReference=_workflowReference - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                                            //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) WFAutomationSummaryViewController * automationSummaryViewController;              //@synthesize automationSummaryViewController=_automationSummaryViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFEditAutomationCoordinatorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFEditAutomationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<WFEditAutomationCoordinatorDelegate>)arg1 ;
-(void)cancel;
-(id)start;
-(void)finish;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(WFDatabase *)database;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(WFTrigger *)trigger;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(WFWorkflowReference *)workflowReference;
-(WFTriggerManager *)triggerManager;
-(void)setTriggerManager:(WFTriggerManager *)arg1 ;
-(void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2 ;
-(void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2 ;
-(void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4 ;
-(void)updateUIForShowingViewController:(id)arg1 ;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(NSString *)triggerIdentifier;
-(WFAutomationSummaryViewController *)automationSummaryViewController;
-(void)setAutomationSummaryViewController:(WFAutomationSummaryViewController *)arg1 ;
@end

