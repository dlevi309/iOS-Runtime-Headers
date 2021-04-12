/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<WFWorkflowWizardNameViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)didTapDone;
-(void)setDelegate:(id<WFWorkflowWizardNameViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(WFWorkflowWizardNameConfiguration *)configuration;
-(void)viewDidLoad;
-(id)infoText;
-(id)nameCell;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setConfiguration:(WFWorkflowWizardNameConfiguration *)arg1 ;
-(id)workflowName;
-(void)workflowWizardNameCellDidFinishEditing:(id)arg1 ;
-(void)workflowWizardNameCellDidSelectEditIcon:(id)arg1 ;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 configuration:(id)arg2 ;
-(void)updateDoneButtonForName:(id)arg1 ;
-(void)iconComposeViewControllerDidTapDone;
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

