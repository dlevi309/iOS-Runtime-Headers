/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUQuickControlContainerViewDelegate.h>
#import <libobjc.A.dylib/HUQuickControlViewControllerCoordinatorDelegate.h>
#import <libobjc.A.dylib/HUQuickControlContentHosting.h>
#import <libobjc.A.dylib/HUItemPresentationContainer.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>
#import <libobjc.A.dylib/HUViewControllerCustomDismissing.h>
#import <libobjc.A.dylib/HUQuickControlTouchContinuing.h>

@protocol HUPresentationDelegate, NSCopying, HUQuickControlContainerViewControllerDelegate, HUOpenURLHandling;
@class HFItem, HMHome, HUQuickControlContainerView, UILayoutGuide, UITapGestureRecognizer, UIPanGestureRecognizer, HUAnimationApplier, HUQuickControlViewControllerCoordinator, HUQuickControlViewController, NSString;

@interface HUQuickControlContainerViewController : UIViewController <HUPresentationDelegate, HUQuickControlContainerViewDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUQuickControlContentHosting, HUItemPresentationContainer, HUPresentationDelegateHost, HUViewControllerCustomDismissing, HUQuickControlTouchContinuing> {

	BOOL _presentedDetailView;
	id<HUPresentationDelegate> presentationDelegate;
	HFItem*<NSCopying> _item;
	HMHome* _home;
	HUQuickControlContainerView* _controlContainerView;
	id<HUQuickControlContainerViewControllerDelegate> _delegate;
	id<HUOpenURLHandling> _detailViewURLHandler;
	UILayoutGuide* _availableContentLayoutGuide;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	HUAnimationApplier* _presentationApplier;
	unsigned long long _presentationState;
	HUQuickControlViewControllerCoordinator* _viewControllerCoordinator;
	HUQuickControlViewController* _activeControlViewController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                    //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * presentationApplier;                                         //@synthesize presentationApplier=_presentationApplier - In the implementation block
@property (assign,nonatomic) unsigned long long presentationState;                                             //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) HUQuickControlViewControllerCoordinator * viewControllerCoordinator;              //@synthesize viewControllerCoordinator=_viewControllerCoordinator - In the implementation block
@property (nonatomic,retain) HUQuickControlViewController * activeControlViewController;                       //@synthesize activeControlViewController=_activeControlViewController - In the implementation block
@property (nonatomic,retain) HUQuickControlContainerView * controlContainerView;                               //@synthesize controlContainerView=_controlContainerView - In the implementation block
@property (assign,nonatomic) BOOL presentedDetailView;                                                         //@synthesize presentedDetailView=_presentedDetailView - In the implementation block
@property (nonatomic,readonly) HFItem*<NSCopying> item;                                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                  //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlContainerViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<HUOpenURLHandling> detailViewURLHandler;                                       //@synthesize detailViewURLHandler=_detailViewURLHandler - In the implementation block
@property (nonatomic,retain) UILayoutGuide * availableContentLayoutGuide;                                      //@synthesize availableContentLayoutGuide=_availableContentLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItem * hu_presentedItem; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate; 
+(id)_easeOutTimingFunction;
+(id)_blurAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_controlScaleAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_controlAlphaAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_detailChromeAnimationSettings;
+(id)_sourceViewTransitionAnimationSettingsForPresenting:(BOOL)arg1 ;
-(NSString *)description;
-(id<HUQuickControlContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUQuickControlContainerViewControllerDelegate>)arg1 ;
-(HFItem*<NSCopying>)item;
-(HMHome *)home;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(CGRect)sourceRect;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(void)_backButtonPressed:(id)arg1 ;
-(id)viewForTouchContinuation;
-(id<HUPresentationDelegate>)presentationDelegate;
-(unsigned long long)presentationState;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(void)quickControlContentDidUpdateDesiredVisbilityState:(id)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg1 ;
-(void)detailsButtonPressedInContainerView:(id)arg1 ;
-(CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1 ;
-(void)_updateControlStatusText;
-(void)_updateIconDescriptorAnimated:(BOOL)arg1 ;
-(HFItem *)hu_presentedItem;
-(void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(BOOL)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateReachability:(BOOL)arg2 ;
-(void)setAvailableContentLayoutGuide:(UILayoutGuide *)arg1 ;
-(id)dismissControlAnimated:(BOOL)arg1 ;
-(HUQuickControlContainerView *)controlContainerView;
-(HUQuickControlViewControllerCoordinator *)viewControllerCoordinator;
-(void)setViewControllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 ;
-(BOOL)presentedDetailView;
-(void)setPresentedDetailView:(BOOL)arg1 ;
-(id)_prepareDetailViewController;
-(void)_updateUserInteractionEnabledForActiveControl;
-(BOOL)isControlPresentedOrPresenting;
-(HUQuickControlViewController *)activeControlViewController;
-(id)presentDetailViewControllerAnimated:(BOOL)arg1 ;
-(void)_createControlContainerViewWithSourceRect:(CGRect)arg1 ;
-(void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(BOOL)arg2 initialProgress:(double)arg3 completion:(/*^block*/id)arg4 ;
-(HUAnimationApplier *)presentationApplier;
-(void)setPresentationApplier:(HUAnimationApplier *)arg1 ;
-(id)_dismissDetailsViewControllerAnimated:(BOOL)arg1 dismissControl:(BOOL)arg2 ;
-(void)_controlDidDismiss;
-(void)setControlContainerView:(HUQuickControlContainerView *)arg1 ;
-(UILayoutGuide *)availableContentLayoutGuide;
-(void)_updateActiveControlViewController;
-(void)_updateReachabilityStateForActiveControl;
-(void)setActiveControlViewController:(HUQuickControlViewController *)arg1 ;
-(id<HUOpenURLHandling>)detailViewURLHandler;
-(void)quickControlContent:(id)arg1 requestDismissalOfType:(unsigned long long)arg2 ;
-(void)quickControlContent:(id)arg1 showAuxiliaryView:(id)arg2 ;
-(void)hideAuxiliaryViewForQuickControlContent:(id)arg1 ;
-(id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 ;
-(void)_settingsButtonPressed:(id)arg1 ;
-(void)presentControlFromSourceRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)isControlDismissedOrDismissing;
-(void)_dismissQuickControls;
-(void)beginReceivingTouchesWithGestureRecognizer:(id)arg1 ;
-(void)setDetailViewURLHandler:(id<HUOpenURLHandling>)arg1 ;
@end

