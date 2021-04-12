/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CKCoreChatControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKChatControllerDelegate.h>
#import <libobjc.A.dylib/CKComposeChatControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerStoreSendDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertUtilitiesProtocol.h>
#import <libobjc.A.dylib/CKAlertSuppressionContextsProviding.h>

@protocol CKMessagesControllerDelegate, CKBrowserViewControllerProtocol;
@class NSSet, CKConversation, NSMutableArray, CKCoreChatController, CKNavigationController, CKConversationListController, CKOnboardingController, CKViewController, UIViewController, CKAlertUtilities, CKInboxViewController, NSString;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKAlertSuppressionContextsProviding> {

	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	/*^block*/id _alertViewHandler;
	unsigned _attachmentPreviewQosClass;
	BOOL _isInitialLoad;
	id<CKMessagesControllerDelegate> _messagesControllerDelegate;
	CKCoreChatController* _chatController;
	CKCoreChatController* _composeChatController;
	CKNavigationController* _composeChatNavigationController;
	/*^block*/id _deferredHandleURLBlock;
	CKConversationListController* _conversationListController;
	CKOnboardingController* _onboardingController;
	CKNavigationController* _conversationListNavigationController;
	CKNavigationController* _chatNavigationController;
	CKViewController* _blankViewController;
	UIViewController* _statusBarStyleViewController;
	UIViewController*<CKBrowserViewControllerProtocol> _prewarmedCameraBrowser;
	CKAlertUtilities* _alertUtilities;
	CKInboxViewController* _inboxViewController;

}

@property (nonatomic,retain) CKConversationListController * conversationListController;                              //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * chatController;                                                  //@synthesize chatController=_chatController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * composeChatController;                                           //@synthesize composeChatController=_composeChatController - In the implementation block
@property (nonatomic,retain) CKConversation * currentConversation;                                                   //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                          //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) CKNavigationController * conversationListNavigationController;                          //@synthesize conversationListNavigationController=_conversationListNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * chatNavigationController;                                      //@synthesize chatNavigationController=_chatNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * composeChatNavigationController;                               //@synthesize composeChatNavigationController=_composeChatNavigationController - In the implementation block
@property (nonatomic,retain) CKViewController * blankViewController;                                                 //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                                      //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                                     //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (nonatomic,retain) UIViewController * statusBarStyleViewController;                                        //@synthesize statusBarStyleViewController=_statusBarStyleViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> prewarmedCameraBrowser;              //@synthesize prewarmedCameraBrowser=_prewarmedCameraBrowser - In the implementation block
@property (nonatomic,retain) CKAlertUtilities * alertUtilities;                                                      //@synthesize alertUtilities=_alertUtilities - In the implementation block
@property (nonatomic,retain) CKInboxViewController * inboxViewController;                                            //@synthesize inboxViewController=_inboxViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessagesControllerDelegate> messagesControllerDelegate;                     //@synthesize messagesControllerDelegate=_messagesControllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isShowingConversationListController; 
@property (nonatomic,copy) id deferredHandleURLBlock;                                                                //@synthesize deferredHandleURLBlock=_deferredHandleURLBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * alertSuppressionContexts; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(BOOL)becomeFirstResponder;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dismiss;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)isCollapsed;
-(long long)preferredStatusBarStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)isInitialLoad;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKCoreChatController *)chatController;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)setChatController:(CKCoreChatController *)arg1 ;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg1 ;
-(id)navigationBarBackdropLayerGroupNameForChatController:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)parentControllerDidBecomeActive;
-(UIViewController *)statusBarStyleViewController;
-(void)performResumeDeferredSetup;
-(void)startEditingPayload:(id)arg1 ;
-(BOOL)isAnimatingMessageSend;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(id)dragControllerTranscriptDelegate;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(id)conversationList;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(CKConversation *)currentConversation;
-(BOOL)isComposingMessage;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)isShowingChatController;
-(CKCoreChatController *)composeChatController;
-(void)conversationListWillBeginEditing:(BOOL)arg1 ;
-(void)conversationListIsDeletingConversations:(id)arg1 ;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)isShowingInboxViewController;
-(void)composeChatControllerDidCancelComposition:(id)arg1 ;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)presentCKAlertController:(id)arg1 ;
-(void)didFinishCheckingMissingCarrierSetting;
-(void)commitPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(CKConversationListController *)conversationListController;
-(void)setStatusBarStyleViewController:(UIViewController *)arg1 ;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(void)setConversationListController:(CKConversationListController *)arg1 ;
-(NSSet *)alertSuppressionContexts;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(void)_conversationLeft:(id)arg1 ;
-(void)_chatRegistryDidLoad:(id)arg1 ;
-(void)_appStateChange:(id)arg1 ;
-(void)keyCommandCompose:(id)arg1 ;
-(void)keyCommandNextConversation:(id)arg1 ;
-(void)keyCommandPreviousConversation:(id)arg1 ;
-(CKNavigationController *)conversationListNavigationController;
-(CKNavigationController *)chatNavigationController;
-(void)updateConversationListNavigationControllerViewStack;
-(BOOL)_hasCurrentConversations;
-(void)_setIsShowingNoSelectionUI:(BOOL)arg1 ;
-(void)_updateAlertSuppressionContext;
-(void)presentOnboardingViewControllerIfNeeded;
-(void)setAlertUtilities:(CKAlertUtilities *)arg1 ;
-(CKAlertUtilities *)alertUtilities;
-(void)showConversationList:(BOOL)arg1 ;
-(void)teardownCamera;
-(id)_sharedBalloonPluginManager;
-(void)setComposeChatController:(CKCoreChatController *)arg1 ;
-(void)setComposeChatNavigationController:(CKNavigationController *)arg1 ;
-(void)setupBizNavBarForConversation:(id)arg1 ;
-(CKNavigationController *)composeChatNavigationController;
-(void)setCurrentConversation:(CKConversation *)arg1 ;
-(CKViewController *)blankViewController;
-(void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(id<CKMessagesControllerDelegate>)messagesControllerDelegate;
-(CKInboxViewController *)inboxViewController;
-(void)_keyCommandChangeConversation:(BOOL)arg1 ;
-(BOOL)_isShowingFullscreenController;
-(BOOL)_isShowingModalChatController;
-(BOOL)_isShowingFullScreenAppViewController;
-(BOOL)isShowingConversationListController;
-(void)__updateAlertSuppressionContext;
-(void)executeDeferredHandleURLBlock;
-(void)notifyThatKeepMessagesSettingWasResetIfNeeded;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6 ;
-(void)cancelAndDestroyCompositionWithoutDismiss;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4 userInitiated:(BOOL)arg5 ;
-(void)_checkPushToTranscriptTimingWithStartTime:(double)arg1 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4 ;
-(void)cleanUpBizNavBarForConversation:(id)arg1 ;
-(BOOL)isShowingDirtyComposeModalView;
-(BOOL)resumeToConversation:(id)arg1 ;
-(id)alertViewHandler;
-(void)setAlertViewHandler:(id)arg1 ;
-(void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)_setEntryViewHidden:(BOOL)arg1 ;
-(void)executeDeferredTasks;
-(void)dismissKeyboadIfUp;
-(void)performSearchForQuery:(id)arg1 ;
-(void)setDeferredHandleURLBlock:(id)arg1 ;
-(void)showInboxViewController:(BOOL)arg1 ;
-(void)keyCommandDeleteConversation:(id)arg1 ;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg1 ;
-(void)cancelNewMessageComposition;
-(BOOL)isDownTimeActiveForCurrentChat;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(void)_hideConversationListForIPadPPTTest;
-(BOOL)isShowingBlankChatController;
-(BOOL)currentCompositionHasContent;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(BOOL)isShowingChatControllerWithUnsentText;
-(void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2 ;
-(id)_newCameraBrowser;
-(void)prewarmCameraIfNecessary;
-(void)setMessagesControllerDelegate:(id<CKMessagesControllerDelegate>)arg1 ;
-(id)deferredHandleURLBlock;
-(void)setConversationListNavigationController:(CKNavigationController *)arg1 ;
-(void)setChatNavigationController:(CKNavigationController *)arg1 ;
-(void)setBlankViewController:(CKViewController *)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)prewarmedCameraBrowser;
-(void)setPrewarmedCameraBrowser:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setInboxViewController:(CKInboxViewController *)arg1 ;
@end

