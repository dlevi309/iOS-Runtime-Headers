/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFAddToHomeScreenActivityDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/WFContentClassesViewControllerDelegate.h>
#import <libobjc.A.dylib/WFGalleryImportViewControllerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDelegate.h>
#import <libobjc.A.dylib/WFWorkflowSettingsViewDataSourceDelegate.h>
#import <libobjc.A.dylib/WFTableViewFooterLinkViewDelegate.h>
#import <libobjc.A.dylib/WFHealthFeatureObserver.h>

@protocol WFWorkflowSettingsViewControllerDelegate;
@class WFWorkflowSettingsLayoutMetrics, WFWorkflow, WFDatabase, WFAddToHomeScreenActivity, UINavigationController, WFWorkflowSettingsViewDataSource, WFHealthFeatureAvailability, NSString;

@interface WFWorkflowSettingsViewController : UITableViewController <WFAddToHomeScreenActivityDelegate, UIViewControllerTransitioningDelegate, WFContentClassesViewControllerDelegate, WFGalleryImportViewControllerDelegate, WFWorkflowWizardNameCellDelegate, WFWorkflowSettingsViewDataSourceDelegate, WFTableViewFooterLinkViewDelegate, WFHealthFeatureObserver> {

	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	id<WFWorkflowSettingsViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFDatabase* _database;
	WFAddToHomeScreenActivity* _homeScreenActivity;
	UINavigationController* _cardPresentationNavigationController;
	WFWorkflowSettingsViewDataSource* _dataSource;
	WFHealthFeatureAvailability* _healthFeatureAvailability;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFDatabase * database;                                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFAddToHomeScreenActivity * homeScreenActivity;                             //@synthesize homeScreenActivity=_homeScreenActivity - In the implementation block
@property (nonatomic,readonly) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                          //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) UINavigationController * cardPresentationNavigationController;              //@synthesize cardPresentationNavigationController=_cardPresentationNavigationController - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsViewDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) WFHealthFeatureAvailability * healthFeatureAvailability;                  //@synthesize healthFeatureAvailability=_healthFeatureAvailability - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowSettingsViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFWorkflowSettingsViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(WFWorkflowSettingsViewDataSource *)dataSource;
-(void)didTapDone;
-(void)setDelegate:(id<WFWorkflowSettingsViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)setDataSource:(WFWorkflowSettingsViewDataSource *)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(WFDatabase *)database;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)healthFeatureAvailability:(id)arg1 sleepOnboardingStatusDidChange:(unsigned long long)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 ;
-(void)workflowWizardNameCellDidSelectEditIcon:(id)arg1 ;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(WFHealthFeatureAvailability *)healthFeatureAvailability;
-(void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2 ;
-(void)footerLinkView:(id)arg1 didTapURL:(id)arg2 ;
-(void)toggledActionExtensionSwitch:(id)arg1 ;
-(void)toggledWatchSwitch:(id)arg1 ;
-(void)toggledBedSheetSwitch:(id)arg1 ;
-(void)galleryImportViewControllerDidCancel:(id)arg1 ;
-(void)galleryImportViewController:(id)arg1 didFinishWithWorkflow:(id)arg2 ;
-(void)homeScreenActivityDidFinish:(id)arg1 success:(BOOL)arg2 ;
-(void)finishByDismissing:(BOOL)arg1 ;
-(void)invalidateLayoutMetrics;
-(BOOL)showInputTypeSelection;
-(id)watchIneligibleActions;
-(void)toggleWorkflowType:(id)arg1 sender:(id)arg2 ;
-(void)didSelectSettingsSectionHelpAtRow:(long long)arg1 ;
-(void)didSelectSettingsSectionShowInAtRow:(long long)arg1 ;
-(void)didSelectSettingsSectionButtonsAtRow:(long long)arg1 ;
-(void)didSelectSettingsSectionImportQuestionsAtRow:(long long)arg1 ;
-(void)dismissIconViewController;
-(WFAddToHomeScreenActivity *)homeScreenActivity;
-(void)setHomeScreenActivity:(WFAddToHomeScreenActivity *)arg1 ;
-(UINavigationController *)cardPresentationNavigationController;
-(void)setCardPresentationNavigationController:(UINavigationController *)arg1 ;
@end

