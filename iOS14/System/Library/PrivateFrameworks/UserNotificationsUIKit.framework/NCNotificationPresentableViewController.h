/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/BNPresentable.h>

@protocol NCNotificationPresentableViewControllerDelegate, BNPanGestureProxy;
@class UIViewController, NCNotificationViewController, NSString;

@interface NCNotificationPresentableViewController : UIViewController <NCNotificationViewControllerObserving, BNPresentable> {

	BOOL _readyForPanGestureProxy;
	BOOL _canPan;
	BOOL _panPresentation;
	int _bannerAppearState;
	id<NCNotificationPresentableViewControllerDelegate> _delegate;
	NCNotificationViewController* _notificationViewController;
	UIViewController* _contextDefiningViewController;
	id<BNPanGestureProxy> _panGestureProxy;
	long long _presentationState;
	CGRect _initialBannerFrame;

}

@property (setter=_setContextDefiningViewController:,getter=_contextDefiningViewController,nonatomic,retain) UIViewController * contextDefiningViewController;              //@synthesize contextDefiningViewController=_contextDefiningViewController - In the implementation block
@property (assign,setter=_setPanGestureProxy:,getter=_panGestureProxy,nonatomic,__weak) id<BNPanGestureProxy> panGestureProxy;                                              //@synthesize panGestureProxy=_panGestureProxy - In the implementation block
@property (assign,setter=_setReadyForPanGestureProxy:,getter=_isReadyForPanGestureProxy,nonatomic) BOOL readyForPanGestureProxy;                                            //@synthesize readyForPanGestureProxy=_readyForPanGestureProxy - In the implementation block
@property (assign,setter=_setInitialBannerFrame:,getter=_initialBannerFrame,nonatomic) CGRect initialBannerFrame;                                                           //@synthesize initialBannerFrame=_initialBannerFrame - In the implementation block
@property (assign,setter=_setCanPan:,getter=_canPan,nonatomic) BOOL canPan;                                                                                                 //@synthesize canPan=_canPan - In the implementation block
@property (assign,setter=_setPanPresentation:,getter=_isPanPresentation,nonatomic) BOOL panPresentation;                                                                    //@synthesize panPresentation=_panPresentation - In the implementation block
@property (assign,setter=_setPresentationState:,getter=_presentationState,nonatomic) long long presentationState;                                                           //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationPresentableViewControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NCNotificationViewController * notificationViewController;                                                                                   //@synthesize notificationViewController=_notificationViewController - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (nonatomic,readonly) int bannerAppearState;                                                                                                                       //@synthesize bannerAppearState=_bannerAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(NSString *)requestIdentifier;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<NCNotificationPresentableViewControllerDelegate>)delegate;
-(BOOL)_canPan;
-(unsigned long long)supportedInterfaceOrientations;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(NSString *)requesterIdentifier;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<NCNotificationPresentableViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)shouldAutorotate;
-(UIViewController *)viewController;
-(BOOL)_canShowWhileLocked;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(void)viewDidLoad;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg1 ;
-(BOOL)isDragging;
-(void)_setPresentationState:(long long)arg1 ;
-(long long)_presentationState;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(BOOL)_isAppearingOrAppeared;
-(CGSize)preferredContentSizeWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(id)_panGestureProxy;
-(id)_contextDefiningViewController;
-(NCNotificationViewController *)notificationViewController;
-(CGRect)_initialBannerFrame;
-(BOOL)_isPanPresentation;
-(id)presentableDescription;
-(void)_setInitialBannerFrame:(CGRect)arg1 ;
-(void)_setCanPan:(BOOL)arg1 ;
-(void)_setPanPresentation:(BOOL)arg1 ;
-(void)draggingDidBeginWithGestureProxy:(id)arg1 ;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(id)initWithNotificationViewController:(id)arg1 ;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg1 ;
-(int)bannerAppearState;
-(void)_setContextDefiningViewController:(id)arg1 ;
-(void)_setPanGestureProxy:(id)arg1 ;
-(BOOL)_isReadyForPanGestureProxy;
-(void)_setReadyForPanGestureProxy:(BOOL)arg1 ;
@end

