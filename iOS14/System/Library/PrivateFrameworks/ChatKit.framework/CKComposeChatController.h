/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatController.h>
#import <libobjc.A.dylib/CKComposeRecipientSelectionControllerDelegate.h>
#import <libobjc.A.dylib/CKBusinessInfoViewDelegate.h>
#import <libobjc.A.dylib/CKMacToolbarItemProvider.h>

@protocol OS_dispatch_queue;
@class CKComposeRecipientSelectionController, NSArray, CKComposition, UINavigationController, UIBarButtonItem, CKComposeNavbarManager, NSString, NSDictionary, CKBusinessInfoView, OBWelcomeController, CKTranscriptMultilineLabelCell, NSObject, UIView;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate, CKMacToolbarItemProvider> {

	BOOL _ignoreKeyboardNotifications;
	BOOL _newComposeCancelled;
	BOOL _sendingViaCardUI;
	CKComposeRecipientSelectionController* _composeRecipientSelectionController;
	NSArray* _prepopulatedRecipients;
	CKComposition* _prepopulatedComposition;
	UINavigationController* _catalystComposeNavigationController;
	UIBarButtonItem* _composeCancelItem;
	CKComposeNavbarManager* _navbarManager;
	NSString* _lastAddressedHandle;
	NSString* _lastAddressedSIMID;
	NSDictionary* _bizIntent;
	CKBusinessInfoView* _businessInfoView;
	OBWelcomeController* _businessChatController;
	CKTranscriptMultilineLabelCell* _blackholeAlertView;
	unsigned long long _blackholeAlertStatus;
	NSObject*<OS_dispatch_queue> _blackholeAlertStatusQueue;
	/*^block*/id _deferredSendAnimationBlock;
	UIView* _recipientsVirtualToolbarItem;

}

@property (nonatomic,retain) CKComposeRecipientSelectionController * composeRecipientSelectionController;              //@synthesize composeRecipientSelectionController=_composeRecipientSelectionController - In the implementation block
@property (nonatomic,retain) NSArray * prepopulatedRecipients;                                                         //@synthesize prepopulatedRecipients=_prepopulatedRecipients - In the implementation block
@property (nonatomic,retain) CKComposition * prepopulatedComposition;                                                  //@synthesize prepopulatedComposition=_prepopulatedComposition - In the implementation block
@property (nonatomic,retain) UINavigationController * catalystComposeNavigationController;                             //@synthesize catalystComposeNavigationController=_catalystComposeNavigationController - In the implementation block
@property (assign,nonatomic) BOOL newComposeCancelled;                                                                 //@synthesize newComposeCancelled=_newComposeCancelled - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeCancelItem;                                                      //@synthesize composeCancelItem=_composeCancelItem - In the implementation block
@property (nonatomic,retain) CKComposeNavbarManager * navbarManager;                                                   //@synthesize navbarManager=_navbarManager - In the implementation block
@property (nonatomic,retain) NSString * lastAddressedHandle;                                                           //@synthesize lastAddressedHandle=_lastAddressedHandle - In the implementation block
@property (nonatomic,retain) NSString * lastAddressedSIMID;                                                            //@synthesize lastAddressedSIMID=_lastAddressedSIMID - In the implementation block
@property (nonatomic,retain) NSDictionary * bizIntent;                                                                 //@synthesize bizIntent=_bizIntent - In the implementation block
@property (nonatomic,retain) CKBusinessInfoView * businessInfoView;                                                    //@synthesize businessInfoView=_businessInfoView - In the implementation block
@property (nonatomic,retain) OBWelcomeController * businessChatController;                                             //@synthesize businessChatController=_businessChatController - In the implementation block
@property (nonatomic,retain) CKTranscriptMultilineLabelCell * blackholeAlertView;                                      //@synthesize blackholeAlertView=_blackholeAlertView - In the implementation block
@property (assign,nonatomic) BOOL sendingViaCardUI;                                                                    //@synthesize sendingViaCardUI=_sendingViaCardUI - In the implementation block
@property (nonatomic,copy) id deferredSendAnimationBlock;                                                              //@synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock - In the implementation block
@property (nonatomic,retain) UIView * recipientsVirtualToolbarItem;                                                    //@synthesize recipientsVirtualToolbarItem=_recipientsVirtualToolbarItem - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeChatControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (nonatomic,readonly) NSString * unatomizedRecipientText; 
@property (assign,nonatomic) BOOL ignoreKeyboardNotifications;                                                         //@synthesize ignoreKeyboardNotifications=_ignoreKeyboardNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)inputAccessoryView;
-(BOOL)becomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)setNavbarManager:(CKComposeNavbarManager *)arg1 ;
-(CKComposeNavbarManager *)navbarManager;
-(CKBusinessInfoView *)businessInfoView;
-(void)setBusinessInfoView:(CKBusinessInfoView *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)handleCancelAction:(id)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(NSDictionary *)bizIntent;
-(void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(BOOL)shouldUseMacRecipientsView;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(BOOL)shouldUseNavigationBarCanvasView;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(void)_showNicknameBannerIfNeeded;
-(void)_saveDraftState;
-(void)setBusinessInfoViewInfoIfNecessary;
-(UINavigationController *)catalystComposeNavigationController;
-(void)handleAddressBookChange:(id)arg1 ;
-(void)reloadEntryViewIfNeeded;
-(void)setCatalystComposeNavigationController:(UINavigationController *)arg1 ;
-(void)_updateBlackholeAlertView;
-(void)displayBusinessChatPrivacyIfNecessary;
-(void)layoutBusinessInfoViewIfNecessary;
-(CKTranscriptMultilineLabelCell *)blackholeAlertView;
-(void)setComposeRecipientSelectionController:(CKComposeRecipientSelectionController *)arg1 ;
-(NSArray *)prepopulatedRecipients;
-(CKComposition *)prepopulatedComposition;
-(void)setSendingViaCardUI:(BOOL)arg1 ;
-(BOOL)_shouldSetToFieldAsFirstResponder;
-(BOOL)_deviceHasMultipleActiveSubscriptions;
-(void)setLastAddressedHandle:(NSString *)arg1 ;
-(id)_updateSendingIdentity;
-(void)addBizIntentToConversation:(id)arg1 ;
-(void)_processBizIntentIfNeeded;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1 ;
-(void)_prepareForSendFromCardIfNecessaryAndSend:(/*^block*/id)arg1 ;
-(BOOL)_isWhitelistedBusinessRecipient;
-(id)_anisetteData;
-(BOOL)sendingViaCardUI;
-(BOOL)ignoreKeyboardNotifications;
-(UIBarButtonItem *)composeCancelItem;
-(void)cancelCompose;
-(void)setNewComposeCancelled:(BOOL)arg1 ;
-(BOOL)newComposeCancelled;
-(void)_triggerRecipientFinalization;
-(NSArray *)proposedRecipients;
-(void)_invalidateBlackholeAlertView;
-(BOOL)shouldForceToSMSForConversation:(id)arg1 forRecipient:(id)arg2 ;
-(void)setBlackholeAlertView:(CKTranscriptMultilineLabelCell *)arg1 ;
-(BOOL)_isNewBusinessConversation;
-(BOOL)privacyPageHasBeenDisplayed;
-(void)displayBusinessChatPrivacyAndSkipDefaultsCheck:(BOOL)arg1 ;
-(void)setPrivacyPageHasBeenDisplayed:(BOOL)arg1 ;
-(id)_businessChatController;
-(void)presentBusinessChatOnboarding;
-(void)setBusinessChatController:(OBWelcomeController *)arg1 ;
-(NSString *)unatomizedRecipientText;
-(void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 isiMessagable:(BOOL)arg3 ;
-(void)conversationLeft;
-(void)setComposeCancelItem:(UIBarButtonItem *)arg1 ;
-(void)recipientSelectionControllerDidLoadPillView;
-(id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3 ;
-(void)setIgnoreKeyboardNotifications:(BOOL)arg1 ;
-(OBWelcomeController *)businessChatController;
-(void)_updateNavigationButtons;
-(void)_setConversationDeferredSetup;
-(BOOL)isSafeToMarkAsRead;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(double)topInsetPadding;
-(id)virtualView;
-(BOOL)shouldShowEntryView;
-(BOOL)shouldRemoveMacCatalystEntryView;
-(BOOL)shouldInsertMacCatalystEntryView;
-(double)_entryViewTopInsetPadding;
-(void)setLastAddressedSIMID:(NSString *)arg1 ;
-(void)_passKitUIDismissed:(id)arg1 ;
-(void)setDeferredSendAnimationBlock:(id)arg1 ;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1 ;
-(id)deferredSendAnimationBlock;
-(void)setBizIntent:(NSDictionary *)arg1 ;
-(UIView *)recipientsVirtualToolbarItem;
-(void)viewLayoutMarginsDidChange;
-(BOOL)reparentToolbarItem:(id)arg1 ;
-(id)toolbarItemForIdentifier:(id)arg1 ;
-(BOOL)prefersBottomDividerHidden;
-(double)virtualToolbarPreferredHeight;
-(UIEdgeInsets)virtualToolbarContentInsets;
-(UIEdgeInsets)macToolbarInsets;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(id)outgoingComposeViewForSendAnimation;
-(void)restoreInputAfterSearchPresentation;
-(BOOL)shouldListParticipantsInTitle;
-(void)setRecipientsVirtualToolbarItem:(UIView *)arg1 ;
-(void)viewDidLoad;
-(id)chatForIMHandle:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)prepareForSuspend;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerTabPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientSelectionControllerShouldResignFirstResponder:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(NSString *)lastAddressedSIMID;
-(id)handleForRecipientNormalizedAddress:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(NSString *)lastAddressedHandle;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(id)inputAccessoryViewController;
-(CKComposeRecipientSelectionController *)composeRecipientSelectionController;
-(void)setPrepopulatedRecipients:(NSArray *)arg1 ;
-(void)setPrepopulatedComposition:(CKComposition *)arg1 ;
-(id)textViewOnscreenWithEntryView;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(BOOL)hasFailedRecipients;
-(BOOL)isComposingRecipient;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)completedOnboarding;
-(void)completedOnboardingWithCompletion:(/*^block*/id)arg1 ;
@end

