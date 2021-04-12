/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatController.h>
#import <libobjc.A.dylib/CKComposeRecipientSelectionControllerDelegate.h>
#import <libobjc.A.dylib/CKBusinessInfoViewDelegate.h>

@class CKComposeRecipientSelectionController, NSArray, CKComposition, UIBarButtonItem, CKComposeNavbarManager, NSDictionary, CKBusinessInfoView, OBWelcomeController, CKTranscriptMultilineLabelCell, NSString;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate> {

	BOOL _ignoreKeyboardNotifications;
	BOOL _newComposeCancelled;
	BOOL _sendingViaCardUI;
	CKComposeRecipientSelectionController* _composeRecipientSelectionController;
	NSArray* _prepopulatedRecipients;
	CKComposition* _prepopulatedComposition;
	UIBarButtonItem* _composeCancelItem;
	CKComposeNavbarManager* _navbarManager;
	NSDictionary* _bizIntent;
	CKBusinessInfoView* _businessInfoView;
	OBWelcomeController* _businessChatController;
	CKTranscriptMultilineLabelCell* _blackholeAlertView;
	/*^block*/id _deferredSendAnimationBlock;

}

@property (nonatomic,retain) CKComposeRecipientSelectionController * composeRecipientSelectionController;              //@synthesize composeRecipientSelectionController=_composeRecipientSelectionController - In the implementation block
@property (nonatomic,retain) NSArray * prepopulatedRecipients;                                                         //@synthesize prepopulatedRecipients=_prepopulatedRecipients - In the implementation block
@property (nonatomic,retain) CKComposition * prepopulatedComposition;                                                  //@synthesize prepopulatedComposition=_prepopulatedComposition - In the implementation block
@property (assign,nonatomic) BOOL newComposeCancelled;                                                                 //@synthesize newComposeCancelled=_newComposeCancelled - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeCancelItem;                                                      //@synthesize composeCancelItem=_composeCancelItem - In the implementation block
@property (nonatomic,retain) CKComposeNavbarManager * navbarManager;                                                   //@synthesize navbarManager=_navbarManager - In the implementation block
@property (nonatomic,retain) NSDictionary * bizIntent;                                                                 //@synthesize bizIntent=_bizIntent - In the implementation block
@property (nonatomic,retain) CKBusinessInfoView * businessInfoView;                                                    //@synthesize businessInfoView=_businessInfoView - In the implementation block
@property (nonatomic,retain) OBWelcomeController * businessChatController;                                             //@synthesize businessChatController=_businessChatController - In the implementation block
@property (nonatomic,retain) CKTranscriptMultilineLabelCell * blackholeAlertView;                                      //@synthesize blackholeAlertView=_blackholeAlertView - In the implementation block
@property (assign,nonatomic) BOOL sendingViaCardUI;                                                                    //@synthesize sendingViaCardUI=_sendingViaCardUI - In the implementation block
@property (nonatomic,copy) id deferredSendAnimationBlock;                                                              //@synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeChatControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (nonatomic,readonly) NSString * unatomizedRecipientText; 
@property (assign,nonatomic) BOOL ignoreKeyboardNotifications;                                                         //@synthesize ignoreKeyboardNotifications=_ignoreKeyboardNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)inputAccessoryView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(id)inputAccessoryViewController;
-(NSDictionary *)bizIntent;
-(void)setBizIntent:(NSDictionary *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)prepareForSuspend;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1 ;
-(id)handleForRecipientNormalizedAddress:(id)arg1 ;
-(id)chatForIMHandle:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(id)textViewOnscreenWithEntryView;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(BOOL)hasFailedRecipients;
-(BOOL)isComposingRecipient;
-(void)sendComposition:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(BOOL)shouldUseNavigationBarCanvasView;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(void)_showNicknameBannerIfNeeded;
-(void)_saveDraftState;
-(void)reloadEntryViewIfNeeded;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1 ;
-(void)_updateNavigationButtons;
-(void)_setConversationDeferredSetup;
-(BOOL)isSafeToMarkAsRead;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(double)topInsetPadding;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowEntryView;
-(double)_entryViewTopInsetPadding;
-(void)_passKitUIDismissed:(id)arg1 ;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1 ;
-(void)setDeferredSendAnimationBlock:(id)arg1 ;
-(id)deferredSendAnimationBlock;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(id)outgoingComposeViewForSendAnimation;
-(CKComposeRecipientSelectionController *)composeRecipientSelectionController;
-(void)setPrepopulatedRecipients:(NSArray *)arg1 ;
-(void)setPrepopulatedComposition:(CKComposition *)arg1 ;
-(CKBusinessInfoView *)businessInfoView;
-(void)setBusinessInfoView:(CKBusinessInfoView *)arg1 ;
-(void)handleCancelAction:(id)arg1 ;
-(void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(void)completedOnboarding;
-(void)completedOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(void)setNavbarManager:(CKComposeNavbarManager *)arg1 ;
-(CKComposeNavbarManager *)navbarManager;
-(void)keyCommandCancel:(id)arg1 ;
-(void)setBusinessInfoViewInfoIfNecessary;
-(void)handleAddressBookChange:(id)arg1 ;
-(void)displayBusinessChatPrivacyIfNecessary;
-(void)_updateBlackholeAlertView;
-(void)layoutBusinessInfoViewIfNecessary;
-(CKTranscriptMultilineLabelCell *)blackholeAlertView;
-(void)setComposeRecipientSelectionController:(CKComposeRecipientSelectionController *)arg1 ;
-(NSArray *)prepopulatedRecipients;
-(CKComposition *)prepopulatedComposition;
-(BOOL)_shouldSetToFieldAsFirstResponder;
-(id)selectedContextLastAddressHandleOrDefaultSettingsHandle;
-(void)addBizIntentToConversation:(id)arg1 ;
-(void)_prepareForSendFromCardIfNecessaryAndSend:(/*^block*/id)arg1 ;
-(void)setSendingViaCardUI:(BOOL)arg1 ;
-(void)_processBizIntentIfNeeded;
-(BOOL)_isWhitelistedBusinessRecipient;
-(id)_anisetteData;
-(BOOL)ignoreKeyboardNotifications;
-(BOOL)sendingViaCardUI;
-(UIBarButtonItem *)composeCancelItem;
-(void)cancelCompose;
-(void)setNewComposeCancelled:(BOOL)arg1 ;
-(BOOL)newComposeCancelled;
-(void)_triggerRecipientFinalization;
-(BOOL)shouldForceToSMSForConversation:(id)arg1 forRecipient:(id)arg2 ;
-(NSArray *)proposedRecipients;
-(void)setBlackholeAlertView:(CKTranscriptMultilineLabelCell *)arg1 ;
-(BOOL)_isNewBusinessConversation;
-(void)displayBusinessChatPrivacyAndSkipDefaultsCheck:(BOOL)arg1 ;
-(void)setPrivacyPageHasBeenDisplayed:(BOOL)arg1 ;
-(BOOL)privacyPageHasBeenDisplayed;
-(void)presentBusinessChatOnboarding;
-(id)_businessChatController;
-(OBWelcomeController *)businessChatController;
-(void)setBusinessChatController:(OBWelcomeController *)arg1 ;
-(void)aboutLinkTapped;
-(void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 isiMessagable:(BOOL)arg3 ;
-(void)recipientSelectionControllerDidLoadPillView;
-(id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3 ;
-(NSString *)unatomizedRecipientText;
-(void)conversationLeft;
-(void)setIgnoreKeyboardNotifications:(BOOL)arg1 ;
-(void)setComposeCancelItem:(UIBarButtonItem *)arg1 ;
@end

