/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <libobjc.A.dylib/CKCoreChatControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CKChatControllerDelegate.h>
#import <libobjc.A.dylib/CKComposeChatControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerStoreSendDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertUtilitiesProtocol.h>
#import <libobjc.A.dylib/CKAlertSuppressionContextsProviding.h>

@protocol CKMessagesControllerDelegate, CKConversationListControllerProtocol, CKBrowserViewControllerProtocol;
@class NSSet, CKConversation, NSMutableArray, CKCoreChatController, CKDetailsNavigationController, CKNavigationController, UIViewController, CKOnboardingController, CKMacToolbarController, CKBlankViewController, CKAlertUtilities, CKInboxViewController, CKAlertController, NSString;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKAlertSuppressionContextsProviding> {

	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	unsigned _attachmentPreviewQosClass;
	BOOL _isInitialLoad;
	id<CKMessagesControllerDelegate> _messagesControllerDelegate;
	CKCoreChatController* _chatController;
	CKCoreChatController* _composeChatController;
	CKDetailsNavigationController* _detailsNavigationController;
	CKNavigationController* _composeChatNavigationController;
	/*^block*/id _deferredHandleURLBlock;
	UIViewController*<CKConversationListControllerProtocol> _conversationListController;
	CKOnboardingController* _onboardingController;
	CKNavigationController* _conversationListNavigationController;
	CKNavigationController* _chatNavigationController;
	CKMacToolbarController* _macToolbarController;
	CKBlankViewController* _blankViewController;
	UIViewController* _statusBarStyleViewController;
	UIViewController*<CKBrowserViewControllerProtocol> _prewarmedCameraBrowser;
	CKAlertUtilities* _alertUtilities;
	CKInboxViewController* _inboxViewController;
	CKAlertController* _currentSMSRelayPinAlert;
	NSMutableArray* _pendingSMSRelayPINPrompts;
	SCD_Struct_CK24 _columnResizeParams;

}

@property (nonatomic,retain) UIViewController*<CKConversationListControllerProtocol> conversationListController;              //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * chatController;                                                           //@synthesize chatController=_chatController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * composeChatController;                                                    //@synthesize composeChatController=_composeChatController - In the implementation block
@property (nonatomic,retain) CKConversation * currentConversation;                                                            //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                                   //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) CKNavigationController * conversationListNavigationController;                                   //@synthesize conversationListNavigationController=_conversationListNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * chatNavigationController;                                               //@synthesize chatNavigationController=_chatNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * composeChatNavigationController;                                        //@synthesize composeChatNavigationController=_composeChatNavigationController - In the implementation block
@property (nonatomic,retain) CKMacToolbarController * macToolbarController;                                                   //@synthesize macToolbarController=_macToolbarController - In the implementation block
@property (nonatomic,retain) CKBlankViewController * blankViewController;                                                     //@synthesize blankViewController=_blankViewController - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                                              //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (nonatomic,retain) UIViewController * statusBarStyleViewController;                                                 //@synthesize statusBarStyleViewController=_statusBarStyleViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> prewarmedCameraBrowser;                       //@synthesize prewarmedCameraBrowser=_prewarmedCameraBrowser - In the implementation block
@property (nonatomic,retain) CKAlertUtilities * alertUtilities;                                                               //@synthesize alertUtilities=_alertUtilities - In the implementation block
@property (nonatomic,retain) CKInboxViewController * inboxViewController;                                                     //@synthesize inboxViewController=_inboxViewController - In the implementation block
@property (assign,nonatomic,__weak) CKAlertController * currentSMSRelayPinAlert;                                              //@synthesize currentSMSRelayPinAlert=_currentSMSRelayPinAlert - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingSMSRelayPINPrompts;                                                      //@synthesize pendingSMSRelayPINPrompts=_pendingSMSRelayPINPrompts - In the implementation block
@property (assign,nonatomic) SCD_Struct_CK24 columnResizeParams;                                                              //@synthesize columnResizeParams=_columnResizeParams - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessagesControllerDelegate> messagesControllerDelegate;                              //@synthesize messagesControllerDelegate=_messagesControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) CKDetailsNavigationController * detailsNavigationController;                              //@synthesize detailsNavigationController=_detailsNavigationController - In the implementation block
@property (nonatomic,readonly) BOOL isShowingConversationListController; 
@property (nonatomic,copy) id deferredHandleURLBlock;                                                                         //@synthesize deferredHandleURLBlock=_deferredHandleURLBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * alertSuppressionContexts; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isInitialLoad;
-(BOOL)isCollapsed;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)init;
-(void)presentCKAlertController:(id)arg1 ;
-(void)didFinishCheckingMissingCarrierSetting;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)commitPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)keyCommandDeleteConversation:(id)arg1 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6 ;
-(CKMacToolbarController *)macToolbarController;
-(void)parentControllerDidBecomeActive;
-(UIViewController *)statusBarStyleViewController;
-(void)performResumeDeferredSetup;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_conversationLeft:(id)arg1 ;
-(void)_chatRegistryDidLoad:(id)arg1 ;
-(void)_appStateChange:(id)arg1 ;
-(void)performVisibleAppPluginIconPrefetch:(id)arg1 ;
-(CKNavigationController *)chatNavigationController;
-(CKBlankViewController *)blankViewController;
-(CKNavigationController *)conversationListNavigationController;
-(BOOL)_hasCurrentConversations;
-(void)updateConversationListNavigationControllerViewStack;
-(void)_setIsShowingNoSelectionUI:(BOOL)arg1 ;
-(BOOL)daemonIsConnected;
-(void)_updateAlertSuppressionContext;
-(void)presentOnboardingViewControllerIfNeeded;
-(void)_updateSidebarWidth;
-(void)setAlertUtilities:(CKAlertUtilities *)arg1 ;
-(CKAlertUtilities *)alertUtilities;
-(id)_sharedBalloonPluginManager;
-(void)showConversationList:(BOOL)arg1 ;
-(void)teardownCamera;
-(BOOL)_shouldShowSMSRelayPrompt;
-(void)_showSMSRelayPromptIfNeeded;
-(BOOL)_shouldShowSMSRelayPromptOnLaunch;
-(NSMutableArray *)pendingSMSRelayPINPrompts;
-(CKInboxViewController *)inboxViewController;
-(void)setPendingSMSRelayPINPrompts:(NSMutableArray *)arg1 ;
-(void)setCurrentSMSRelayPinAlert:(CKAlertController *)arg1 ;
-(void)_showNextSMSRelayPINPrompt;
-(CKAlertController *)currentSMSRelayPinAlert;
-(void)setComposeChatController:(CKCoreChatController *)arg1 ;
-(void)setComposeChatNavigationController:(CKNavigationController *)arg1 ;
-(void)setupBizNavBarForConversation:(id)arg1 ;
-(void)keyCommandFind:(id)arg1 ;
-(CKNavigationController *)composeChatNavigationController;
-(void)setCurrentConversation:(CKConversation *)arg1 ;
-(SCD_Struct_CK24)columnResizeParams;
-(void)setColumnResizeParams:(SCD_Struct_CK24)arg1 ;
-(void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(id<CKMessagesControllerDelegate>)messagesControllerDelegate;
-(void)setBlankViewController:(CKBlankViewController *)arg1 ;
-(void)_keyCommandChangeConversation:(BOOL)arg1 ;
-(BOOL)_isShowingModalChatController;
-(BOOL)isAnimatingMessageSend;
-(BOOL)_isShowingFullscreenController;
-(BOOL)_isShowingFullScreenAppViewController;
-(BOOL)isShowingConversationListController;
-(void)__updateAlertSuppressionContext;
-(double)_sanitizeProposedSidebarWidth:(double)arg1 ;
-(double)_macConvertLegacySidebarWidthToModernWidth:(double)arg1 ;
-(double)calculatedPrimaryColumnWidth_iOS;
-(void)persistSidebarWidth:(id)arg1 ;
-(void)executeDeferredHandleURLBlock;
-(BOOL)shouldShowImessageAlert;
-(void)notifyThatKeepMessagesSettingWasResetIfNeeded;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)cancelAndDestroyCompositionWithoutDismiss;
-(void)_checkPushToTranscriptTimingWithStartTime:(double)arg1 ;
-(void)executeDeferredTasks;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4 userInitiated:(BOOL)arg5 ;
-(void)_setEntryViewHidden:(BOOL)arg1 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 ;
-(BOOL)isShowingDirtyComposeModalView;
-(BOOL)resumeToConversation:(id)arg1 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4 ;
-(void)cleanUpBizNavBarForConversation:(id)arg1 ;
-(id)conversationListControllerIfInitialized;
-(void)performSearchForQuery:(id)arg1 ;
-(void)presentPrivacyView:(id)arg1 ;
-(void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)setDeferredHandleURLBlock:(id)arg1 ;
-(void)_smsRelayPINReceived:(id)arg1 ;
-(void)_showSMSRelayPromptOnLaunchIfNeeded;
-(void)_pinVerificationShouldDismiss:(id)arg1 ;
-(void)showInboxViewController:(BOOL)arg1 ;
-(id)_newCameraBrowser;
-(double)_splitViewController:(id)arg1 constrainPrimaryColumnWidthForResizeWidth:(double)arg2 ;
-(void)keyCommandOpenConversationInNewWindow:(id)arg1 ;
-(void)keyCommandNextConversation:(id)arg1 ;
-(void)keyCommandPreviousConversation:(id)arg1 ;
-(void)keyCommandSelectPinnedConversation:(id)arg1 ;
-(void)keyCommandSelectFirstActiveConversation;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)applicationWillResume:(id)arg1 ;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg1 ;
-(void)cancelNewMessageComposition;
-(BOOL)isDownTimeActiveForCurrentChat;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(void)showDetailViewController:(id)arg1 ;
-(void)_hideConversationListForIPadPPTTest;
-(BOOL)isShowingBlankChatController;
-(BOOL)currentCompositionHasContent;
-(BOOL)isShowingInboxViewController;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(void)presentOnboardingViewController:(id)arg1 ;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(BOOL)isShowingChatControllerWithUnsentText;
-(UIViewController*<CKConversationListControllerProtocol>)conversationListController;
-(void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2 ;
-(id)_fetchMeContactWithError:(id*)arg1 ;
-(void)prewarmCameraIfNecessary;
-(void)setMessagesControllerDelegate:(id<CKMessagesControllerDelegate>)arg1 ;
-(id)deferredHandleURLBlock;
-(void)setConversationListNavigationController:(CKNavigationController *)arg1 ;
-(void)setChatNavigationController:(CKNavigationController *)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)prewarmedCameraBrowser;
-(void)setPrewarmedCameraBrowser:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setInboxViewController:(CKInboxViewController *)arg1 ;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(void)startEditingPayload:(id)arg1 ;
-(id)dragControllerTranscriptDelegate;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(void)setMacToolbarController:(CKMacToolbarController *)arg1 ;
-(void)viewDidLoad;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(CKCoreChatController *)chatController;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)presentMacToolbarController;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)setChatController:(CKCoreChatController *)arg1 ;
-(void)setDetailsNavigationController:(CKDetailsNavigationController *)arg1 ;
-(CKDetailsNavigationController *)detailsNavigationController;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)dismissKeyboardIfUp;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg1 ;
-(id)navigationBarBackdropLayerGroupNameForChatController:(id)arg1 ;
-(long long)unreadCountForCurrentFilterModeForChatController:(id)arg1 ;
-(void)screenTimeOKPressedForChatController:(id)arg1 ;
-(void)chatController:(id)arg1 didDetachDetailsNavigationController:(id)arg2 ;
-(void)presentDetailsNavigationController:(id)arg1 ;
-(BOOL)hasDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)dismissAndReopenDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setStatusBarStyleViewController:(UIViewController *)arg1 ;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(void)setConversationListController:(UIViewController*<CKConversationListControllerProtocol>)arg1 ;
-(id)conversationList;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(CKConversation *)currentConversation;
-(BOOL)_shouldShowInboxView;
-(BOOL)isComposingMessage;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateCompositionInEntryViewWithComposition:(id)arg1 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)isShowingChatController;
-(CKCoreChatController *)composeChatController;
-(void)loadView;
-(void)conversationListWillBeginEditing:(BOOL)arg1 ;
-(void)showConversationInNewWindow:(id)arg1 ;
-(void)conversationListIsDeletingConversations:(id)arg1 ;
-(void)conversationListControllerTappedDeleteNewMessage:(id)arg1 ;
-(void)conversationListControllerWillPresentSearchResultsController;
-(void)conversationListControllerWillDismissSearchResultsController;
-(NSSet *)alertSuppressionContexts;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3 ;
-(void)composeChatControllerDidCancelComposition:(id)arg1 ;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)dismiss;
@end

