/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerProtocol.h>

@protocol CKBrowserViewControllerProtocol, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;
@class UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, NSString, NSArray, NSData, CKBrowserDragManager, NSNumber, UIView, CKDismissView, CKConversation;

@interface CKFullScreenCardAppViewController : UIViewController <CKBrowserViewControllerProtocol, UIGestureRecognizerDelegate, UIAdaptivePresentationControllerDelegate, CKFullScreenAppViewControllerProtocol> {

	BOOL _inTransition;
	UIViewController*<CKBrowserViewControllerProtocol> _contentViewController;
	id<CKFullScreenAppViewControllerDelegate> _delegate;
	id<UIViewControllerTransitioningDelegate> _parentTransitioningDelegate;
	UIView* _contentView;
	CKDismissView* _dismissView;
	CKConversation* _conversation;
	long long _lastKnownDeviceOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKDismissView * dismissView;                                                                 //@synthesize dismissView=_dismissView - In the implementation block
@property (assign,nonatomic) BOOL inTransition;                                                                           //@synthesize inTransition=_inTransition - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                               //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) long long lastKnownDeviceOrientation;                                                        //@synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation - In the implementation block
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate;              //@synthesize parentTransitioningDelegate=_parentTransitioningDelegate - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenAppViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CKFullScreenAppViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKFullScreenAppViewControllerDelegate>)arg1 ;
-(BOOL)isLoaded;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setContentViewController:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)inputAccessoryView;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewController*<CKBrowserViewControllerProtocol>)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredStatusBarStyle;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(BOOL)isDismissing;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2 ;
-(void)setLastKnownDeviceOrientation:(long long)arg1 ;
-(long long)lastKnownDeviceOrientation;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(IMBalloonPlugin *)balloonPlugin;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(void)_handleRemoteConnectionInterrupted:(id)arg1 ;
-(CKDismissView *)dismissView;
-(BOOL)_currentPluginIsJellyfish;
-(BOOL)shouldShowChatChrome;
-(BOOL)_shouldShowDimmingView;
-(void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)finalContentViewFrame;
-(void)_updateDimmingViewAlpha;
-(id<UIViewControllerTransitioningDelegate>)parentTransitioningDelegate;
-(void)setDismissView:(CKDismissView *)arg1 ;
-(BOOL)inTransition;
-(void)setInTransition:(BOOL)arg1 ;
-(BOOL)isPrimaryViewController;
-(void)setIsPrimaryViewController:(BOOL)arg1 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(BOOL)isiMessage;
-(void)setIsiMessage:(BOOL)arg1 ;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldSuppressEntryView;
-(BOOL)inExpandedPresentation;
-(BOOL)inFullScreenModalPresentation;
@end

