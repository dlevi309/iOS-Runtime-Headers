/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerDelegate.h>

@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate, CKBrowserViewControllerProtocol;
@class CKFullScreenAppViewController, UIViewController, CKConversation, UIWindow, UINavigationController, NSString;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate> {

	BOOL _expanded;
	BOOL _underTest;
	id<CKBrowserTransitionCoordinatorDelegate> _delegate;
	long long _currentConsumer;
	CKFullScreenAppViewController* _fullscreenViewController;
	UIViewController* _presentingViewController;
	CKConversation* _conversation;
	id<CKBrowserViewControllerSendDelegate> _sendDelegate;
	UIViewController*<CKBrowserViewControllerProtocol> _currentBrowser;
	UIWindow* _appWindow;
	UIWindow* _previousKeyWindow;
	UIWindow* _preModalKeyWindow;
	long long _lastTransitionReason;
	UIWindow* _modalAppWindow;
	UINavigationController* _presentedModalBrowserNavigationController;
	UIViewController*<CKBrowserViewControllerProtocol> _currentModalBrowser;
	CGRect _cachedCompactFrame;

}

@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> currentBrowser;                   //@synthesize currentBrowser=_currentBrowser - In the implementation block
@property (assign,nonatomic) long long currentConsumer;                                                           //@synthesize currentConsumer=_currentConsumer - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                     //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) CKFullScreenAppViewController * fullscreenViewController;                            //@synthesize fullscreenViewController=_fullscreenViewController - In the implementation block
@property (nonatomic,retain) UIWindow * appWindow;                                                                //@synthesize appWindow=_appWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * previousKeyWindow;                                                 //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * preModalKeyWindow;                                                 //@synthesize preModalKeyWindow=_preModalKeyWindow - In the implementation block
@property (assign,nonatomic) CGRect cachedCompactFrame;                                                           //@synthesize cachedCompactFrame=_cachedCompactFrame - In the implementation block
@property (assign,nonatomic) long long lastTransitionReason;                                                      //@synthesize lastTransitionReason=_lastTransitionReason - In the implementation block
@property (nonatomic,retain) UIWindow * modalAppWindow;                                                           //@synthesize modalAppWindow=_modalAppWindow - In the implementation block
@property (nonatomic,retain) UINavigationController * presentedModalBrowserNavigationController;                  //@synthesize presentedModalBrowserNavigationController=_presentedModalBrowserNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> currentModalBrowser;              //@synthesize currentModalBrowser=_currentModalBrowser - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserTransitionCoordinatorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPresentingFullScreenModal,nonatomic,readonly) BOOL presentingFullScreenModal; 
@property (nonatomic,readonly) BOOL wasCurrentBrowserExpanded; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                  //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                       //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserViewControllerSendDelegate> sendDelegate;                         //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (assign,nonatomic) BOOL underTest;                                                                      //@synthesize underTest=_underTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(BOOL)shouldAlwaysShowAppTitle;
-(double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1 ;
-(void)fullscreenAppViewControllerWantsToCollapse:(id)arg1 ;
-(void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2 ;
-(BOOL)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1 ;
-(id<CKBrowserTransitionCoordinatorDelegate>)delegate;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(id<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<CKBrowserViewControllerSendDelegate>)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<CKBrowserTransitionCoordinatorDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(UIWindow *)appWindow;
-(BOOL)underTest;
-(void)dismissCurrentFullScreenModalAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissCurrentFullscreenBrowserAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)currentConsumer;
-(BOOL)isPresentingFullScreenModal;
-(CKFullScreenAppViewController *)fullscreenViewController;
-(id)appIconOverride;
-(id)appTitleOverride;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1 ;
-(void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3 ;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)currentBrowser;
-(id)transitionViewController;
-(BOOL)usePresentationWindowDuringTransition;
-(BOOL)shouldPresentModalFromPresentingViewController;
-(UIWindow *)modalAppWindow;
-(void)setCurrentBrowser:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setCachedCompactFrame:(CGRect)arg1 ;
-(void)setCurrentConsumer:(long long)arg1 ;
-(id)requestOwnershipOfBrowserForConsumer:(long long)arg1 ;
-(void)setAppWindow:(UIWindow *)arg1 ;
-(void)setUnderTest:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 withReason:(long long)arg2 ;
-(void)setFullscreenViewController:(CKFullScreenAppViewController *)arg1 ;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousKeyWindow;
-(void)releaseOwnershipOfBrowserForConsumer:(long long)arg1 ;
-(CGRect)cachedCompactFrame;
-(BOOL)isHostingRemoteKeyboardView;
-(void)setCurrentModalBrowser:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)presentPluginFullScreenModal:(id)arg1 datasource:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setModalAppWindow:(UIWindow *)arg1 ;
-(void)setPreModalKeyWindow:(UIWindow *)arg1 ;
-(void)setPresentedModalBrowserNavigationController:(UINavigationController *)arg1 ;
-(id)modalPresentationViewController;
-(UIViewController*<CKBrowserViewControllerProtocol>)currentModalBrowser;
-(UINavigationController *)presentedModalBrowserNavigationController;
-(UIWindow *)preModalKeyWindow;
-(long long)lastTransitionReason;
-(BOOL)wasCurrentBrowserExpanded;
-(void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastTransitionReason:(long long)arg1 ;
-(BOOL)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2 ;
-(void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentPluginFullScreenModal:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

