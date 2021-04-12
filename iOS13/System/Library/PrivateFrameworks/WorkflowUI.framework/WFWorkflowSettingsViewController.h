/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@protocol WFWorkflowSettingsViewControllerDelegate;
@class WFWorkflowSettingsLayoutMetrics, WFWorkflow, WFDatabase, WFAddToHomeScreenActivity, UINavigationController, WFWorkflowSettingsViewDataSource, NSString;

@interface WFWorkflowSettingsViewController : UITableViewController <WFAddToHomeScreenActivityDelegate, UIViewControllerTransitioningDelegate, WFContentClassesViewControllerDelegate, WFGalleryImportViewControllerDelegate, WFWorkflowWizardNameCellDelegate, WFWorkflowSettingsViewDataSourceDelegate, WFTableViewFooterLinkViewDelegate> {

	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	id<WFWorkflowSettingsViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFDatabase* _database;
	WFAddToHomeScreenActivity* _homeScreenActivity;
	UINavigationController* _cardPresentationNavigationController;
	WFWorkflowSettingsViewDataSource* _dataSource;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFDatabase * database;                                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFAddToHomeScreenActivity * homeScreenActivity;                             //@synthesize homeScreenActivity=_homeScreenActivity - In the implementation block
@property (nonatomic,readonly) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                          //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) UINavigationController * cardPresentationNavigationController;              //@synthesize cardPresentationNavigationController=_cardPresentationNavigationController - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsViewDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowSettingsViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFWorkflowSettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowSettingsViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(WFDatabase *)database;
-(WFWorkflowSettingsViewDataSource *)dataSource;
-(void)setDataSource:(WFWorkflowSettingsViewDataSource *)arg1 ;
-(void)done;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)contentSizeCategoryDidChange;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(void)workflowWizardNameCellDidSelectEditIcon:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 ;
-(void)footerLinkView:(id)arg1 didTapURL:(id)arg2 ;
-(void)toggledActionExtensionSwitch:(id)arg1 ;
-(void)toggledWidgetSwitch:(id)arg1 ;
-(void)galleryImportViewControllerDidCancel:(id)arg1 ;
-(void)galleryImportViewController:(id)arg1 didFinishWithWorkflow:(id)arg2 ;
-(void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2 ;
-(void)homeScreenActivityDidFinish:(id)arg1 success:(BOOL)arg2 ;
-(void)invalidateLayoutMetrics;
-(BOOL)showInputTypeSelection;
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

