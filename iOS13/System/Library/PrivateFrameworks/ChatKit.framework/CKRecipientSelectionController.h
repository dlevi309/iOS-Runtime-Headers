/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CKComposeRecipientViewDelegate.h>
#import <libobjc.A.dylib/CKRecipientSearchListControllerDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteGroupDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol CKRecipientSelectionControllerDelegate;
@class CNContactStore, CKPendingConversation, CKComposeRecipientView, UIView, CKRecipientSearchListController, STConversationContext, UIScrollView, UILabel, CNContactPickerViewController, CNComposeRecipient, CKManualUpdater, NSMutableDictionary, NSString;

@interface CKRecipientSelectionController : CKViewController <CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate> {

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
@property (nonatomic,retain) STConversationContext * currentConversationContext;                       //@synthesize currentConversationContext=_currentConversationContext - In the implementation block
@property (assign,nonatomic) BOOL allowedByScreenTime;                                                 //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
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
-(id)init;
-(void)dealloc;
-(id<CKRecipientSelectionControllerDelegate>)delegate;
-(void)setDelegate:(id<CKRecipientSelectionControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(id)recipients;
-(CNContactStore *)contactStore;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)isEditable;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(CKPendingConversation *)conversation;
-(void)setConversation:(CKPendingConversation *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(CNContactPickerViewController *)contactPickerViewController;
-(void)setContactPickerViewController:(CNContactPickerViewController *)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2 ;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)allowedByScreenTime;
-(void)viewDidAppearDeferredSetup;
-(void)searchListControllerDidScroll:(id)arg1 ;
-(BOOL)isSearchResultsHidden;
-(void)searchListControllerDidFinishSearch:(id)arg1 ;
-(void)searchListController:(id)arg1 destinationsUpdated:(id)arg2 ;
-(long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2 ;
-(void)invalidateOutstandingIDStatusRequests;
-(void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
-(CKComposeRecipientView *)toField;
-(CKRecipientSearchListController *)searchListController;
-(UIScrollView *)toFieldScrollingView;
-(UIEdgeInsets)_navigationBarInsets;
-(UIView *)toFieldContainerView;
-(void)setPeoplePickerHidden:(BOOL)arg1 ;
-(void)_handleRecipientViewChanged:(id)arg1 ;
-(void)_handleIDSResultsWhenSearchTableIsHidden:(id)arg1 ;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_handleAddressBookPartialChangedNotification:(id)arg1 ;
-(void)_updateAddressBookProperties;
-(void)_updateToFieldRecipientsData;
-(void)setAddressBookNotificationUpdater:(CKManualUpdater *)arg1 ;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)setSearchListController:(CKRecipientSearchListController *)arg1 ;
-(void)_updateToField;
-(void)_resetSearchResultsInsets;
-(void)setPreventAtomization:(BOOL)arg1 ;
-(STConversationContext *)currentConversationContext;
-(void)setCurrentConversationContext:(STConversationContext *)arg1 ;
-(void)recipientSelectionControllerDidChange;
-(void)_adjustToFieldPositionIfNecessary;
-(void)_updateSearchResultsTable;
-(BOOL)isGameCenterRecipient:(id)arg1 ;
-(void)updateScreenTimePolicy;
-(void)_updateShowingSearch;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_updateRecipientViewLayouts;
-(BOOL)_systemUnderLock;
-(void)_dismissPeoplePicker;
-(void)sendUpdateRecipientForAtom:(id)arg1 ;
-(void)setIsDisambiguating:(BOOL)arg1 ;
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
-(BOOL)forceMMS;
-(id)handleForRecipientNormalizedAddress:(id)arg1 ;
-(id)chatForIMHandle:(id)arg1 ;
-(id)preferredColorTypeForExistingConversation:(id)arg1 ;
-(BOOL)hasIDSResultsForAllRecipients:(id)arg1 ;
-(void)colorTypeForRecipient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)preferredRecipientForRecipients:(id)arg1 forServiceType:(char)arg2 ;
-(char)serviceTypeForRecipient:(id)arg1 ;
-(void)_showDetailsForGroup:(id)arg1 ;
-(NSMutableDictionary *)recipientAvailabilities;
-(void)setRecentContactForPresentedCNCard:(CNComposeRecipient *)arg1 ;
-(void)_removeRecent;
-(void)setToFieldPlaceholderLabel:(UILabel *)arg1 ;
-(id)_canonicalRecipientAddresses;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSearchResultsHidden:(BOOL)arg1 ;
-(BOOL)isPeoplePickerHidden;
-(char)_availibilityForRecipient:(id)arg1 onService:(id)arg2 ;
-(BOOL)finishedComposingRecipients;
-(NSMutableDictionary *)recipientAvailibityTimers;
-(void)recipientAvailibilitiesDidUpdate;
-(void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(char)arg3 ;
-(void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(id)_toFieldCollapsedTextColor;
-(void)_refreshActionSheet;
-(void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(id)_alternateAddressesForRecipient:(id)arg1 ;
-(BOOL)hasFailediMessageRecipients;
-(BOOL)hasTimedOutRecipients;
-(BOOL)hasPendingiMessageRecipients;
-(void)setRecipientAvailibityTimers:(NSMutableDictionary *)arg1 ;
-(void)_handleRecipientAvailabilityTimeout:(id)arg1 ;
-(id)_recipientCausingTooManyRecipientsError;
-(id)_alternateiMessagableAddressesForRecipient:(id)arg1 ;
-(CNComposeRecipient *)recentContactForPresentedCNCard;
-(void)scrollSearchListControllerToTop:(BOOL)arg1 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(CGPoint)scrollSearchListControllerToTopContentOffset;
-(id)handlesForScreenTimePolicyCheck;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(UIEdgeInsets)layoutMarginsForComposeRecipientView:(id)arg1 ;
-(void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(id)recipientIsDuetSuggestion:(id)arg1 ;
-(void)setGameCenterPickerBlock:(id)arg1 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(BOOL)toFieldIsFirstResponder;
-(BOOL)hasUnreachableEmergencyRecipient;
-(double)collapsedHeight;
-(BOOL)_isToFieldPushedUp;
-(void)setToField:(CKComposeRecipientView *)arg1 ;
-(void)setForceMMS:(BOOL)arg1 ;
-(id)gameCenterPickerBlock;
-(void)setToFieldScrollingView:(UIScrollView *)arg1 ;
-(UILabel *)toFieldPlaceholderLabel;
-(BOOL)didShowOneTimeErrorAlert;
-(void)setDidShowOneTimeErrorAlert:(BOOL)arg1 ;
-(void)setRecipientAvailabilities:(NSMutableDictionary *)arg1 ;
@end

