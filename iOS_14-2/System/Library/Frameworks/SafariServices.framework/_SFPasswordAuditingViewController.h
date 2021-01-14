/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPasswordTableViewController.h>
#import <libobjc.A.dylib/SFPasswordBreachToggleCellDelegate.h>
#import <libobjc.A.dylib/SFHighPriorityRecommendationDataDelegate.h>
#import <libobjc.A.dylib/SFPasswordDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFTableViewDiffableDataSourceDelegate.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationExtensionManagerObserver.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationControllerDelegate.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationControllerPresentationContextProviding.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;
@class WBSAutoFillQuirksManager, WBSSavedPasswordStore, _SFTableViewDiffableDataSource, WBSPasswordWarningManager, NSArray, NSObject, UIActivityIndicatorView, SFSafariViewController, SFHighPriorityRecommendationData, WBSPasswordGenerationManager, ASAccountAuthenticationModificationController, WBSSavedPassword, NSString;

@interface _SFPasswordAuditingViewController : _SFPasswordTableViewController <SFPasswordBreachToggleCellDelegate, SFHighPriorityRecommendationDataDelegate, SFPasswordDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, PSStateRestoration> {

	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	WBSSavedPasswordStore* _savedPasswordStore;
	_SFTableViewDiffableDataSource* _tableViewDiffableDataSource;
	WBSPasswordWarningManager* _passwordWarningManager;
	NSArray* _highPriorityRecommendationData;
	NSArray* _flaggedPasswordData;
	NSObject*<OS_dispatch_queue> _diffableDataSourceQueue;
	unsigned long long _numberOfWarnings;
	UIActivityIndicatorView* _spinner;
	SFSafariViewController* _changePasswordOnWebsiteSafariViewController;
	SFHighPriorityRecommendationData* _recommendationForMostRecentSafariViewController;
	WBSPasswordGenerationManager* _passwordGenerator;
	SFHighPriorityRecommendationData* _passwordDataForCurrentUpgrade;
	ASAccountAuthenticationModificationController* _accountAuthenticationModificationController;
	id<_SFPasswordAuditingViewControllerDelegate> _delegate;
	WBSSavedPassword* _passwordToRemoveAfterCompletedUpgradeInDetailView;

}

@property (assign,nonatomic,__weak) id<_SFPasswordAuditingViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSSavedPassword * passwordToRemoveAfterCompletedUpgradeInDetailView;              //@synthesize passwordToRemoveAfterCompletedUpgradeInDetailView=_passwordToRemoveAfterCompletedUpgradeInDetailView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_shouldUseInsetGroupedStyle;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<_SFPasswordAuditingViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_completedSignInWithAppleUpgrade;
-(void)_completedStrongPasswordUpgrade;
-(void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3 ;
-(void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1 ;
-(void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 passwordWarningManager:(id)arg3 ;
-(void)didSetPasswordBreachDetectionState:(BOOL)arg1 ;
-(void)setDelegate:(id<_SFPasswordAuditingViewControllerDelegate>)arg1 ;
-(void)_reloadSavedPasswordsForceUpdate:(BOOL)arg1 ;
-(void)_reloadTableViewDiffableDataSource;
-(void)_reloadTableViewDiffableDataSourceOnInternalQueue;
-(void)_configureHighPriorityInformationCell:(id)arg1 withHighPriorityRecommendationData:(id)arg2 ;
-(id)_standardRecommendationCellWithPasswordCellData:(id)arg1 ;
-(id)_passwordBreachToggleCell;
-(void)_changePasswordOnWebsiteForHighPriorityRecommendation:(id)arg1 ;
-(void)_initiateChangeToStrongPasswordForHighPriorityRecommendation:(id)arg1 ;
-(void)_upgradeToSignInWithAppleForHighPriorityRecommendation:(id)arg1 ;
-(void)_removeHighPriorityRecommendation:(id)arg1 ;
-(id)_warningStringForPasswordCellData:(id)arg1 ;
-(void)highPriorityRecommendationDataDidUpdate:(id)arg1 ;
-(id)_passwordGenerationManager;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)dataSource:(id)arg1 headerTextForSection:(long long)arg2 ;
-(id)dataSource:(id)arg1 footerTextForSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg1 ;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg1 ;
-(WBSSavedPassword *)passwordToRemoveAfterCompletedUpgradeInDetailView;
-(void)setPasswordToRemoveAfterCompletedUpgradeInDetailView:(WBSSavedPassword *)arg1 ;
-(void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)_passwordStoreDidUpdate;
-(id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2 ;
@end

