/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>
#import <libobjc.A.dylib/CKFullScreenAppNavbarManagerDelegate.h>
#import <libobjc.A.dylib/CKAppGrabberViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerProtocol.h>

@protocol CKBrowserViewControllerProtocol, CKFullScreenAppViewControllerDelegate;
@class CKAppGrabberView, CKImmediatePanGestureRecognizer, UIViewPropertyAnimator, UILongPressGestureRecognizer, UIViewController, UIView, CKDismissView, CKConversation, CKFullScreenAppNavbarManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSString, NSArray, NSData, CKBrowserDragManager, NSNumber;

@interface CKFullScreenAppViewController : UIViewController <CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKAppGrabberViewDelegate, UIGestureRecognizerDelegate, CKFullScreenAppViewControllerProtocol> {

	CKAppGrabberView* _grabberView;
	CKImmediatePanGestureRecognizer* _collapseGestureTracker;
	UIViewPropertyAnimator* _collapsePropertyAnimator;
	BOOL _shouldDoCollapseInteraction;
	BOOL _collapseInteractionDidMove;
	CGPoint _collapseGestureStartingLocation;
	UILongPressGestureRecognizer* _touchTracker;
	BOOL _addsVerticalPaddingForStatusBar;
	BOOL _fadesOutDuringStickerDrag;
	BOOL _usesDimmingView;
	BOOL _inTransition;
	BOOL _inDragAndDrop;
	UIViewController*<CKBrowserViewControllerProtocol> _contentViewController;
	id<CKFullScreenAppViewControllerDelegate> _delegate;
	UIView* _contentView;
	CKDismissView* _dismissView;
	CKConversation* _conversation;
	CKFullScreenAppNavbarManager* _navbarManager;
	unsigned long long _transitionDirection;
	long long _lastKnownDeviceOrientation;
	CGRect _initialBrowserFrame;
	CGRect _targetBrowserFrame;

}

@property (nonatomic,retain) UIViewController * presentationViewController; 
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate; 
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin; 
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource; 
@property (assign,nonatomic) BOOL isiMessage; 
@property (assign,nonatomic) NSString * conversationID; 
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL shouldSuppressEntryView; 
@property (assign,nonatomic) BOOL isPrimaryViewController; 
@property (getter=isDismissing,nonatomic,readonly) BOOL dismissing; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation; 
@property (nonatomic,readonly) BOOL inFullScreenModalPresentation; 
@property (nonatomic,retain) NSString * sender; 
@property (nonatomic,retain) NSArray * recipients; 
@property (nonatomic,readonly) BOOL wasExpandedPresentation; 
@property (nonatomic,retain) NSData * conversationEngramID; 
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) long long currentBrowserConsumer; 
@property (nonatomic,readonly) UIViewController * remoteViewController; 
@property (nonatomic,readonly) CGRect horizontalSwipeExclusionRect; 
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKDismissView * dismissView;                                                                 //@synthesize dismissView=_dismissView - In the implementation block
@property (assign,nonatomic) BOOL inTransition;                                                                           //@synthesize inTransition=_inTransition - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKFullScreenAppNavbarManager * navbarManager;                                                //@synthesize navbarManager=_navbarManager - In the implementation block
@property (assign,nonatomic) unsigned long long transitionDirection;                                                      //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (assign,nonatomic) CGRect initialBrowserFrame;                                                                  //@synthesize initialBrowserFrame=_initialBrowserFrame - In the implementation block
@property (assign,nonatomic) CGRect targetBrowserFrame;                                                                   //@synthesize targetBrowserFrame=_targetBrowserFrame - In the implementation block
@property (assign,nonatomic) BOOL inDragAndDrop;                                                                          //@synthesize inDragAndDrop=_inDragAndDrop - In the implementation block
@property (assign,nonatomic) long long lastKnownDeviceOrientation;                                                        //@synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL addsVerticalPaddingForStatusBar;                                                        //@synthesize addsVerticalPaddingForStatusBar=_addsVerticalPaddingForStatusBar - In the implementation block
@property (assign,nonatomic) BOOL fadesOutDuringStickerDrag;                                                              //@synthesize fadesOutDuringStickerDrag=_fadesOutDuringStickerDrag - In the implementation block
@property (assign,nonatomic) BOOL usesDimmingView;                                                                        //@synthesize usesDimmingView=_usesDimmingView - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenAppViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)inputAccessoryView;
-(id)traitCollection;
-(void)setNavbarManager:(CKFullScreenAppNavbarManager *)arg1 ;
-(CKFullScreenAppNavbarManager *)navbarManager;
-(BOOL)inDragAndDrop;
-(BOOL)_currentPluginIsAppManager;
-(double)topAreaHeight;
-(CGRect)leftRightSafeAreaInsetRect:(CGRect)arg1 ;
-(BOOL)fadesOutDuringStickerDrag;
-(BOOL)addsVerticalPaddingForStatusBar;
-(void)setInitialBrowserFrame:(CGRect)arg1 ;
-(void)updateGrabberTitleAndIconForPlugin:(id)arg1 ;
-(void)setTargetBrowserFrame:(CGRect)arg1 ;
-(void)setTransitionDirection:(unsigned long long)arg1 ;
-(void)collapseGestureTouchMoved:(id)arg1 ;
-(void)touchTrackerRecognized:(id)arg1 ;
-(void)setupPausedCollapseAnimatorIfNeeded;
-(double)collapseTargetOriginY;
-(void)reverseAndCleanupCollapseAnimator;
-(BOOL)_currentPluginIsAppStore;
-(void)setInDragAndDrop:(BOOL)arg1 ;
-(void)appGrabberViewCloseButtonTapped:(id)arg1 ;
-(void)addNewGrabberView;
-(void)hideDimmingView;
-(void)setGrabberView:(id)arg1 ;
-(void)setUsesDimmingView:(BOOL)arg1 ;
-(void)setAddsVerticalPaddingForStatusBar:(BOOL)arg1 ;
-(void)setFadesOutDuringStickerDrag:(BOOL)arg1 ;
-(CGRect)initialBrowserFrame;
-(CGRect)targetBrowserFrame;
-(id<CKFullScreenAppViewControllerDelegate>)delegate;
-(void)setContentViewController:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)collapse;
-(void)setLastKnownDeviceOrientation:(long long)arg1 ;
-(long long)lastKnownDeviceOrientation;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)inTransition;
-(NSString *)conversationID;
-(BOOL)isiMessage;
-(BOOL)_currentPluginIsJellyfish;
-(BOOL)shouldShowChatChrome;
-(BOOL)_shouldShowDimmingView;
-(void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)finalContentViewFrame;
-(void)setInTransition:(BOOL)arg1 ;
-(BOOL)isPrimaryViewController;
-(void)setIsPrimaryViewController:(BOOL)arg1 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(void)setIsiMessage:(BOOL)arg1 ;
-(void)setConversationID:(NSString *)arg1 ;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldSuppressEntryView;
-(BOOL)inExpandedPresentation;
-(BOOL)inFullScreenModalPresentation;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewController*<CKBrowserViewControllerProtocol>)contentViewController;
-(IMBalloonPlugin *)balloonPlugin;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CKFullScreenAppViewControllerDelegate>)arg1 ;
-(void)collapse:(id)arg1 ;
-(CKConversation *)conversation;
-(void)_dismiss:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(CKDismissView *)dismissView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setDismissView:(CKDismissView *)arg1 ;
-(BOOL)usesDimmingView;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)additionalSafeAreaInsets;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_dragBegan:(id)arg1 ;
-(BOOL)isDismissing;
-(UIView *)contentView;
-(void)navbarManagerDidReceiveMessage:(id)arg1 ;
-(void)navbarManagerDidDismissAllMessages:(id)arg1 ;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2 ;
-(void)_dragEnded:(id)arg1 ;
-(BOOL)isLoaded;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_updateDimmingViewAlpha;
-(unsigned long long)transitionDirection;
-(void)dealloc;
-(void)dismiss;
@end

