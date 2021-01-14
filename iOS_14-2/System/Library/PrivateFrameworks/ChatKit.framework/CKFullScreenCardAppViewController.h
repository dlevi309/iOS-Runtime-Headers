/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long lastKnownDeviceOrientation;                                                        //@synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation - In the implementation block
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate;              //@synthesize parentTransitioningDelegate=_parentTransitioningDelegate - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenAppViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)inputAccessoryView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id<CKFullScreenAppViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentViewController:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setLastKnownDeviceOrientation:(long long)arg1 ;
-(long long)lastKnownDeviceOrientation;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)inTransition;
-(NSString *)conversationID;
-(BOOL)isiMessage;
-(void)_handleRemoteConnectionInterrupted:(id)arg1 ;
-(BOOL)_currentPluginIsJellyfish;
-(BOOL)shouldShowChatChrome;
-(BOOL)_shouldShowDimmingView;
-(void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)finalContentViewFrame;
-(id<UIViewControllerTransitioningDelegate>)parentTransitioningDelegate;
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
-(CKConversation *)conversation;
-(BOOL)shouldAutorotate;
-(CKDismissView *)dismissView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setDismissView:(CKDismissView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(BOOL)isDismissing;
-(UIView *)contentView;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2 ;
-(BOOL)isLoaded;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_updateDimmingViewAlpha;
-(void)dealloc;
-(void)dismiss;
@end

