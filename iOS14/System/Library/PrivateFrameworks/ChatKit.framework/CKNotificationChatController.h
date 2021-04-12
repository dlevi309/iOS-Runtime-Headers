/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCoreChatController.h>
#import <UIKit/UITextInputPayloadDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewInputDelegate.h>

@class NSExtensionContext, CKFullScreenBalloonViewControllerNotification, CKMessageEntryViewController, CKScheduledUpdater, CKRaiseGesture, STLockoutViewController, CKMessageEntryView, NSString;

@interface CKNotificationChatController : CKCoreChatController <UITextInputPayloadDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate> {

	BOOL _shouldAllowReplyFromLockScreen;
	BOOL _allowedByScreenTime;
	NSExtensionContext* _urlOpenContext;
	CKFullScreenBalloonViewControllerNotification* _notificationFullScreenBalloonController;
	CKMessageEntryViewController* _entryViewController;
	CKScheduledUpdater* _typingUpdater;
	CKRaiseGesture* _raiseGesture;
	STLockoutViewController* _lockoutViewController;

}

@property (nonatomic,retain) CKMessageEntryViewController * entryViewController;                                                          //@synthesize entryViewController=_entryViewController - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                                                          //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKRaiseGesture * raiseGesture;                                                                               //@synthesize raiseGesture=_raiseGesture - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowReplyFromLockScreen;                                                                         //@synthesize shouldAllowReplyFromLockScreen=_shouldAllowReplyFromLockScreen - In the implementation block
@property (assign,nonatomic) BOOL allowedByScreenTime;                                                                                    //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;                                                             //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
@property (nonatomic,readonly) CKMessageEntryView * entryView; 
@property (assign,nonatomic,__weak) NSExtensionContext * urlOpenContext;                                                                  //@synthesize urlOpenContext=_urlOpenContext - In the implementation block
@property (assign,nonatomic,__weak) id<CKNotificationChatControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) CKFullScreenBalloonViewControllerNotification * notificationFullScreenBalloonController;              //@synthesize notificationFullScreenBalloonController=_notificationFullScreenBalloonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)inputAccessoryView;
-(BOOL)becomeFirstResponder;
-(void)_updateEntryViewFrameIfNeeded:(BOOL)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(void)registerForTextInputPayloadHandling;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)_messageReceivedInCurrentTranscript:(id)arg1 ;
-(void)_allowedByScreenTimeChanged:(id)arg1 ;
-(void)_setupShouldShowReplyFromLockScreen;
-(CKFullScreenBalloonViewControllerNotification *)notificationFullScreenBalloonController;
-(void)setNotificationFullScreenBalloonController:(CKFullScreenBalloonViewControllerNotification *)arg1 ;
-(NSExtensionContext *)urlOpenContext;
-(Class)lockoutViewControllerClass;
-(BOOL)shouldAllowReplyFromLockScreen;
-(void)setShouldAllowReplyFromLockScreen:(BOOL)arg1 ;
-(id)launchURLForInputMode:(id)arg1 ;
-(void)setUrlOpenContext:(NSExtensionContext *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKMessageEntryView *)entryView;
-(BOOL)allowedByScreenTime;
-(void)updateTyping;
-(CKScheduledUpdater *)typingUpdater;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(void)setConversation:(id)arg1 ;
-(void)updateRaiseGesture;
-(double)balloonMaxWidth;
-(void)unregisterForTextInputPayloadHandling;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CKRaiseGesture *)raiseGesture;
-(void)setRaiseGesture:(CKRaiseGesture *)arg1 ;
-(void)_setConversationDeferredSetup;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)_raiseToListenSettingChanged:(id)arg1 ;
-(void)setEntryViewController:(CKMessageEntryViewController *)arg1 ;
-(CKMessageEntryViewController *)entryViewController;
-(BOOL)shouldShowEntryView;
-(BOOL)_shouldDisplayTextEntry;
-(double)_maxEntryViewHeight;
-(void)_setEntryViewFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(void)__raiseGestureRecognized:(id)arg1 ;
-(id)_menuTitleForChatItem:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1 ;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3 ;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(BOOL)inputAccessoryViewControllerEnabled;
-(BOOL)_deviceIsPasscodeLocked;
-(BOOL)_canShowWhileLocked;
-(BOOL)wantsReplyButton;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(id)progressBar;
-(BOOL)wantsWindowedPresentation;
-(BOOL)preserveModalPresentationStyle;
-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(double)messageEntryViewMaxHeight:(id)arg1 ;
-(void)setSendingMessage:(BOOL)arg1 ;
-(BOOL)messageEntryShouldHideCaret:(id)arg1 ;
-(long long)messageEntryViewHighLightInputButton:(id)arg1 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(id)inputAccessoryViewController;
-(void)handlePayload:(id)arg1 withPayloadId:(id)arg2 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)messageEntryView:(id)arg1 didInsertPluginPayload:(id)arg2 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryViewDidTakeFocus:(id)arg1 ;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(void)messageEntryViewPhotoButtonHit:(id)arg1 ;
-(void)messageEntryViewBrowserButtonHit:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(BOOL)pluginButtonsEnabled;
-(void)sendCurrentLocationMessage:(id)arg1 ;
-(void)dealloc;
@end

