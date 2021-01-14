/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CKComposeRecipientViewDelegate.h>
#import <libobjc.A.dylib/CKRecipientSearchListControllerDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteGroupDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>

@protocol CKRecipientSelectionControllerDelegate;
@class CNContactStore, CKPendingConversation, CKComposeRecipientView, UIView, CKRecipientSearchListController, STConversationContext, UIScrollView, UILabel, CNContactPickerViewController, CNComposeRecipient, CKManualUpdater, NSMutableDictionary, CKDetailsContactsManager, CKAlertController, NSString;

@interface CKRecipientSelectionController : CKViewController <CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate, CKDetailsContactsManagerDelegate> {

	double _keyboardHeightWithAccessoryView;
	CNContactStore* _contactStore;
	BOOL _peoplePickerHidden;
	BOOL _editable;
	BOOL _allowedByScreenTime;
	BOOL _forceMMS;
	BOOL _isDisambiguating;
	BOOL _preventAtomization;
	BOOL _didShowOneTimeErrorAlert;
	BOOL _homogenizePreferredServiceForiMessage;
	BOOL _shouldSuppressSearchResultsTable;
	id<CKRecipientSelectionControllerDelegate> _delegate;
	CKPendingConversation* _conversation;
	CKComposeRecipientView* _toField;
	UIView* _toFieldContainerView;
	CKRecipientSearchListController* _searchListController;
	STConversationContext* _currentConversationContext;
	/*^block*/id _gameCenterPickerBlock;
	UIScrollView* _toFieldScrollingView;
	UILabel* _toFieldPlaceholderLabel;
	CNContactPickerViewController* _contactPickerViewController;
	CNComposeRecipient* _recentContactForPresentedCNCard;
	CKManualUpdater* _addressBookNotificationUpdater;
	NSMutableDictionary* _recipientAvailibityTimers;
	NSMutableDictionary* _recipientAvailabilities;
	unsigned long long _numberOfRowsInToField;
	CKDetailsContactsManager* _contactsManager;
	CKAlertController* _alternateAddressesAlertController;

}

@property (nonatomic,retain) CKPendingConversation * conversation;                                     //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKComposeRecipientView * toField;                                         //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) UIScrollView * toFieldScrollingView;                                      //@synthesize toFieldScrollingView=_toFieldScrollingView - In the implementation block
@property (nonatomic,retain) UILabel * toFieldPlaceholderLabel;                                        //@synthesize toFieldPlaceholderLabel=_toFieldPlaceholderLabel - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * contactPickerViewController;              //@synthesize contactPickerViewController=_contactPickerViewController - In the implementation block
@property (nonatomic,retain) CNComposeRecipient * recentContactForPresentedCNCard;                     //@synthesize recentContactForPresentedCNCard=_recentContactForPresentedCNCard - In the implementation block
@property (assign,nonatomic) BOOL isDisambiguating;                                                    //@synthesize isDisambiguating=_isDisambiguating - In the implementation block
@property (nonatomic,retain) CKManualUpdater * addressBookNotificationUpdater;                         //@synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater - In the implementation block
@property (assign,nonatomic) BOOL preventAtomization;                                                  //@synthesize preventAtomization=_preventAtomization - In the implementation block
@property (assign,nonatomic) BOOL didShowOneTimeErrorAlert;                                            //@synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert - In the implementation block
@property (nonatomic,readonly) BOOL homogenizePreferredServiceForiMessage;                             //@synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressSearchResultsTable;                                  //@synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recipientAvailibityTimers;                          //@synthesize recipientAvailibityTimers=_recipientAvailibityTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recipientAvailabilities;                            //@synthesize recipientAvailabilities=_recipientAvailabilities - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRowsInToField;                                 //@synthesize numberOfRowsInToField=_numberOfRowsInToField - In the implementation block
@property (nonatomic,retain) STConversationContext * currentConversationContext;                       //@synthesize currentConversationContext=_currentConversationContext - In the implementation block
@property (assign,nonatomic) BOOL allowedByScreenTime;                                                 //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * contactsManager;                               //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,retain) CKAlertController * alternateAddressesAlertController;                    //@synthesize alternateAddressesAlertController=_alternateAddressesAlertController - In the implementation block
@property (assign,nonatomic,__weak) id<CKRecipientSelectionControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * toFieldContainerView;                                          //@synthesize toFieldContainerView=_toFieldContainerView - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,retain) CKRecipientSearchListController * searchListController;                   //@synthesize searchListController=_searchListController - In the implementation block
@property (assign,getter=isSearchResultsHidden,nonatomic) BOOL searchResultsHidden; 
@property (assign,getter=isPeoplePickerHidden,nonatomic) BOOL peoplePickerHidden;                      //@synthesize peoplePickerHidden=_peoplePickerHidden - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) BOOL toFieldIsFirstResponder; 
@property (nonatomic,readonly) double collapsedHeight; 
@property (assign,nonatomic) BOOL forceMMS;                                                            //@synthesize forceMMS=_forceMMS - In the implementation block
@property (nonatomic,copy) id gameCenterPickerBlock;                                                   //@synthesize gameCenterPickerBlock=_gameCenterPickerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recipients;
-(BOOL)isEditable;
-(void)setContactsManager:(CKDetailsContactsManager *)arg1 ;
-(CKDetailsContactsManager *)contactsManager;
-(void)viewWillLayoutSubviews;
-(CNContactStore *)contactStore;
-(void)addRecipient:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(id)init;
-(id<CKRecipientSelectionControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)allowedByScreenTime;
-(void)setConversation:(CKPendingConversation *)arg1 ;
-(CKComposeRecipientView *)toField;
-(id)initWithConversation:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<CKRecipientSelectionControllerDelegate>)arg1 ;
-(CKPendingConversation *)conversation;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLoad;
-(id)chatForIMHandle:(id)arg1 ;
-(BOOL)forceMMS;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setToField:(CKComposeRecipientView *)arg1 ;
-(void)searchListControllerDidScroll:(id)arg1 ;
-(BOOL)isSearchResultsHidden;
-(void)searchListControllerDidFinishSearch:(id)arg1 ;
-(void)searchListController:(id)arg1 destinationsUpdated:(id)arg2 ;
-(long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2 ;
-(void)invalidateOutstandingIDStatusRequests;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reset;
-(double)_macToFieldHeight;
-(CKRecipientSearchListController *)searchListController;
-(void)_updateToField;
-(STConversationContext *)currentConversationContext;
-(void)recipientSelectionControllerDidChange;
-(void)_removeRecent;
-(void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
-(BOOL)isBeingPresentedInMacDetailsView;
-(void)setNumberOfRowsInToField:(unsigned long long)arg1 ;
-(BOOL)_systemUnderLock;
-(double)preferredMacToolbarHeight;
-(double)fieldHeightOffset;
-(UIScrollView *)toFieldScrollingView;
-(UIView *)toFieldContainerView;
-(void)setPeoplePickerHidden:(BOOL)arg1 ;
-(void)_handleRecipientViewChanged:(id)arg1 ;
-(void)_handleIDSResultsWhenSearchTableIsHidden:(id)arg1 ;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_handleAddressBookPartialChangedNotification:(id)arg1 ;
-(UIEdgeInsets)_navigationBarInsets;
-(void)_updateAddressBookProperties;
-(void)_updateToFieldRecipientsData;
-(void)setAddressBookNotificationUpdater:(CKManualUpdater *)arg1 ;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)bringComposeRecipientViewToFront;
-(void)addRecipients:(id)arg1 ;
-(void)setSearchListController:(CKRecipientSearchListController *)arg1 ;
-(void)_resetSearchResultsInsets;
-(void)setPreventAtomization:(BOOL)arg1 ;
-(void)setCurrentConversationContext:(STConversationContext *)arg1 ;
-(unsigned long long)numberOfRowsInToField;
-(double)_toolbarHeightForNumberOfRows:(unsigned long long)arg1 ;
-(void)_adjustToFieldPositionIfNecessary;
-(BOOL)isGameCenterRecipient:(id)arg1 ;
-(void)_updateSearchResultsTable;
-(CKAlertController *)alternateAddressesAlertController;
-(void)setAlternateAddressesAlertController:(CKAlertController *)arg1 ;
-(void)updateScreenTimePolicy;
-(void)_updateShowingSearch;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(double)composeRecipientViewOriginY;
-(BOOL)_shouldEnableScrolling;
-(void)_updateRecipientViewLayouts;
-(void)_dismissPeoplePicker;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)setIsDisambiguating:(BOOL)arg1 ;
-(void)sendUpdateRecipientForAtom:(id)arg1 ;
-(void)_showContactCardForRecipient:(id)arg1 sourceView:(id)arg2 ;
-(void)_showSearchField;
-(void)_showDetailsForRecipient:(id)arg1 canDelete:(BOOL)arg2 ;
-(BOOL)isDisambiguating;
-(void)_hideSearchField;
-(void)_showActionSheetForRecipient:(id)arg1 animated:(BOOL)arg2 ;
-(CKManualUpdater *)addressBookNotificationUpdater;
-(BOOL)preventAtomization;
-(void)handlePendingRecipient:(id)arg1 ;
-(id)preferredRecipientForPendingUnifiedContact:(id)arg1 ;
-(id)preferredRecipientForExistingConversationOfRecipients:(id)arg1 ;
-(id)preferredRecipientForNewContact:(id)arg1 ;
-(id)expandedRecipientsForGroupRecipient:(id)arg1 ;
-(char)serviceColorForRecipientAddresses:(id)arg1 ;
-(BOOL)hasEmailRecipientsInAddresses:(id)arg1 ;
-(id)conversationForRecipients:(id)arg1 ;
-(BOOL)lastSentMessageWasNotDeliveredForConversation:(id)arg1 ;
-(void)setForceMMS:(BOOL)arg1 ;
-(id)handleForRecipientNormalizedAddress:(id)arg1 ;
-(void)_refreshActionSheet;
-(id)preferredColorTypeForExistingConversation:(id)arg1 ;
-(BOOL)hasIDSResultsForAllRecipients:(id)arg1 ;
-(char)serviceTypeForRecipient:(id)arg1 ;
-(void)colorTypeForRecipient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)preferredRecipientForRecipients:(id)arg1 forServiceType:(char)arg2 ;
-(void)_showDetailsForGroup:(id)arg1 ;
-(void)_updateSearchListControllerPopOverSizing;
-(NSMutableDictionary *)recipientAvailabilities;
-(void)setRecentContactForPresentedCNCard:(CNComposeRecipient *)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2 ;
-(void)setSearchResultsHidden:(BOOL)arg1 ;
-(void)setToFieldPlaceholderLabel:(UILabel *)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)_canonicalRecipientAddresses;
-(BOOL)isPeoplePickerHidden;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)_availibilityForRecipient:(id)arg1 onService:(id)arg2 ;
-(BOOL)finishedComposingRecipients;
-(NSMutableDictionary *)recipientAvailibityTimers;
-(void)recipientAvailibilitiesDidUpdate;
-(void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(char)arg3 ;
-(void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(id)_toFieldCollapsedTextColor;
-(void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(BOOL)hasFailediMessageRecipients;
-(id)_alternateAddressesForRecipient:(id)arg1 ;
-(BOOL)hasTimedOutRecipients;
-(BOOL)hasPendingiMessageRecipients;
-(void)setRecipientAvailibityTimers:(NSMutableDictionary *)arg1 ;
-(void)_handleRecipientAvailabilityTimeout:(id)arg1 ;
-(id)_recipientCausingTooManyRecipientsError;
-(id)_alternateiMessagableAddressesForRecipient:(id)arg1 ;
-(void)presentAlternateAddressesAlertForRecipient:(id)arg1 ;
-(CNComposeRecipient *)recentContactForPresentedCNCard;
-(void)scrollSearchListControllerToTop:(BOOL)arg1 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)_configureSearchListControllerAsAPopover;
-(void)resetSearchResults;
-(CGPoint)scrollSearchListControllerToTopContentOffset;
-(id)handlesForScreenTimePolicyCheck;
-(id)recipientIsDuetSuggestion:(id)arg1 ;
-(double)collapsedHeight;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2 ;
-(double)additionalCatalystTopInset;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)composeRecipientViewTabPressed:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)setGameCenterPickerBlock:(id)arg1 ;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg1 ;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg1 ;
-(BOOL)_isToFieldPushedUp;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1 ;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1 ;
-(BOOL)expandSelectedSearchResultForComposeRecipientView:(id)arg1 ;
-(BOOL)collapseSelectedSearchResultForComposeRecipientView:(id)arg1 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1 ;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1 context:(unsigned long long)arg2 ;
-(UIEdgeInsets)layoutMarginsForComposeRecipientView:(id)arg1 ;
-(id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(BOOL)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)toFieldIsFirstResponder;
-(UILabel *)toFieldPlaceholderLabel;
-(void)autocompleteResultsController:(id)arg1 didExpandSelectedRecipient:(id)arg2 ;
-(void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1 ;
-(id)gameCenterPickerBlock;
-(void)autocompleteResultsController:(id)arg1 didCollapseSelectedRecipient:(id)arg2 ;
-(void)setToFieldScrollingView:(UIScrollView *)arg1 ;
-(void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(BOOL)didShowOneTimeErrorAlert;
-(void)setDidShowOneTimeErrorAlert:(BOOL)arg1 ;
-(void)setRecipientAvailabilities:(NSMutableDictionary *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CNContactPickerViewController *)contactPickerViewController;
-(void)setContactPickerViewController:(CNContactPickerViewController *)arg1 ;
-(void)dealloc;
@end

