/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CKCloudKitSyncProgressViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationResultsControllerDelegate.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationListCellDelegate.h>
#import <UIKit/UITableViewDropDelegate.h>
#import <UIKit/UITableViewDragDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/INKContentControllerObserver.h>
#import <libobjc.A.dylib/CNMeCardSharingSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSIndexPath, CKMessagesController, CKCloudKitSyncProgressViewController, UIBarButtonItem, NSMapTable, CKNavigationBarTitleView, CKLargeTitleAccessoryView, CKScheduledUpdater, UIView, NSArray, CKConversation, UISearchController, CNContact, CKConversationSearchResultsController, CKSearchViewController, _UIContextMenuInteraction, UIButton, CNContactStore, CKConversationListFilterCell, INKContentController, INKContentView, CKOnboardingController, NSString;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, UITableViewDropDelegate, UITableViewDragDelegate, _UIContextMenuInteractionDelegate, INKContentControllerObserver, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, UIActionSheetDelegate> {

	NSIndexPath* _previouslySelectedIndexPath;
	unsigned _isVisible : 1;
	unsigned _willRotate : 1;
	BOOL _isInitialLoad;
	BOOL _isInitialAppearance;
	BOOL _isShowingSwipeDeleteConfirmation;
	BOOL _draggingConversation;
	BOOL _compositionWasSent;
	BOOL _shouldUseFastPreviewText;
	CKMessagesController* _messagesController;
	CKCloudKitSyncProgressViewController* _syncProgressViewController;
	unsigned long long _filterMode;
	UIBarButtonItem* _customBackButton;
	NSMapTable* _conversationListCellToChatInfo;
	NSMapTable* _chatToConversationListCellInfo;
	CKNavigationBarTitleView* _navigationBarTitleView;
	CKLargeTitleAccessoryView* _largeTitleAccessoryView;
	CKScheduledUpdater* _updater;
	UIView* _noMessagesDialogView;
	NSArray* _frozenConversations;
	CKConversation* _conversationChangingPinState;
	double _conversationCellHeight;
	UISearchController* _searchController;
	CNContact* _meContact;
	CKConversationSearchResultsController* _searchResultsController;
	CKSearchViewController* _modernSearchResultsController;
	_UIContextMenuInteraction* _contextMenuInteraction;
	UIBarButtonItem* _composeButton;
	UIButton* _composeButtonView;
	UIBarButtonItem* _optionsButtonItem;
	UIButton* _optionsButtonView;
	UIBarButtonItem* _spacingItem;
	UIBarButtonItem* _doneButton;
	/*^block*/id _searchCompletion;
	CNContactStore* _contactStore;
	CKConversationListFilterCell* _cachedFilterControlCell;
	INKContentController* _infoKitContentController;
	INKContentView* _infoKitContentView;
	CKOnboardingController* _onboardingController;

}

@property (nonatomic,retain) UIBarButtonItem * customBackButton;                                             //@synthesize customBackButton=_customBackButton - In the implementation block
@property (nonatomic,retain) NSMapTable * conversationListCellToChatInfo;                                    //@synthesize conversationListCellToChatInfo=_conversationListCellToChatInfo - In the implementation block
@property (nonatomic,retain) NSMapTable * chatToConversationListCellInfo;                                    //@synthesize chatToConversationListCellInfo=_chatToConversationListCellInfo - In the implementation block
@property (nonatomic,retain) CKNavigationBarTitleView * navigationBarTitleView;                              //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (nonatomic,retain) CKLargeTitleAccessoryView * largeTitleAccessoryView;                            //@synthesize largeTitleAccessoryView=_largeTitleAccessoryView - In the implementation block
@property (nonatomic,retain) NSIndexPath * previouslySelectedIndexPath;                                      //@synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath - In the implementation block
@property (assign,nonatomic) BOOL isShowingSwipeDeleteConfirmation;                                          //@synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPendingCell; 
@property (nonatomic,retain) CKScheduledUpdater * updater;                                                   //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UIView * noMessagesDialogView;                                                  //@synthesize noMessagesDialogView=_noMessagesDialogView - In the implementation block
@property (nonatomic,copy) NSArray * frozenConversations;                                                    //@synthesize frozenConversations=_frozenConversations - In the implementation block
@property (assign,getter=isDraggingConversation,nonatomic) BOOL draggingConversation;                        //@synthesize draggingConversation=_draggingConversation - In the implementation block
@property (nonatomic,retain) CKConversation * conversationChangingPinState;                                  //@synthesize conversationChangingPinState=_conversationChangingPinState - In the implementation block
@property (assign,nonatomic) double conversationCellHeight;                                                  //@synthesize conversationCellHeight=_conversationCellHeight - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                          //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                          //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) CKConversationSearchResultsController * searchResultsController;                //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,retain) CKSearchViewController * modernSearchResultsController;                         //@synthesize modernSearchResultsController=_modernSearchResultsController - In the implementation block
@property (nonatomic,retain) _UIContextMenuInteraction * contextMenuInteraction;                             //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,nonatomic) BOOL compositionWasSent;                                                        //@synthesize compositionWasSent=_compositionWasSent - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeButton;                                                //@synthesize composeButton=_composeButton - In the implementation block
@property (nonatomic,retain) UIButton * composeButtonView;                                                   //@synthesize composeButtonView=_composeButtonView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * optionsButtonItem;                                            //@synthesize optionsButtonItem=_optionsButtonItem - In the implementation block
@property (nonatomic,retain) UIButton * optionsButtonView;                                                   //@synthesize optionsButtonView=_optionsButtonView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spacingItem;                                                  //@synthesize spacingItem=_spacingItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                   //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,copy) id searchCompletion;                                                              //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) CKCloudKitSyncProgressViewController * syncProgressViewController;              //@synthesize syncProgressViewController=_syncProgressViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFastPreviewText;                                                  //@synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CKConversationListFilterCell * cachedFilterControlCell;                         //@synthesize cachedFilterControlCell=_cachedFilterControlCell - In the implementation block
@property (nonatomic,retain) INKContentController * infoKitContentController;                                //@synthesize infoKitContentController=_infoKitContentController - In the implementation block
@property (nonatomic,retain) INKContentView * infoKitContentView;                                            //@synthesize infoKitContentView=_infoKitContentView - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                  //@synthesize onboardingController=_onboardingController - In the implementation block
@property (assign,nonatomic,__weak) CKMessagesController * messagesController;                               //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (assign,nonatomic) unsigned long long filterMode;                                                  //@synthesize filterMode=_filterMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)_contactStore;
-(BOOL)isVisible;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)inputAccessoryView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_CK9*)arg1 ;
-(void)_updateInsets;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)applicationWillSuspend;
-(long long)preferredStatusBarStyle;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(_UIContextMenuInteraction *)contextMenuInteraction;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)viewDidUnload;
-(CKConversationSearchResultsController *)searchResultsController;
-(void)viewLayoutMarginsDidChange;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)significantTimeChange;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(id)_meContact;
-(void)setSearchCompletion:(id)arg1 ;
-(id)searchCompletion;
-(void)setSearchResultsController:(CKConversationSearchResultsController *)arg1 ;
-(void)updateNavigationItems;
-(void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(BOOL)arg2 ;
-(void)sharingSettingsViewControllerDidUpdateContact:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2 ;
-(void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2 ;
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)filterMode;
-(void)setFilterMode:(unsigned long long)arg1 ;
-(id)activeConversations;
-(void)doneButtonTapped:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(id)nicknameController;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3 ;
-(void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg1 ;
-(BOOL)_messageFilteringEnabled;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_messageSpamFilteringEnabled;
-(BOOL)_shouldShowInboxView;
-(void)performResumeDeferredSetup;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3 ;
-(id)conversationList;
-(NSArray *)frozenConversations;
-(void)updateConversationList;
-(void)setUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_refreshConversationList;
-(void)beginHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)setChatToConversationListCellInfo:(NSMapTable *)arg1 ;
-(void)setConversationListCellToChatInfo:(NSMapTable *)arg1 ;
-(void)_chatWatermarkDidChange:(id)arg1 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg1 ;
-(void)_contactStoreDidFinishLoadingNotification:(id)arg1 ;
-(void)_conversationListDidChange:(id)arg1 ;
-(void)_chatParticipantsChangedNotification:(id)arg1 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg1 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationMuteDidChangeNotification:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)_multiWayCallStateChanged:(id)arg1 ;
-(void)_reloadVisibleConversationList:(id)arg1 ;
-(void)_chatRegistryLastMessageLoadedNotification:(id)arg1 ;
-(void)_downtimeStateChanged:(id)arg1 ;
-(void)updateConversationNamesForNicknames:(id)arg1 ;
-(void)_handleAccountRegistrationChange:(id)arg1 ;
-(void)setContextMenuInteraction:(_UIContextMenuInteraction *)arg1 ;
-(void)composeButtonClicked:(id)arg1 ;
-(void)optionsButtonTapped:(id)arg1 ;
-(void)invalidateCellLayout;
-(Class)conversationListCellClass;
-(void)setConversationCellHeight:(double)arg1 ;
-(void)updateConversationSelection;
-(CKScheduledUpdater *)updater;
-(void)noteUnreadCountsChanged;
-(void)updateBackButton;
-(void)_updateConversationListNeedsResort:(BOOL)arg1 ;
-(void)setTitleForCurrentFilterMode;
-(void)updateSMSSpamConversationsDisplayName;
-(void)_updateConversationListsAndSortIfEnabled;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(BOOL)isShowingSwipeDeleteConfirmation;
-(UIBarButtonItem *)composeButton;
-(UIBarButtonItem *)spacingItem;
-(UIBarButtonItem *)optionsButtonItem;
-(void)updateTitleViews:(BOOL)arg1 ;
-(CKNavigationBarTitleView *)navigationBarTitleView;
-(CKLargeTitleAccessoryView *)largeTitleAccessoryView;
-(void)showMeCardViewControllerWithNickname:(id)arg1 ;
-(BOOL)_meCardSharingEnabled;
-(unsigned long long)_meCardSharingAudience;
-(id)_avatarProviderFromNickname:(id)arg1 ;
-(void)_dismissPresentedNavController:(id)arg1 ;
-(id)_meCardSharingState;
-(BOOL)_shouldKeepSelection;
-(BOOL)shouldShowPendingCell;
-(void)setPreviouslySelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setCompositionWasSent:(BOOL)arg1 ;
-(void)setFrozenConversations:(NSArray *)arg1 ;
-(id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2 ;
-(CKConversationListFilterCell *)cachedFilterControlCell;
-(void)setCachedFilterControlCell:(CKConversationListFilterCell *)arg1 ;
-(void)updateFilterControl:(id)arg1 ;
-(void)updateNoMessagesDialog;
-(UIView *)noMessagesDialogView;
-(void)setNoMessagesDialogView:(UIView *)arg1 ;
-(NSIndexPath *)previouslySelectedIndexPath;
-(id)_mergeUnsentComposition:(id)arg1 withDroppedComposition:(id)arg2 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)_updateToolbarItems;
-(double)conversationCellHeight;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg1 ;
-(CKMessagesController *)messagesController;
-(void)_updateNavbarLayoutIfNeeded;
-(id)_getTitleForCurrentFilterMode;
-(BOOL)compositionWasSent;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1 ;
-(BOOL)_shouldResizeNavigationBar;
-(void)updateMarginWidth;
-(void)_updateSyncProgressIfNeeded;
-(CKSearchViewController *)modernSearchResultsController;
-(id)actionsForTranscriptPreviewController:(id)arg1 ;
-(void)markAsReadButtonTappedForIndexPath:(id)arg1 ;
-(BOOL)shouldUseFastPreviewText;
-(void)setShouldUseFastPreviewText:(BOOL)arg1 ;
-(UIButton *)composeButtonView;
-(UIButton *)optionsButtonView;
-(void)markAsReadButtonTapped:(id)arg1 ;
-(void)batchDeleteButtonTapped:(id)arg1 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg1 ;
-(void)showAccountMismatachAlertForNicknames;
-(void)showMultiplePhoneNumbersAlertForNicknames;
-(void)showMeCardViewController;
-(void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg1 ;
-(NSMapTable *)chatToConversationListCellInfo;
-(NSMapTable *)conversationListCellToChatInfo;
-(void)pinConversationButtonTappedForIndexPath:(id)arg1 setPinned:(BOOL)arg2 ;
-(void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(BOOL)arg2 ;
-(void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 cellToUpdate:(id)arg3 ;
-(void)_filterCellSelectionChanged:(id)arg1 ;
-(void)setInfoKitContentView:(INKContentView *)arg1 ;
-(CKConversation *)conversationChangingPinState;
-(void)setConversationChangingPinState:(CKConversation *)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 ;
-(void)endHoldingAllConversationListUpdatesForKey:(id)arg1 ;
-(void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(id)alertTitleForDelete;
-(void)_cancelDeletion:(/*^block*/id)arg1 ;
-(id)userActivityForNewSceneWithConversation:(id)arg1 ;
-(BOOL)shouldScrollTableAtCellSelection:(id)arg1 ;
-(long long)lastVisibleRowInTable;
-(long long)firstVisibleRowInTable;
-(unsigned long long)_indexOfDefaultConversation;
-(void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(CKCloudKitSyncProgressViewController *)syncProgressViewController;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 ;
-(void)unregisterForCloudKitEvents;
-(void)setSyncProgressViewController:(CKCloudKitSyncProgressViewController *)arg1 ;
-(void)_beginAccountRepairIfNeeded;
-(void)backButtonPressed;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)_conversationPinStateChangedNotification:(id)arg1 ;
-(void)_conversationMessageWasSent:(id)arg1 ;
-(void)_groupsChanged:(id)arg1 ;
-(id)_meCardSharingNameProviderWithContact:(id)arg1 ;
-(BOOL)_imageForkedFromMeCard;
-(void)conversationWillBeMarkedRead:(id)arg1 ;
-(void)compositionSent;
-(void)performSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSelectedConversation;
-(void)selectNextSequentialConversation:(BOOL)arg1 ;
-(void)registerForCloudKitEventsImmediately;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(UIBarButtonItem *)customBackButton;
-(void)setCustomBackButton:(UIBarButtonItem *)arg1 ;
-(void)setNavigationBarTitleView:(CKNavigationBarTitleView *)arg1 ;
-(void)setLargeTitleAccessoryView:(CKLargeTitleAccessoryView *)arg1 ;
-(BOOL)isDraggingConversation;
-(void)setDraggingConversation:(BOOL)arg1 ;
-(void)setModernSearchResultsController:(CKSearchViewController *)arg1 ;
-(void)setComposeButton:(UIBarButtonItem *)arg1 ;
-(void)setComposeButtonView:(UIButton *)arg1 ;
-(void)setOptionsButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setOptionsButtonView:(UIButton *)arg1 ;
-(void)setSpacingItem:(UIBarButtonItem *)arg1 ;
-(INKContentController *)infoKitContentController;
-(void)setInfoKitContentController:(INKContentController *)arg1 ;
-(INKContentView *)infoKitContentView;
@end

