/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDelegate.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameSuggestionCellDelegate.h>

@protocol WFWorkflowWizardNameViewControllerDelegate;
@class WFWorkflow, WFWorkflowWizardNameConfiguration, NSString, WFIconComposeViewController;

@interface WFWorkflowWizardNameViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate> {

	id<WFWorkflowWizardNameViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFWorkflowWizardNameConfiguration* _configuration;
	NSString* _updatedName;
	WFIconComposeViewController* _iconComposeViewController;

}

@property (nonatomic,retain) NSString * updatedName;                                                      //@synthesize updatedName=_updatedName - In the implementation block
@property (assign,nonatomic,__weak) WFIconComposeViewController * iconComposeViewController;              //@synthesize iconComposeViewController=_iconComposeViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardNameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                     //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFWorkflowWizardNameViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowWizardNameViewControllerDelegate>)arg1 ;
-(void)setConfiguration:(WFWorkflowWizardNameConfiguration *)arg1 ;
-(WFWorkflowWizardNameConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)didTapDone;
-(WFWorkflow *)workflow;
-(id)infoText;
-(id)nameCell;
-(void)workflowWizardNameCellDidFinishEditing:(id)arg1 ;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(void)workflowWizardNameCellDidSelectEditIcon:(id)arg1 ;
-(void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 configuration:(id)arg2 ;
-(void)updateDoneButtonForName:(id)arg1 ;
-(void)iconComposeViewControllerDidTapDone;
-(id)workflowName;
-(id)suggestedPhrases;
-(id)nameSuggestionCell;
-(void)updateNameCell:(id)arg1 ;
-(id)dequeueNameCellAtIndexPath:(id)arg1 ;
-(id)dequeueNameSuggestionCellAtIndexPath:(id)arg1 ;
-(NSString *)updatedName;
-(void)setUpdatedName:(NSString *)arg1 ;
-(WFIconComposeViewController *)iconComposeViewController;
-(void)setIconComposeViewController:(WFIconComposeViewController *)arg1 ;
@end

