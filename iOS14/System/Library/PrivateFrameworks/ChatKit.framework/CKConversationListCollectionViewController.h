/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/CKPinnedConversationViewDelegate.h>
#import <UIKit/UICollectionViewDragDelegate.h>
#import <UIKit/UICollectionViewDropDelegate.h>
#import <UIKit/UICollectionViewDelegate_Private.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/CKReasonTrackingUpdaterDelegate.h>
#import <libobjc.A.dylib/CKCloudKitSyncProgressViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationResultsControllerDelegate.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/TPKContentControllerDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationListControllerProtocol.h>
#import <libobjc.A.dylib/CKConversationListCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/CKConversationListEmbeddedCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/CKPinnedConversationCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/CKMacToolbarItemProvider.h>

@protocol OS_dispatch_queue;
@class CKMessagesController, NSString, NSDate, CKReasonTrackingUpdater, UIView, UISearchController, CNContact, CKSearchViewController, UIButton, UIBarButtonItem, CKCloudKitSyncProgressViewController, CKConversation, CNContactStore, CKOnboardingController, _PSMessagesPinningSuggester, CKMacToolbarController, CKMacToolbarItem, NSObject, CKPinnedConversationCollectionViewCell, UICollectionViewDiffableDataSource, NSArray, NSDictionary, NSMutableSet, TPKContentController, TPKContent, NSCache;

@interface CKConversationListCollectionViewController : UICollectionViewController <CKPinnedConversationViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, UISearchControllerDelegate, UISearchBarDelegate, UIScrollViewDelegate, CKReasonTrackingUpdaterDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, CKConversationListCollectionViewCellDelegate, CKConversationListEmbeddedCollectionViewCellDelegate, CKPinnedConversationCollectionViewCellDelegate, CKMacToolbarItemProvider> {

	BOOL _isVisible;
	BOOL _hidePinsForAnimation;
	BOOL _isBelowMacSnapToMinWidth;
	BOOL _holdPinningUpdatesForConversationDeletion;
	BOOL _compositionWasSent;
	BOOL _isInitialAppearance;
	BOOL _willRotate;
	BOOL _macShouldShowZKWSearch;
	BOOL _holdPinningUpdatesForOnboardingAnimation;
	BOOL _hasActivePinnedConversationDropSession;
	BOOL _nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;
	BOOL _isShowingPinnedChatDropTarget;
	BOOL _isShowingSwipeDeleteConfirmation;
	BOOL _isShowingPinningOnboarding;
	BOOL _shouldUseFastPreviewText;
	BOOL _haveAppliedInitialSnapshot;
	BOOL _isApplyingSnapshot;
	BOOL _isCommitingDiffableDataSourceTransaction;
	BOOL _isCheckingIfPinningOnboardingNeeded;
	BOOL _canShowSuggestedPinningOnboardingCell;
	BOOL _isCurrentlyAnimatingPinningOnboardingSuggestions;
	unsigned long long _filterMode;
	CKMessagesController* _messagesController;
	NSString* _deferredSearchQuery;
	unsigned long long _editingMode;
	NSString* _lastSelectedConversationItemIdentifier;
	NSDate* _lastUserSelectedConversationTime;
	NSString* _lastUserSelectedConversationItemIdentifier;
	CKReasonTrackingUpdater* _updater;
	UIView* _noMessagesDialogView;
	UISearchController* _searchController;
	CNContact* _meContact;
	CKSearchViewController* _modernSearchResultsController;
	UIButton* _macVirtualComposeButton;
	UIBarButtonItem* _composeButtonItem;
	UIBarButtonItem* _editButtonItem;
	UIBarButtonItem* _optionsButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _doneButtonItem;
	CKCloudKitSyncProgressViewController* _syncProgressViewController;
	CKConversation* _conversationPendingOrbPinChange;
	CNContactStore* _contactStore;
	CKOnboardingController* _onboardingController;
	_PSMessagesPinningSuggester* _pinnedConversationSuggester;
	CKMacToolbarController* _macToolbarController;
	CKMacToolbarItem* _composeToolbarItem;
	NSObject*<OS_dispatch_queue> _tipKitQueue;
	CKPinnedConversationCollectionViewCell* _prototypePinnedConversationCollectionViewCell;
	long long _pinningInteractionMethod;
	UICollectionViewDiffableDataSource* _dataSource;
	NSArray* _frozenPinnedConversations;
	NSArray* _frozenConversations;
	long long _pinnedConversationViewLayoutStyle;
	NSDictionary* _blockedSnapshotInfo;
	NSMutableSet* _itemIdentifiersForVisibleContextMenuInteractions;
	NSArray* _recommendedPinningConversations;
	TPKContentController* _tipKitContentController;
	TPKContent* _tipKitContent;
	NSCache* _cacheForLastDisplayedActivitySnapshotByConversation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * lastSelectedConversationItemIdentifier;                                                   //@synthesize lastSelectedConversationItemIdentifier=_lastSelectedConversationItemIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUserSelectedConversationTime;                                                           //@synthesize lastUserSelectedConversationTime=_lastUserSelectedConversationTime - In the implementation block
@property (nonatomic,retain) NSString * lastUserSelectedConversationItemIdentifier;                                               //@synthesize lastUserSelectedConversationItemIdentifier=_lastUserSelectedConversationItemIdentifier - In the implementation block
@property (nonatomic,retain) CKReasonTrackingUpdater * updater;                                                                   //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UIView * noMessagesDialogView;                                                                       //@synthesize noMessagesDialogView=_noMessagesDialogView - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                                               //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                                               //@synthesize meContact=_meContact - In the implementation block
@property (assign,nonatomic) BOOL holdPinningUpdatesForConversationDeletion;                                                      //@synthesize holdPinningUpdatesForConversationDeletion=_holdPinningUpdatesForConversationDeletion - In the implementation block
@property (nonatomic,retain) CKSearchViewController * modernSearchResultsController;                                              //@synthesize modernSearchResultsController=_modernSearchResultsController - In the implementation block
@property (assign,nonatomic) BOOL compositionWasSent;                                                                             //@synthesize compositionWasSent=_compositionWasSent - In the implementation block
@property (nonatomic,retain) UIButton * macVirtualComposeButton;                                                                  //@synthesize macVirtualComposeButton=_macVirtualComposeButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeButtonItem;                                                                 //@synthesize composeButtonItem=_composeButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButtonItem;                                                                    //@synthesize editButtonItem=_editButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * optionsButtonItem;                                                                 //@synthesize optionsButtonItem=_optionsButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                                                  //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                                                    //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (nonatomic,retain) CKCloudKitSyncProgressViewController * syncProgressViewController;                                   //@synthesize syncProgressViewController=_syncProgressViewController - In the implementation block
@property (assign,nonatomic) BOOL isInitialAppearance;                                                                            //@synthesize isInitialAppearance=_isInitialAppearance - In the implementation block
@property (assign,nonatomic) BOOL willRotate;                                                                                     //@synthesize willRotate=_willRotate - In the implementation block
@property (nonatomic,retain) CKConversation * conversationPendingOrbPinChange;                                                    //@synthesize conversationPendingOrbPinChange=_conversationPendingOrbPinChange - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                                       //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) _PSMessagesPinningSuggester * pinnedConversationSuggester;                                           //@synthesize pinnedConversationSuggester=_pinnedConversationSuggester - In the implementation block
@property (assign,nonatomic) BOOL macShouldShowZKWSearch;                                                                         //@synthesize macShouldShowZKWSearch=_macShouldShowZKWSearch - In the implementation block
@property (assign,nonatomic) BOOL isBelowMacSnapToMinWidth;                                                                       //@synthesize isBelowMacSnapToMinWidth=_isBelowMacSnapToMinWidth - In the implementation block
@property (assign,nonatomic,__weak) CKMacToolbarController * macToolbarController;                                                //@synthesize macToolbarController=_macToolbarController - In the implementation block
@property (nonatomic,retain) CKMacToolbarItem * composeToolbarItem;                                                               //@synthesize composeToolbarItem=_composeToolbarItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> tipKitQueue;                                                            //@synthesize tipKitQueue=_tipKitQueue - In the implementation block
@property (assign,nonatomic) BOOL holdPinningUpdatesForOnboardingAnimation;                                                       //@synthesize holdPinningUpdatesForOnboardingAnimation=_holdPinningUpdatesForOnboardingAnimation - In the implementation block
@property (assign,nonatomic) BOOL hasActivePinnedConversationDropSession;                                                         //@synthesize hasActivePinnedConversationDropSession=_hasActivePinnedConversationDropSession - In the implementation block
@property (assign,nonatomic) BOOL nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;                          //@synthesize nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate=_nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate - In the implementation block
@property (assign,nonatomic) BOOL isShowingPinnedChatDropTarget;                                                                  //@synthesize isShowingPinnedChatDropTarget=_isShowingPinnedChatDropTarget - In the implementation block
@property (nonatomic,retain) CKPinnedConversationCollectionViewCell * prototypePinnedConversationCollectionViewCell;              //@synthesize prototypePinnedConversationCollectionViewCell=_prototypePinnedConversationCollectionViewCell - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> conversationListCollectionViewControllerLogHandle; 
@property (assign,nonatomic) BOOL isShowingSwipeDeleteConfirmation;                                                               //@synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation - In the implementation block
@property (assign,nonatomic) long long pinningInteractionMethod;                                                                  //@synthesize pinningInteractionMethod=_pinningInteractionMethod - In the implementation block
@property (assign,nonatomic) BOOL isShowingPinningOnboarding;                                                                     //@synthesize isShowingPinningOnboarding=_isShowingPinningOnboarding - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFastPreviewText;                                                                       //@synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText - In the implementation block
@property (nonatomic,copy) NSArray * frozenPinnedConversations;                                                                   //@synthesize frozenPinnedConversations=_frozenPinnedConversations - In the implementation block
@property (nonatomic,copy) NSArray * frozenConversations;                                                                         //@synthesize frozenConversations=_frozenConversations - In the implementation block
@property (assign,nonatomic) long long pinnedConversationViewLayoutStyle;                                                         //@synthesize pinnedConversationViewLayoutStyle=_pinnedConversationViewLayoutStyle - In the implementation block
@property (assign,nonatomic) BOOL haveAppliedInitialSnapshot;                                                                     //@synthesize haveAppliedInitialSnapshot=_haveAppliedInitialSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isApplyingSnapshot;                                                                             //@synthesize isApplyingSnapshot=_isApplyingSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isCommitingDiffableDataSourceTransaction;                                                       //@synthesize isCommitingDiffableDataSourceTransaction=_isCommitingDiffableDataSourceTransaction - In the implementation block
@property (nonatomic,retain) NSDictionary * blockedSnapshotInfo;                                                                  //@synthesize blockedSnapshotInfo=_blockedSnapshotInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * itemIdentifiersForVisibleContextMenuInteractions;                                     //@synthesize itemIdentifiersForVisibleContextMenuInteractions=_itemIdentifiersForVisibleContextMenuInteractions - In the implementation block
@property (assign,nonatomic) BOOL isCheckingIfPinningOnboardingNeeded;                                                            //@synthesize isCheckingIfPinningOnboardingNeeded=_isCheckingIfPinningOnboardingNeeded - In the implementation block
@property (assign,nonatomic) BOOL canShowSuggestedPinningOnboardingCell;                                                          //@synthesize canShowSuggestedPinningOnboardingCell=_canShowSuggestedPinningOnboardingCell - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyAnimatingPinningOnboardingSuggestions;                                               //@synthesize isCurrentlyAnimatingPinningOnboardingSuggestions=_isCurrentlyAnimatingPinningOnboardingSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * recommendedPinningConversations;                                                           //@synthesize recommendedPinningConversations=_recommendedPinningConversations - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTipKitContent; 
@property (nonatomic,retain) TPKContentController * tipKitContentController;                                                      //@synthesize tipKitContentController=_tipKitContentController - In the implementation block
@property (nonatomic,retain) TPKContent * tipKitContent;                                                                          //@synthesize tipKitContent=_tipKitContent - In the implementation block
@property (nonatomic,retain) NSCache * cacheForLastDisplayedActivitySnapshotByConversation;                                       //@synthesize cacheForLastDisplayedActivitySnapshotByConversation=_cacheForLastDisplayedActivitySnapshotByConversation - In the implementation block
@property (assign,nonatomic) unsigned long long editingMode;                                                                      //@synthesize editingMode=_editingMode - In the implementation block
@property (assign,nonatomic) BOOL hidePinsForAnimation;                                                                           //@synthesize hidePinsForAnimation=_hidePinsForAnimation - In the implementation block
@property (nonatomic,retain) NSString * deferredSearchQuery;                                                                      //@synthesize deferredSearchQuery=_deferredSearchQuery - In the implementation block
@property (assign,nonatomic,__weak) CKMessagesController * messagesController;                                                    //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,readonly) BOOL isVisible;                                                                                    //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,readonly) BOOL isSearchActiveAndDisplayingResultsForSearchText; 
@property (nonatomic,readonly) BOOL isSearchActive; 
@property (assign,nonatomic) unsigned long long filterMode;                                                                       //@synthesize filterMode=_filterMode - In the implementation block
+(id)conversationListCollectionViewControllerLogHandle;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2 ;
-(id)activeConversations;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CNContactStore *)contactStore;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(CNContact *)meContact;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(id)pinGridLayoutSectionForEnvironment:(id)arg1 withNumberOfItems:(long long)arg2 ;
-(id)filterLayoutSectionForEnvironment:(id)arg1 ;
-(id)tipKitLayoutSectionForEnvironment:(id)arg1 ;
-(double)conversationCellHeight;
-(id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)arg1 ;
-(long long)numberOfPinnedConversationColumnsForLayoutStyle:(long long)arg1 ;
-(id)rowLayoutSectionForEnvironment:(id)arg1 withRowHeight:(double)arg2 usingEstimatedRowHeight:(BOOL)arg3 needsPinnedSectionSeparator:(BOOL)arg4 ;
-(long long)_pinnedConversationViewLayoutStyleForCollectionViewSize:(CGSize)arg1 ;
-(long long)pinnedConversationViewLayoutStyle;
-(void)_setPinnedConversationViewLayoutStyle:(long long)arg1 shouldInvalidateLayout:(BOOL)arg2 ;
-(double)_minimumEdgeToCellSpacingForLayoutStyle:(long long)arg1 ;
-(UISearchController *)searchController;
-(double)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(long long)arg1 ;
-(double)pinnedConversationCellHeightForLayoutStyle:(long long)arg1 cellWidth:(double)arg2 ;
-(double)_totalVerticalRowSpacingForLayoutStyle:(long long)arg1 ;
-(id)pinGridLayoutGroupForCollectionViewSize:(CGSize)arg1 numberOfItems:(long long)arg2 ;
-(id)_emptyLayoutSection;
-(CKMessagesController *)messagesController;
-(id)leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1 ;
-(id)trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(CKPinnedConversationCollectionViewCell *)prototypePinnedConversationCollectionViewCell;
-(void)setPrototypePinnedConversationCollectionViewCell:(CKPinnedConversationCollectionViewCell *)arg1 ;
-(void)setPinnedConversationViewLayoutStyle:(long long)arg1 ;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)searchResultsController;
-(id)conversationListLayout;
-(double)widthForPinnedConversationCellInCollectionViewOfSize:(CGSize)arg1 numberOfItems:(long long)arg2 ;
-(void)updatePinnedConversationViewLayoutStyle;
-(void)didDismissSearchController:(id)arg1 ;
-(id)init;
-(id)_multitaskingDragExclusionRects;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setHidePinsForAnimation:(BOOL)arg1 ;
-(void)setIsShowingPinningOnboarding:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 shouldUpdate:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCanShowSuggestedPinningOnboardingCell:(BOOL)arg1 ;
-(void)animateOutBackgroundSnapshotView:(id)arg1 ;
-(void)updateSnapshotAnimatingDifferences:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)animationDistanceForCompletingOnboarding;
-(void)commitPinnedConversationsForEditingPins;
-(void)animateInCollectionView:(id)arg1 aboveBackgroundSnapshotView:(id)arg2 enteringOnboarding:(BOOL)arg3 animationDistance:(double)arg4 ;
-(void)completeAnimation;
-(void)animateInPinsToFinalPosition;
-(void)removeNewlyPinnedSuggestionCells:(id)arg1 ;
-(void)pinConversationsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)recommendedPinningConversations;
-(void)setHoldPinningUpdatesForOnboardingAnimation:(BOOL)arg1 ;
-(void)startEndSuggestedPinsAnimation;
-(void)setIsCurrentlyAnimatingPinningOnboardingSuggestions:(BOOL)arg1 ;
-(void)togglePinStateForConversation:(id)arg1 withReason:(id)arg2 ;
-(BOOL)shouldAnimatePositionForRecommendedItemIdentifiers:(id)arg1 pinnedItemIdentifiers:(id)arg2 ;
-(void)updateSnapshotAnimatingDifferences:(BOOL)arg1 ;
-(void)startCompletePinningOnboardingAnimation;
-(void)startSuggestedPinsAnimation;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3 ;
-(void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg1 ;
-(id)_deleteSwipeActionForIndexPath:(id)arg1 ;
-(id)pinnedConversationIdentifiers;
-(id)pinnedConversations;
-(BOOL)_messageUnknownFilteringEnabled;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)_messageSpamFilteringEnabled;
-(void)setRecommendedPinningConversations:(NSArray *)arg1 ;
-(BOOL)_isRunningPPT;
-(CKMacToolbarController *)macToolbarController;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)performResumeDeferredSetup;
-(void)willPresentSearchController:(id)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)updateNavigationItems;
-(void)setUpdater:(CKReasonTrackingUpdater *)arg1 ;
-(void)setFilterMode:(unsigned long long)arg1 ;
-(void)updateConversationListForMessageSentToConversation:(id)arg1 ;
-(BOOL)willRotate;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
-(void)unpinButtonTappedForCell:(id)arg1 withConversation:(id)arg2 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)_keyboardWillShow:(id)arg1 ;
-(CKReasonTrackingUpdater *)updater;
-(void)detailsControllerDidDismiss:(id)arg1 ;
-(id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)arg1 ;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(id)toolbarItemForIdentifier:(id)arg1 ;
-(double)virtualToolbarPreferredHeight;
-(id)_meContact;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(void)setMacToolbarController:(CKMacToolbarController *)arg1 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)significantTimeChange;
-(void)reloadData;
-(BOOL)isVisible;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLoad;
-(unsigned long long)editingMode;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)tipKitQueue;
-(id)_contactStore;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(BOOL)arg2 ;
-(void)sharingSettingsViewControllerDidUpdateContact:(id)arg1 ;
-(void)_handingPendingConversationDidChange:(id)arg1 ;
-(void)setNextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate:(BOOL)arg1 ;
-(void)_conversationListPinnedConversationsDidChange:(id)arg1 ;
-(void)_refreshConversationListCellForGroupPhotoUpdate:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2 ;
-(void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2 ;
-(BOOL)hasActivePinnedConversationDropSession;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_performTranscriptPushForItemAtIndexPath:(id)arg1 userInitiated:(BOOL)arg2 ;
-(NSDate *)lastUserSelectedConversationTime;
-(UIBarButtonItem *)composeButtonItem;
-(NSString *)lastUserSelectedConversationItemIdentifier;
-(void)setLastUserSelectedConversationTime:(NSDate *)arg1 ;
-(void)setPinningInteractionMethod:(long long)arg1 ;
-(void)setLastUserSelectedConversationItemIdentifier:(NSString *)arg1 ;
-(BOOL)macShouldShowZKWSearch;
-(id)_itemIdentifierOfDefaultConversation;
-(BOOL)sectionHasActionableConversations:(unsigned long long)arg1 ;
-(CKConversation *)conversationPendingOrbPinChange;
-(BOOL)contextMenuInteractionShouldBeginAtIndexPath:(id)arg1 ;
-(id)_topLevelMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3 ;
-(id)nicknameController;
-(void)setItemIdentifiersForVisibleContextMenuInteractions:(NSMutableSet *)arg1 ;
-(void)setConversationPendingOrbPinChange:(CKConversation *)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)_updateInsets;
-(id)_previewForHighlightingOrDismissingContextMenuWithConfiguration:(id)arg1 collectionView:(id)arg2 ;
-(id)_pinActionForItemIdentifier:(id)arg1 ;
-(id)_primaryMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3 ;
-(id)_secondaryMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3 ;
-(id)_muteActionForItemIdentifier:(id)arg1 ;
-(id)_markAsActionForItemIdentifier:(id)arg1 ;
-(void)presentDetailsForItemIdentifier:(id)arg1 fromView:(id)arg2 ;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(id)_deleteConversationActionForItemIdentifier:(id)arg1 withCell:(id)arg2 ;
-(id)_openConversationInNewWindowActionForItemIdentifier:(id)arg1 ;
-(void)muteConversationButtonTappedForConversationWithItemIdentifier:(id)arg1 setMuted:(BOOL)arg2 ;
-(void)unpinConversation:(id)arg1 withReason:(id)arg2 ;
-(void)deleteButtonTappedForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 cellToUpdate:(id)arg3 ;
-(void)pinConversation:(id)arg1 withReason:(id)arg2 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(id)_conversationDetailsActionForItemIdentifier:(id)arg1 withCell:(id)arg2 ;
-(void)_updateLargeTitleDisplayModeWithAnimation:(BOOL)arg1 ;
-(void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(id)pinnedConversationIdentifiersFromSnapshot:(id)arg1 ;
-(void)setWillRotate:(BOOL)arg1 ;
-(void)showCannotPinMoreConversationsAlert;
-(BOOL)holdPinningUpdatesForOnboardingAnimation;
-(void)setMacShouldShowZKWSearch:(BOOL)arg1 ;
-(id)indexPathOfFirstSelectedItem;
-(void)updateContentsOfCellForConversation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsBelowMacSnapToMinWidth:(BOOL)arg1 ;
-(void)_iosUpdateNavbarLayoutIfNeeded;
-(void)_macosUpdateNavbarLayoutIfNeeded;
-(BOOL)_shouldAllowLargeTitles;
-(void)startTipCellAnimatingIfNecessary;
-(BOOL)isShowingConversationFromCatalystOpenURL;
-(void)stopTipCellAnimatingIfNecessary;
-(BOOL)shouldScrollCollectionViewForCellSelection:(id)arg1 ;
-(id)lastVisibleIndexPathInCollectionView;
-(id)firstVisibleIndexPathInCollectionView;
-(void)editButtonMenuWillShow;
-(void)_submitFeedbackIfNecessaryForSuggestedPinnedConversationsFollowingOnboardingCompletedSuccessfully:(BOOL)arg1 ;
-(id)editButtonDropdownMenu;
-(void)newComposeWillActivate;
-(void)setHoldPinningUpdatesForConversationDeletion:(BOOL)arg1 ;
-(void)setTipKitQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performDeletionForActiveConversation:(id)arg1 itemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 cellToUpdate:(id)arg4 ;
-(void)setEditButtonItem:(UIBarButtonItem *)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 shouldUsePreviousySelectedIndexPath:(BOOL)arg2 ;
-(id)_indexPathOfDefaultConversation;
-(BOOL)hasDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)_selectConversationAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateConversationSelectionPreservingLastSelectedItemIdentifier;
-(BOOL)isDetailsNavigationControllerDetached;
-(void)_submitFeedbackIfNecessaryForPinsChangedWithPreviousPinnedConversationIdentifiers:(id)arg1 ;
-(void)fetchPinningSuggestions;
-(BOOL)holdPinningUpdatesForConversationDeletion;
-(BOOL)_shouldAnimatePinningChangesForUpdateFollowingHoldForReason:(id)arg1 ;
-(BOOL)nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;
-(id)_dndSwipeActionForIndexPath:(id)arg1 ;
-(void)showPinningOnboardingTapped;
-(void)updateContentsOfTipCellForCustomizationType:(long long)arg1 ;
-(_PSMessagesPinningSuggester *)pinnedConversationSuggester;
-(long long)_feedbackPinningInteractionMethod;
-(BOOL)canShowSuggestedPinningOnboardingCell;
-(id)_pinningSuggestionsForConversations:(id)arg1 ;
-(long long)pinningInteractionMethod;
-(void)reasonTrackingUpdater:(id)arg1 didBeginHoldingUpdatesWithInitialReason:(id)arg2 ;
-(void)reasonTrackingUpdater:(id)arg1 needsUpdateForReasons:(id)arg2 followingHoldForReason:(id)arg3 ;
-(id)detailsNavigationControllerConversation:(id)arg1 ;
-(void)reasonTrackingUpdater:(id)arg1 didEndHoldingUpdatesWithFinalReason:(id)arg2 ;
-(void)scrollToFirstSelectedItemIfNecessary;
-(UIButton *)macVirtualComposeButton;
-(void)setHasActivePinnedConversationDropSession:(BOOL)arg1 ;
-(void)updateConfigurationStateForSelectedCell;
-(void)setMacVirtualComposeButton:(UIButton *)arg1 ;
-(void)setComposeButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setTipKitContent:(TPKContent *)arg1 ;
-(BOOL)isInitialAppearance;
-(void)setIsInitialAppearance:(BOOL)arg1 ;
-(void)setPinnedConversationSuggester:(_PSMessagesPinningSuggester *)arg1 ;
-(void)setIsShowingPinnedChatDropTarget:(BOOL)arg1 ;
-(void)setIsCommitingDiffableDataSourceTransaction:(BOOL)arg1 ;
-(BOOL)isCheckingIfPinningOnboardingNeeded;
-(void)setIsCheckingIfPinningOnboardingNeeded:(BOOL)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)isSearchActive;
-(long long)preferredStatusBarStyle;
-(void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3 ;
-(id)conversationList;
-(NSArray *)frozenConversations;
-(void)updateConversationList;
-(void)_refreshConversationList;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_chatWatermarkDidChange:(id)arg1 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg1 ;
-(void)_downtimeStateChanged:(id)arg1 ;
-(void)_contactStoreDidFinishLoadingNotification:(id)arg1 ;
-(void)_conversationListDidChange:(id)arg1 ;
-(void)_multiWayCallStateChanged:(id)arg1 ;
-(void)_chatParticipantsChangedNotification:(id)arg1 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg1 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationMuteDidChangeNotification:(id)arg1 ;
-(void)composeButtonClicked:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)_reloadVisibleConversationList:(id)arg1 ;
-(void)_chatRegistryLastMessageLoadedNotification:(id)arg1 ;
-(void)updateConversationNamesForNicknames:(id)arg1 ;
-(void)_handleAccountRegistrationChange:(id)arg1 ;
-(void)invalidateCellLayout;
-(void)updateConversationSelection;
-(void)noteUnreadCountsChanged;
-(void)updateBackButton;
-(void)updateSMSSpamConversationsDisplayName;
-(BOOL)isShowingSwipeDeleteConfirmation;
-(void)_updateConversationListsAndSortIfEnabled;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(UIBarButtonItem *)optionsButtonItem;
-(BOOL)_meCardSharingEnabled;
-(void)showMeCardViewControllerWithNickname:(id)arg1 ;
-(unsigned long long)_meCardSharingAudience;
-(id)_avatarProviderFromNickname:(id)arg1 ;
-(void)_dismissPresentedNavController:(id)arg1 ;
-(id)_meCardSharingState;
-(BOOL)_shouldKeepSelection;
-(BOOL)shouldShowPendingCell;
-(void)setCompositionWasSent:(BOOL)arg1 ;
-(void)setFrozenConversations:(NSArray *)arg1 ;
-(id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2 ;
-(BOOL)_shouldShowInboxView;
-(void)updateNoMessagesDialog;
-(UIView *)noMessagesDialogView;
-(void)setNoMessagesDialogView:(UIView *)arg1 ;
-(NSString *)lastSelectedConversationItemIdentifier;
-(void)_updateToolbarItems;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg1 ;
-(void)_updateNavbarLayoutIfNeeded;
-(BOOL)compositionWasSent;
-(id)_getTitleForCurrentFilterMode;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(BOOL)_shouldResizeNavigationBar;
-(CKSearchViewController *)modernSearchResultsController;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 ;
-(void)updateSyncProgressIfNeeded;
-(BOOL)shouldUseFastPreviewText;
-(void)setShouldUseFastPreviewText:(BOOL)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)loadView;
-(void)contentController:(id)arg1 actionTapped:(id)arg2 ;
-(void)markAsReadButtonTapped:(id)arg1 ;
-(void)batchDeleteButtonTapped:(id)arg1 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg1 ;
-(void)showAccountMismatachAlertForNicknames;
-(void)showMultiplePhoneNumbersAlertForNicknames;
-(void)showMeCardViewController;
-(id)contentController:(id)arg1 contentView:(id)arg2 iconForCustomizationID:(long long)arg3 ;
-(void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setLastSelectedConversationItemIdentifier:(NSString *)arg1 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg1 ;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)performDeletionForPendingConversationCell:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectConversationClosestToDeletedIndex:(id)arg1 ;
-(id)alertTitleForDelete;
-(id)alertMessageForDelete;
-(void)_cancelDeletion:(/*^block*/id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)removePendingConversationCell;
-(CKCloudKitSyncProgressViewController *)syncProgressViewController;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 forceShow:(BOOL)arg2 ;
-(void)unregisterForCloudKitEvents;
-(void)setSyncProgressViewController:(CKCloudKitSyncProgressViewController *)arg1 ;
-(void)compositionSent;
-(void)_beginAccountRepairIfNeeded;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)conversationWillBeMarkedRead:(id)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 removingPendingConversationCell:(BOOL)arg2 ;
-(void)selectNextSequentialConversation:(BOOL)arg1 ;
-(void)selectPinnedConversationForItem:(long long)arg1 ;
-(void)selectFirstActiveConversation;
-(void)deleteSelectedConversation;
-(void)performSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerForCloudKitEventsImmediately;
-(void)beginHoldingConversationListUpdatesForPPTTests;
-(void)endHoldingConversationListUpdatesForPPTTests;
-(NSString *)deferredSearchQuery;
-(void)setDeferredSearchQuery:(NSString *)arg1 ;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)backButtonPressed;
-(BOOL)isSearchActiveAndDisplayingResultsForSearchText;
-(void)_conversationMessageWasSent:(id)arg1 ;
-(id)_meCardSharingNameProviderWithContact:(id)arg1 ;
-(BOOL)_imageForkedFromMeCard;
-(CKMacToolbarItem *)composeToolbarItem;
-(void)setComposeToolbarItem:(CKMacToolbarItem *)arg1 ;
-(void)setModernSearchResultsController:(CKSearchViewController *)arg1 ;
-(void)setOptionsButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(TPKContentController *)tipKitContentController;
-(void)setTipKitContentController:(TPKContentController *)arg1 ;
-(TPKContent *)tipKitContent;
-(void)willDismissSearchController:(id)arg1 ;
-(id)_userDefaults;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg1 ;
-(void)didReorderConversationsWithTransaction:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 inCollectionView:(id)arg2 withItemIdentifier:(id)arg3 ;
-(id)filterCellInCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)supplementaryViewForIndexPath:(id)arg1 inCollectionView:(id)arg2 withKind:(id)arg3 ;
-(id)cellForPinnedConversationDropTargetInCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isBelowMacSnapToMinWidth;
-(void)avatarViewTapped:(id)arg1 ;
-(id)cellForStandardConversationWithItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)configureDropTargetCell:(id)arg1 ;
-(id)cellForPinnedConversationWithItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)tipKitCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)newMessageCellInCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForPinningOnboardingTitleViewCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tipKitOnboardingCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureNewMessageCell:(id)arg1 ;
-(void)configureTipKitOnboardingCell:(id)arg1 ;
-(void)configurePinnedConversationCell:(id)arg1 forItemIdentifier:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)configureFilterCell:(id)arg1 ;
-(void)setEditingMode:(unsigned long long)arg1 ;
-(void)configureConversationCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)configureTipKitCell:(id)arg1 ;
-(void)configureOnboardingTitleCell:(id)arg1 ;
-(id)filterCellSegmentTitles;
-(void)_filterControlSelectionChanged:(id)arg1 ;
-(id)conversationForItemIdentifier:(id)arg1 ;
-(BOOL)hidePinsForAnimation;
-(id)previousPinnedConversationActivitySnapshotForConversation:(id)arg1 ;
-(void)_configurePinnedConversationCell:(id)arg1 forConversation:(id)arg2 itemIdentifier:(id)arg3 indexPath:(id)arg4 animated:(BOOL)arg5 ;
-(long long)_activityItemOriginationDirectionForItemIdentifier:(id)arg1 conversation:(id)arg2 ;
-(double)_activityItemTopInsetForIndexPath:(id)arg1 ;
-(id)_pinnedConversationShortNames;
-(id)_recentMessagesInPinnedConversations;
-(NSMutableSet *)itemIdentifiersForVisibleContextMenuInteractions;
-(BOOL)_isOnlyActivityItemInRowForConversation:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)applicationWillSuspend;
-(BOOL)_conversationHasActivityItem:(id)arg1 ;
-(id)_conversationsInRowOfItemIdentifier:(id)arg1 ;
-(id)generateSnapshot;
-(BOOL)isApplyingSnapshot;
-(NSArray *)frozenPinnedConversations;
-(void)setFrozenPinnedConversations:(NSArray *)arg1 ;
-(id)conversationAtIndexPath:(id)arg1 ;
-(NSObject*<OS_os_log>)conversationListCollectionViewControllerLogHandle;
-(BOOL)shouldShowTipKitContent;
-(BOOL)isShowingPinningOnboarding;
-(BOOL)isShowingPinnedChatDropTarget;
-(BOOL)shouldShowPinnedConversations;
-(id)itemIdentifiersForConversations:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isCurrentlyAnimatingPinningOnboardingSuggestions;
-(void)_ck_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(void)applyConversationListSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isCommitingDiffableDataSourceTransaction;
-(UIBarButtonItem *)editButtonItem;
-(void)setBlockedSnapshotInfo:(NSDictionary *)arg1 ;
-(void)setIsApplyingSnapshot:(BOOL)arg1 ;
-(BOOL)haveAppliedInitialSnapshot;
-(void)setHaveAppliedInitialSnapshot:(BOOL)arg1 ;
-(NSDictionary *)blockedSnapshotInfo;
-(void)updateContentsOfCellWithIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)itemIdentifierForConversation:(id)arg1 inSection:(unsigned long long)arg2 ;
-(id)_dragItemsForConversation:(id)arg1 indexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(BOOL)_shouldUsePreviewProviderForDragItemAtIndexPath:(id)arg1 ;
-(void)updateContentsOfCellWithItemIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateContentsOfCellWithItemIdentifier:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateContentsOfCell:(id)arg1 withItemIdentifier:(id)arg2 atIndexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)_freezeConversations;
-(void)_unfreezeConversations;
-(id)dragPreviewViewForPinnedConversation:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_snapshotOfAvatarViewForConversation:(id)arg1 ;
-(double)yCoordinateForBorderBetweenPinnedAndActiveSectionExcludingConversations:(id)arg1 ;
-(id)dataSourceWithCollectionView:(id)arg1 ;
-(id)dragOrDropPreviewParametersForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_conversationsFromLocalDropSession:(id)arg1 ;
-(id)_conversationDropProposalForCollectionView:(id)arg1 dropSession:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(id)_conversationFromDragItem:(id)arg1 ;
-(NSCache *)cacheForLastDisplayedActivitySnapshotByConversation;
-(void)setCacheForLastDisplayedActivitySnapshotByConversation:(NSCache *)arg1 ;
-(id)_lastDisplayedActivitySnapshotCacheKeyForConversation:(id)arg1 ;
-(void)_removeConversationsFromFrozenConversations:(id)arg1 ;
-(unsigned long long)_destinationSectionForDropSession:(id)arg1 destinationIndexPath:(id)arg2 ;
-(void)_performItemDropWithCollectionView:(id)arg1 dropCoordinator:(id)arg2 ;
-(id)cellPinningOnboardingItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_allFrozenConversations;
-(id)conversationsAtIndexPaths:(id)arg1 ;
-(void)updateContentsOfAllCellsAnimated:(BOOL)arg1 ;
-(BOOL)itemIdentifierIsFromPinnedSection:(id)arg1 ;
-(void)_performConversationDropWithCollectionView:(id)arg1 dropCoordinator:(id)arg2 ;
-(BOOL)_isDropForSession:(id)arg1 toLeadingEdgeOfView:(id)arg2 ;
-(void)updateContentsOfCellsWithItemIdentifiers:(id)arg1 animated:(BOOL)arg2 ;
-(id)conversationsForItemIdentifiers:(id)arg1 ;
-(long long)numberOfConversations;
-(CGRect)pinnedConversationMultitaskingDragExclusionRect;
-(id)nextSequentialIndexPathForIndexPath:(id)arg1 descending:(BOOL)arg2 ;
-(long long)distanceBetweenConversationIndexPath:(id)arg1 andIndexPath:(id)arg2 ;
-(long long)numberOfPinnedConversations;
-(void)pinnedConversationView:(id)arg1 didUpdateWithActivitySnapshot:(id)arg2 ;
-(id)_conversationAfterDropDestination:(id)arg1 fromDiffableDataSource:(id)arg2 snapshot:(id)arg3 excludingDraggedConversation:(id)arg4 ;
-(void)commitPinnedConversationsFromSnapshot:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(unsigned long long)filterMode;
-(long long)_numberOfItemsInSection:(unsigned long long)arg1 ;
-(void)pinButtonTappedForCell:(id)arg1 ;
-(void)dealloc;
-(id)transparentNavBarAppearance;
-(void)updateManualScrollEdgeProgress;
@end

