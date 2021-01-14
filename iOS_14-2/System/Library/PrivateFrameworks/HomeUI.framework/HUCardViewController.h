/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlViewControllerCoordinatorDelegate.h>
#import <libobjc.A.dylib/HUViewControllerCustomDismissing.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HUCardViewControllerDelegate;
@class HUQuickControlContainerViewController, UIViewController, HFItem, UIColor, UIScrollView, HUQuickControlSummaryNavigationBarTitleView, HUQuickControlViewControllerCoordinator, UIButton, NAPromise, NSMutableArray, UIPanGestureRecognizer, UILayoutGuide, HUVisualEffectContainerView, UIView, HUAnimationApplier, UIImpactFeedbackGenerator, UIActivityIndicatorView, NAFuture, NSString;

@interface HUCardViewController : UIViewController <HFItemManagerDelegate, UIGestureRecognizerDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUViewControllerCustomDismissing, UIScrollViewDelegate> {

	BOOL _hideControls;
	BOOL _hideSettings;
	BOOL _disablePullToUnlockSettings;
	BOOL _settingsUnlocked;
	BOOL _reachable;
	HUQuickControlContainerViewController* _quickControlViewController;
	UIViewController* _settingsViewController;
	HFItem* _sourceItem;
	id<HUCardViewControllerDelegate> _delegate;
	UIColor* _backgroundColor;
	UIScrollView* _scrollView;
	HUQuickControlSummaryNavigationBarTitleView* _navigationBarTitleView;
	HUQuickControlViewControllerCoordinator* _viewControllerCoordinator;
	UIButton* _closeButton;
	NAPromise* _viewControllerReadyPromise;
	NSMutableArray* _constraints;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILayoutGuide* _quickControlLayoutGuide;
	HUVisualEffectContainerView* _closeButtonEffectView;
	UIView* _transitionBlurView;
	HUAnimationApplier* _animationApplier;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) NAPromise * viewControllerReadyPromise;                                            //@synthesize viewControllerReadyPromise=_viewControllerReadyPromise - In the implementation block
@property (nonatomic,retain) HUQuickControlContainerViewController * quickControlViewController;                //@synthesize quickControlViewController=_quickControlViewController - In the implementation block
@property (nonatomic,retain) UIViewController * settingsViewController;                                         //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,retain) HFItem * sourceItem;                                                               //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                                      //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryNavigationBarTitleView * navigationBarTitleView;              //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (nonatomic,retain) HUQuickControlViewControllerCoordinator * viewControllerCoordinator;               //@synthesize viewControllerCoordinator=_viewControllerCoordinator - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                     //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILayoutGuide * quickControlLayoutGuide;                                           //@synthesize quickControlLayoutGuide=_quickControlLayoutGuide - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * closeButtonEffectView;                               //@synthesize closeButtonEffectView=_closeButtonEffectView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * transitionBlurView;                                                       //@synthesize transitionBlurView=_transitionBlurView - In the implementation block
@property (assign,nonatomic) BOOL reachable;                                                                    //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL settingsUnlocked;                                                             //@synthesize settingsUnlocked=_settingsUnlocked - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * animationApplier;                                             //@synthesize animationApplier=_animationApplier - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;                               //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
@property (__weak) UIActivityIndicatorView * spinnerView;                                                       //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,readonly) NAFuture * viewControllerReadyFuture; 
@property (assign,nonatomic,__weak) id<HUCardViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hideControls;                                                                 //@synthesize hideControls=_hideControls - In the implementation block
@property (assign,nonatomic) BOOL hideSettings;                                                                 //@synthesize hideSettings=_hideSettings - In the implementation block
@property (assign,nonatomic) BOOL disablePullToUnlockSettings;                                                  //@synthesize disablePullToUnlockSettings=_disablePullToUnlockSettings - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)constraints;
-(void)setTransitionBlurView:(UIView *)arg1 ;
-(UIView *)transitionBlurView;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)keyCommands;
-(id)init;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id<HUCardViewControllerDelegate>)delegate;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)scrollToDetailsViewAnimated:(BOOL)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_unlockSettings;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setReachable:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)_escapeKeyPressed;
-(void)setDelegate:(id<HUCardViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setHideSettings:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(void)setUpConstraints;
-(UIViewController *)settingsViewController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(HUQuickControlSummaryNavigationBarTitleView *)navigationBarTitleView;
-(HFItem *)sourceItem;
-(void)setNavigationBarTitleView:(HUQuickControlSummaryNavigationBarTitleView *)arg1 ;
-(BOOL)hideSettings;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(UIButton *)closeButton;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(BOOL)hideControls;
-(NAFuture *)viewControllerReadyFuture;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)_updateIconDescriptorAnimated:(BOOL)arg1 ;
-(HUQuickControlContainerViewController *)quickControlViewController;
-(id)requestDismissal;
-(HUAnimationApplier *)animationApplier;
-(void)setAnimationApplier:(HUAnimationApplier *)arg1 ;
-(void)_actuateTapticFeedback;
-(void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(BOOL)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateReachability:(BOOL)arg2 ;
-(NAPromise *)viewControllerReadyPromise;
-(void)setQuickControlViewController:(HUQuickControlContainerViewController *)arg1 ;
-(void)setSettingsViewController:(UIViewController *)arg1 ;
-(void)setViewControllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 ;
-(HUQuickControlViewControllerCoordinator *)viewControllerCoordinator;
-(UILayoutGuide *)quickControlLayoutGuide;
-(void)_updateScrollViewAndSpinnerView;
-(void)_updateControlStatusTextWithPrimaryText:(id)arg1 secondaryText:(id)arg2 ;
-(void)_updateMaterials;
-(void)setCloseButtonEffectView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)closeButtonEffectView;
-(double)_hostViewHeight;
-(double)_quickControlSectionHeight;
-(void)_endUsingTapticFeedback;
-(double)_quickControlScrollOffsetBoundary;
-(BOOL)disablePullToUnlockSettings;
-(void)_nudgeScrollViewToPoint:(CGPoint)arg1 ;
-(BOOL)settingsUnlocked;
-(void)setSettingsUnlocked:(BOOL)arg1 ;
-(void)_scrollToSettings;
-(id)_springAnimationSettings;
-(void)_updateReachabilityState;
-(void)updateWithQuickControlViewController:(id)arg1 settingsViewController:(id)arg2 presentationContext:(id)arg3 ;
-(void)setHideControls:(BOOL)arg1 ;
-(void)dismissCardAnimated:(BOOL)arg1 ;
-(CGSize)overridingContentSizeForPresentedViewController:(id)arg1 ;
-(void)setDisablePullToUnlockSettings:(BOOL)arg1 ;
-(void)setViewControllerReadyPromise:(NAPromise *)arg1 ;
-(void)setQuickControlLayoutGuide:(UILayoutGuide *)arg1 ;
-(BOOL)reachable;
@end

