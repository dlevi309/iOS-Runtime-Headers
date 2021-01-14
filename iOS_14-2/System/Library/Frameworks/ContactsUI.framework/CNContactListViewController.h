/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CNContactListBannerViewDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <UIKit/UITableViewDragSourceDelegate.h>
#import <UIKit/UITableViewDragDestinationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerPresentationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewControllerDelegate.h>
#import <libobjc.A.dylib/TPKContentControllerDelegate.h>

@protocol CNContactDataSource, CNContactListViewControllerDelegate, CNHealthStoreManagerToken, CNCancelable;
@class CNContact, NSObject, _UIContentUnavailableView, NSString, CNContactFormatter, CNAvatarCardController, UISearchController, UISearchBar, UIView, TPKContentController, TPKContent, CNContactListBannerView, CNUIContactsEnvironment, CNAvatarViewController, NSArray, CNVCardImportController, NSSet, CNContactListStyleApplier;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, TPKContentControllerDelegate> {

	CNContact* _preferredForNameMeContact;
	BOOL _shouldDisplayMeContactBanner;
	BOOL _shouldAutoHideMeContactBanner;
	BOOL _shouldDisplayTipContentView;
	BOOL _presentsSearchUI;
	BOOL _isHandlingSearch;
	BOOL _pendingSearchControllerActivation;
	BOOL _shouldUseLargeTitle;
	BOOL _pendingRefreshNoContactsView;
	BOOL _shouldDisplayGroupsGrid;
	BOOL _shouldDisplayCount;
	BOOL _shouldAllowDrags;
	BOOL _shouldAllowDrops;
	BOOL _shouldDisplayEmergencyContacts;
	NSObject*<CNContactDataSource> _dataSource;
	_UIContentUnavailableView* _noContactsView;
	id<CNContactListViewControllerDelegate> _delegate;
	NSString* _meContactBannerFootnoteLabel;
	NSString* _meContactBannerFootnoteValue;
	CNContactFormatter* _contactFormatter;
	CNAvatarCardController* _cardController;
	UISearchController* _searchController;
	UISearchBar* _searchBar;
	/*^block*/id _searchCompletionBlock;
	UIView* _tipContentView;
	TPKContentController* _tipContentController;
	TPKContent* _tipContent;
	CNContactListBannerView* _meContactBanner;
	double _contentOffsetDueToMeContactBanner;
	CNUIContactsEnvironment* _environment;
	CNAvatarViewController* _meBannerAvatarController;
	NSArray* _pendingLayoutBlocks;
	NSArray* _tableViewHeaderConstraints;
	NSString* _pendingSearchQuery;
	CNVCardImportController* _vCardImportController;
	NSSet* _emergencyContactIdentifiers;
	id<CNHealthStoreManagerToken> _medicalIDLookupRegistrationToken;
	id<CNCancelable> _medicalIDLookupToken;
	CNContactListStyleApplier* _defaultContactListStyleApplier;
	CNContactListViewController* _searchResultsController;
	CNContactListStyleApplier* _contactListStyleApplier;

}

@property (nonatomic,retain) CNAvatarCardController * cardController;                                     //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                       //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) id searchCompletionBlock;                                                      //@synthesize searchCompletionBlock=_searchCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTipContentView;                                            //@synthesize shouldDisplayTipContentView=_shouldDisplayTipContentView - In the implementation block
@property (nonatomic,retain) UIView * tipContentView;                                                     //@synthesize tipContentView=_tipContentView - In the implementation block
@property (nonatomic,retain) TPKContentController * tipContentController;                                 //@synthesize tipContentController=_tipContentController - In the implementation block
@property (nonatomic,retain) TPKContent * tipContent;                                                     //@synthesize tipContent=_tipContent - In the implementation block
@property (nonatomic,retain) CNContactListBannerView * meContactBanner;                                   //@synthesize meContactBanner=_meContactBanner - In the implementation block
@property (nonatomic,readonly) CNContact * preferredForNameMeContact; 
@property (nonatomic,readonly) double contentOffsetDueToMeContactBanner;                                  //@synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner - In the implementation block
@property (nonatomic,readonly) _UIContentUnavailableView * noContactsView;                                //@synthesize noContactsView=_noContactsView - In the implementation block
@property (nonatomic,readonly) BOOL presentsSearchUI;                                                     //@synthesize presentsSearchUI=_presentsSearchUI - In the implementation block
@property (assign,nonatomic) BOOL isHandlingSearch;                                                       //@synthesize isHandlingSearch=_isHandlingSearch - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * meBannerAvatarController;                           //@synthesize meBannerAvatarController=_meBannerAvatarController - In the implementation block
@property (nonatomic,retain) NSArray * pendingLayoutBlocks;                                               //@synthesize pendingLayoutBlocks=_pendingLayoutBlocks - In the implementation block
@property (nonatomic,retain) NSArray * tableViewHeaderConstraints;                                        //@synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints - In the implementation block
@property (nonatomic,retain) NSString * pendingSearchQuery;                                               //@synthesize pendingSearchQuery=_pendingSearchQuery - In the implementation block
@property (assign,nonatomic) BOOL pendingSearchControllerActivation;                                      //@synthesize pendingSearchControllerActivation=_pendingSearchControllerActivation - In the implementation block
@property (nonatomic,retain) CNVCardImportController * vCardImportController;                             //@synthesize vCardImportController=_vCardImportController - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLargeTitle;                                                  //@synthesize shouldUseLargeTitle=_shouldUseLargeTitle - In the implementation block
@property (nonatomic,retain) NSSet * emergencyContactIdentifiers;                                         //@synthesize emergencyContactIdentifiers=_emergencyContactIdentifiers - In the implementation block
@property (nonatomic,retain) id<CNHealthStoreManagerToken> medicalIDLookupRegistrationToken;              //@synthesize medicalIDLookupRegistrationToken=_medicalIDLookupRegistrationToken - In the implementation block
@property (nonatomic,retain) id<CNCancelable> medicalIDLookupToken;                                       //@synthesize medicalIDLookupToken=_medicalIDLookupToken - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * defaultContactListStyleApplier;                  //@synthesize defaultContactListStyleApplier=_defaultContactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL pendingRefreshNoContactsView;                                           //@synthesize pendingRefreshNoContactsView=_pendingRefreshNoContactsView - In the implementation block
@property (nonatomic,retain) CNContactListViewController * searchResultsController;                       //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayGroupsGrid;                                                //@synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCount;                                                     //@synthesize shouldDisplayCount=_shouldDisplayCount - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrags;                                                       //@synthesize shouldAllowDrags=_shouldAllowDrags - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrops;                                                       //@synthesize shouldAllowDrops=_shouldAllowDrops - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayEmergencyContacts;                                         //@synthesize shouldDisplayEmergencyContacts=_shouldDisplayEmergencyContacts - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                         //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (nonatomic,readonly) id<CNContactDataSource> originalDataSource; 
@property (assign,nonatomic,__weak) id<CNContactListViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<CNContactDataSource> dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMeContactBanner;                                           //@synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoHideMeContactBanner;                                          //@synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteLabel;                                       //@synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteValue;                                       //@synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue - In the implementation block
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) NSArray * selectedContacts; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                       //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyContact;
+(id)descriptorForRequiredKeysForPreferredForNameMeContact;
-(void)disableSearchUI;
-(BOOL)shouldDisplayGroupsGrid;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(void)_updateTableViewRowHeight;
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(NSString *)meContactBannerFootnoteValue;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(id)dragItemsForIndexPath:(id)arg1 ;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(NSString *)meContactBannerFootnoteLabel;
-(BOOL)shouldDisplayCount;
-(BOOL)shouldAllowDrags;
-(void)didUpdateContentForAvatarViewController:(id)arg1 ;
-(void)setShouldAllowDrags:(BOOL)arg1 ;
-(NSString *)pendingSearchQuery;
-(UISearchBar *)searchBar;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(void)setMedicalIDLookupToken:(id<CNCancelable>)arg1 ;
-(NSArray *)pendingLayoutBlocks;
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)performWhenViewIsLaidOut:(/*^block*/id)arg1 ;
-(void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2 ;
-(void)performDelayedRefreshNoContactsView;
-(UIView *)tipContentView;
-(CNAvatarViewController *)meBannerAvatarController;
-(void)startSearching;
-(void)refreshTableViewHeaderIfVisibleWithSize:(CGSize)arg1 ;
-(id)contactStore;
-(BOOL)pendingRefreshNoContactsView;
-(void)refreshNoContactsViewIfVisible;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(void)_applicationEnteringForeground:(id)arg1 ;
-(CNVCardImportController *)vCardImportController;
-(void)setTipContent:(TPKContent *)arg1 ;
-(id)getVisibleIndexPaths;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 shouldUseLargeTitle:(BOOL)arg4 ;
-(void)setIsHandlingSearch:(BOOL)arg1 ;
-(id)createTableView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1 ;
-(void)refreshTableViewHeader;
-(void)setEmergencyContactIdentifiers:(NSSet *)arg1 ;
-(void)setPendingLayoutBlocks:(NSArray *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)startSearchingForString:(id)arg1 ;
-(CNAvatarCardController *)cardController;
-(void)searchForString:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)refreshNoContactsViewIfNeeded;
-(void)setShouldDisplayTipContentView:(BOOL)arg1 ;
-(void)setVCardImportController:(CNVCardImportController *)arg1 ;
-(void)configureNavigationBarForLargeTitles;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(CNContactListBannerView *)meContactBanner;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)_updateCountStringNow:(BOOL)arg1 ;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(NSArray *)tableViewHeaderConstraints;
-(void)setSearchCompletionBlock:(id)arg1 ;
-(void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2 ;
-(void)setPendingSearchControllerActivation:(BOOL)arg1 ;
-(CNContactListStyleApplier *)defaultContactListStyleApplier;
-(void)setPendingRefreshNoContactsView:(BOOL)arg1 ;
-(void)setMeContactBannerFootnoteLabel:(NSString *)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)isSearching;
-(void)_searchBarDidEndEditing:(id)arg1 ;
-(void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2 ;
-(TPKContent *)tipContent;
-(void)setupForMultiSelection;
-(void)checkForInfoContentWithContext:(id)arg1 ;
-(id<CNContactDataSource>)originalDataSource;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)setMedicalIDLookupRegistrationToken:(id<CNHealthStoreManagerToken>)arg1 ;
-(void)setTableViewHeaderConstraints:(NSArray *)arg1 ;
-(void)contactDataSourceMeContactDidChange:(id)arg1 ;
-(void)setShouldDisplayCount:(BOOL)arg1 ;
-(NSSet *)emergencyContactIdentifiers;
-(BOOL)shouldUseLargeTitle;
-(BOOL)shouldDisplayTipContentView;
-(id)hostingViewControllerForController:(id)arg1 ;
-(id)searchCompletionBlock;
-(NSArray *)selectedContacts;
-(BOOL)isContactWithIdentifierEmergencyContact:(id)arg1 ;
-(UISearchController *)searchController;
-(void)startHandlingEmergencyContacts;
-(void)vCardImportControllerDidCompleteQueue:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)_contactCountTelemetry:(unsigned long long)arg1 ;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(void)setShouldDisplayGroupsGrid:(BOOL)arg1 ;
-(void)applyStyle;
-(void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(CNContactListViewController *)searchResultsController;
-(id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(BOOL)arg2 ;
-(void)setShouldAutoHideMeContactBanner:(BOOL)arg1 ;
-(id)_contactAtIndexPath:(id)arg1 ;
-(void)setMeContactBanner:(CNContactListBannerView *)arg1 ;
-(double)contentOffsetDueToMeContactBanner;
-(_UIContentUnavailableView *)noContactsView;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(BOOL)presentsSearchUI;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setShouldDisplayEmergencyContacts:(BOOL)arg1 ;
-(void)contactDataSourceDidChangeDisplayName:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)beginSearch:(id)arg1 ;
-(void)setShouldAllowDrops:(BOOL)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(id<CNHealthStoreManagerToken>)medicalIDLookupRegistrationToken;
-(BOOL)selectContact:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)setTipContentView:(UIView *)arg1 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(void)reloadContacts;
-(id)_sections;
-(BOOL)isHandlingSearch;
-(CNContactFormatter *)contactFormatter;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(void)setDefaultContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(BOOL)canShowNoContactsView;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<CNCancelable>)medicalIDLookupToken;
-(CNContact *)preferredForNameMeContact;
-(void)setMeContactBannerFootnoteValue:(NSString *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(TPKContentController *)tipContentController;
-(BOOL)hasNoContacts;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)shouldDisplayMeContactBanner;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldDisplayEmergencyContacts;
-(BOOL)shouldAutoHideMeContactBanner;
-(void)setMeBannerAvatarController:(CNAvatarViewController *)arg1 ;
-(void)setTipContentController:(TPKContentController *)arg1 ;
-(void)setPendingSearchQuery:(NSString *)arg1 ;
-(BOOL)canSelectContactAtIndexPath:(id)arg1 ;
-(BOOL)pendingSearchControllerActivation;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)refreshTableViewHeaderWithSize:(CGSize)arg1 ;
-(BOOL)shouldAllowDrops;
-(void)refreshTableViewHeaderIfVisible;
-(void)setSearchResultsController:(CNContactListViewController *)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id<CNContactListViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(NSObject*<CNContactDataSource>)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CNContactListViewControllerDelegate>)arg1 ;
-(void)setDataSource:(NSObject*<CNContactDataSource>)arg1 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(CNUIContactsEnvironment *)environment;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)willDismissSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)didPresentSearchController:(id)arg1 ;
@end

