/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/IMChatSendProgressDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol CKCoreChatControllerDelegate, CKCoreTranscriptControllerProtocol;
@class CKConversation, CKViewController, CKScheduledUpdater, UIProgressView, CKFullScreenBalloonViewController, STLockoutViewController, CKMacToolbarController, IMChat, CKTranscriptCollectionView, NSString;

@interface CKCoreChatController : CKScrollViewController <IMChatSendProgressDelegate, IMSystemMonitorListener> {

	BOOL _sendingMessage;
	BOOL _viewIsVisible;
	BOOL _transitionedFromComposing;
	BOOL _userInitiatedTranscriptPush;
	BOOL _initialLayoutComplete;
	BOOL _ignoreLastBalloonVisibleInMarkAsReadCheck;
	BOOL _disableAnimationsUnderTest;
	BOOL _isShowingLockoutView;
	id<CKCoreChatControllerDelegate> _delegate;
	CKConversation* _conversation;
	CKViewController*<CKCoreTranscriptControllerProtocol> _collectionViewController;
	CKScheduledUpdater* _refreshServiceForSendingUpdater;
	UIProgressView* _progressBar;
	double _sendProgress;
	unsigned long long _sendProgressSendCount;
	unsigned long long _sendProgressTotalCount;
	CKFullScreenBalloonViewController* _fullScreenBalloonViewController;
	long long _acknowledgmentToSend;
	/*^block*/id _overrideScrollBlock;
	STLockoutViewController* _lockoutViewController;
	CKMacToolbarController* _macToolbarController;

}

@property (nonatomic,retain) CKConversation * conversation;                                                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,retain) CKViewController*<CKCoreTranscriptControllerProtocol> collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) BOOL initialLayoutComplete;                                                                  //@synthesize initialLayoutComplete=_initialLayoutComplete - In the implementation block
@property (nonatomic,readonly) double balloonMaxWidth; 
@property (nonatomic,readonly) double gradientBottomPlaceholderHeight; 
@property (assign,nonatomic) BOOL ignoreLastBalloonVisibleInMarkAsReadCheck;                                              //@synthesize ignoreLastBalloonVisibleInMarkAsReadCheck=_ignoreLastBalloonVisibleInMarkAsReadCheck - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * refreshServiceForSendingUpdater;                                        //@synthesize refreshServiceForSendingUpdater=_refreshServiceForSendingUpdater - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                                                                //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                                                 //@synthesize sendingMessage=_sendingMessage - In the implementation block
@property (assign,nonatomic) double sendProgress;                                                                         //@synthesize sendProgress=_sendProgress - In the implementation block
@property (assign,nonatomic) unsigned long long sendProgressSendCount;                                                    //@synthesize sendProgressSendCount=_sendProgressSendCount - In the implementation block
@property (assign,nonatomic) unsigned long long sendProgressTotalCount;                                                   //@synthesize sendProgressTotalCount=_sendProgressTotalCount - In the implementation block
@property (nonatomic,retain) CKFullScreenBalloonViewController * fullScreenBalloonViewController;                         //@synthesize fullScreenBalloonViewController=_fullScreenBalloonViewController - In the implementation block
@property (assign,nonatomic) long long acknowledgmentToSend;                                                              //@synthesize acknowledgmentToSend=_acknowledgmentToSend - In the implementation block
@property (assign,nonatomic) BOOL disableAnimationsUnderTest;                                                             //@synthesize disableAnimationsUnderTest=_disableAnimationsUnderTest - In the implementation block
@property (nonatomic,copy) id overrideScrollBlock;                                                                        //@synthesize overrideScrollBlock=_overrideScrollBlock - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;                                             //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
@property (assign,nonatomic) BOOL isShowingLockoutView;                                                                   //@synthesize isShowingLockoutView=_isShowingLockoutView - In the implementation block
@property (nonatomic,retain) CKMacToolbarController * macToolbarController;                                               //@synthesize macToolbarController=_macToolbarController - In the implementation block
@property (assign,nonatomic,__weak) id<CKCoreChatControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKTranscriptCollectionView * collectionView; 
@property (nonatomic,readonly) BOOL shouldDismissAfterSend; 
@property (assign,nonatomic) BOOL viewIsVisible;                                                                          //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL transitionedFromComposing;                                                              //@synthesize transitionedFromComposing=_transitionedFromComposing - In the implementation block
@property (assign,nonatomic) BOOL userInitiatedTranscriptPush;                                                            //@synthesize userInitiatedTranscriptPush=_userInitiatedTranscriptPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)transcriptControllerClass;
+(Class)_gradientReferenceViewClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(IMChat *)chat;
-(void)sendComposition:(id)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1 ;
-(BOOL)viewIsVisible;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1 ;
-(id)traitCollectionForTranscriptCollectionViewController:(id)arg1 ;
-(double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2 ;
-(id<CKCoreChatControllerDelegate>)delegate;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapReplyCountStatusButtonForChatItem:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(CKTranscriptCollectionView *)collectionView;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(BOOL)isShowingLockoutView;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(void)setIsShowingLockoutView:(BOOL)arg1 ;
-(id)_handleIDsForCurrentConversation;
-(BOOL)initialLayoutComplete;
-(CKMacToolbarController *)macToolbarController;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(unsigned long long)sendProgressTotalCount;
-(BOOL)userInitiatedTranscriptPush;
-(double)balloonMaxWidth;
-(void)parentControllerDidBecomeActive;
-(void)_performResume;
-(CKFullScreenBalloonViewController *)fullScreenBalloonViewController;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateNavigationButtons;
-(void)_willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)_didSendCompositionInConversation:(id)arg1 ;
-(void)_setConversationDeferredSetup;
-(id)_threadChatItemForReplyCountChatItem:(id)arg1 chatItems:(id)arg2 ;
-(void)_updateForNewPreferredService;
-(BOOL)isSafeToMarkAsRead;
-(void)_markAsReadIfNecessary;
-(void)registerNotificationsForConversation:(id)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg1 ;
-(void)setupScrollingForKeyboardInteraction;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(CGRect)fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(CGRect)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1 ;
-(void)setDelegate:(id<CKCoreChatControllerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(CGRect)gradientFrameWithInsets:(UIEdgeInsets)arg1 ;
-(void)dismissInlineReplyController:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1 ;
-(BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg1 ;
-(id)gradientReferenceView;
-(id)toolbarItemForIdentifier:(id)arg1 ;
-(double)sendProgress;
-(void)registerNotifications;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(void)setupStateForLaunchURL:(id)arg1 ;
-(double)gradientBottomPlaceholderHeight;
-(BOOL)shouldListParticipantsInTitle;
-(CKScheduledUpdater *)refreshServiceForSendingUpdater;
-(void)_refreshServiceForSending;
-(void)setRefreshServiceForSendingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_transferFinishedNotification:(id)arg1 ;
-(void)_transferRestoredNotification:(id)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)setMacToolbarController:(CKMacToolbarController *)arg1 ;
-(void)_registerSendProgressDelegate;
-(void)_deregisterSendProgressDelegate;
-(BOOL)_shouldAllowReply;
-(void)setInitialLayoutComplete:(BOOL)arg1 ;
-(BOOL)_shouldAllowReplyFromLockScreen;
-(BOOL)_conversationHasReplyEnabled;
-(id)overrideScrollBlock;
-(BOOL)_deviceIsPasscodeLocked;
-(BOOL)conversationAllowedByScreenTime;
-(void)_removeExistingCollectionViewController;
-(void)refreshServiceForSending;
-(void)setCollectionViewController:(CKViewController*<CKCoreTranscriptControllerProtocol>)arg1 ;
-(void)_handleTapEventForBalloonView:(id)arg1 atIndexPath:(id)arg2 showActionMenu:(BOOL)arg3 ;
-(void)_refreshActiveChat:(id)arg1 ;
-(void)significantTimeChange;
-(void)_handleShowInlineReplyShortcut:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setIgnoreLastBalloonVisibleInMarkAsReadCheck:(BOOL)arg1 ;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(BOOL)ignoreLastBalloonVisibleInMarkAsReadCheck;
-(BOOL)disableAnimationsUnderTest;
-(void)_preferredServiceChangedNotification:(id)arg1 ;
-(void)_downgradeStateChangedNotification:(id)arg1 ;
-(void)_increaseContrastDidChangeNotification:(id)arg1 ;
-(void)preferredSendingServiceChanged;
-(void)_chatRegistryDidReloadNotification:(id)arg1 ;
-(void)setFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 ;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(BOOL)isInline;
-(void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(void)keyboardWillHideViaGesture;
-(void)setUserInitiatedTranscriptPush:(BOOL)arg1 ;
-(void)setSendProgress:(double)arg1 ;
-(unsigned long long)sendProgressSendCount;
-(void)setSendProgressSendCount:(unsigned long long)arg1 ;
-(void)setSendProgressTotalCount:(unsigned long long)arg1 ;
-(void)setDisableAnimationsUnderTest:(BOOL)arg1 ;
-(void)setOverrideScrollBlock:(id)arg1 ;
-(void)systemApplicationDidResume;
-(void)viewDidAppearDeferredSetup;
-(void)showFullScreenAcknowledgmentPickerIfNeededForBalloonAtIndexPath:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(CKViewController*<CKCoreTranscriptControllerProtocol>)collectionViewController;
-(long long)acknowledgmentToSend;
-(void)setAcknowledgmentToSend:(long long)arg1 ;
-(void)showInlineReplyControllerForChatItem:(id)arg1 presentKeyboard:(BOOL)arg2 ;
-(BOOL)wantsReplyButton;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(UIProgressView *)progressBar;
-(id)textInputContextIdentifier;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)presentMacToolbarController;
-(void)prepareForSuspend;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)loadView;
-(BOOL)transitionedFromComposing;
-(void)setTransitionedFromComposing:(BOOL)arg1 ;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSendingMessage;
-(CGRect)_initialFrameForCollectionView;
-(id)scrollView;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

