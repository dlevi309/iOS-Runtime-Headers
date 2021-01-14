/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/WFAutomationSummaryViewControllerDelegate.h>

@protocol WFEditAutomationCoordinatorDelegate;
@class UINavigationController, WFDatabase, WFTriggerManager, WFConfiguredTriggerRecord, NSString, WFTrigger, WFWorkflowReference, WFEditAutomationWorkflowStorage, WFWorkflow, WFAutomationSummaryViewController;

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate> {

	UINavigationController* _navigationController;
	id<WFEditAutomationCoordinatorDelegate> _delegate;
	WFDatabase* _database;
	WFTriggerManager* _triggerManager;
	WFConfiguredTriggerRecord* _triggerRecord;
	NSString* _triggerIdentifier;
	WFTrigger* _trigger;
	WFWorkflowReference* _workflowReference;
	WFEditAutomationWorkflowStorage* _editingStorage;
	WFWorkflow* _editingWorkflow;
	WFAutomationSummaryViewController* _automationSummaryViewController;

}

@property (nonatomic,retain) WFDatabase * database;                                                            //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFTriggerManager * triggerManager;                                                //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) WFConfiguredTriggerRecord * triggerRecord;                                      //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerIdentifier;                                              //@synthesize triggerIdentifier=_triggerIdentifier - In the implementation block
@property (nonatomic,retain) WFTrigger * trigger;                                                              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * workflowReference;                                        //@synthesize workflowReference=_workflowReference - In the implementation block
@property (nonatomic,retain) WFEditAutomationWorkflowStorage * editingStorage;                                 //@synthesize editingStorage=_editingStorage - In the implementation block
@property (nonatomic,retain) WFWorkflow * editingWorkflow;                                                     //@synthesize editingWorkflow=_editingWorkflow - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) WFAutomationSummaryViewController * automationSummaryViewController;              //@synthesize automationSummaryViewController=_automationSummaryViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFEditAutomationCoordinatorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(WFTrigger *)trigger;
-(id<WFEditAutomationCoordinatorDelegate>)delegate;
-(id)start;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setDelegate:(id<WFEditAutomationCoordinatorDelegate>)arg1 ;
-(WFTriggerManager *)triggerManager;
-(WFDatabase *)database;
-(void)cancel;
-(UINavigationController *)navigationController;
-(WFWorkflowReference *)workflowReference;
-(WFEditAutomationWorkflowStorage *)editingStorage;
-(void)setEditingStorage:(WFEditAutomationWorkflowStorage *)arg1 ;
-(void)setTriggerManager:(WFTriggerManager *)arg1 ;
-(void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2 ;
-(void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2 ;
-(void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4 ;
-(void)updateUIForShowingViewController:(id)arg1 ;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(NSString *)triggerIdentifier;
-(WFWorkflow *)editingWorkflow;
-(void)setEditingWorkflow:(WFWorkflow *)arg1 ;
-(WFAutomationSummaryViewController *)automationSummaryViewController;
-(void)setAutomationSummaryViewController:(WFAutomationSummaryViewController *)arg1 ;
@end

