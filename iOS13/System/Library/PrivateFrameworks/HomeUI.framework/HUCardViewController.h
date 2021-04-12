/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@class HUQuickControlContainerViewController, UIViewController, HFItem, UIColor, UIScrollView, HUQuickControlSummaryNavigationBarTitleView, HUQuickControlViewControllerCoordinator, UIButton, NSMutableArray, UIPanGestureRecognizer, UILayoutGuide, HUAnimationApplier, UIImpactFeedbackGenerator, NSString;

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
	NSMutableArray* _constraints;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILayoutGuide* _quickControlLayoutGuide;
	HUAnimationApplier* _animationApplier;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                                      //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryNavigationBarTitleView * navigationBarTitleView;              //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (nonatomic,retain) HUQuickControlViewControllerCoordinator * viewControllerCoordinator;               //@synthesize viewControllerCoordinator=_viewControllerCoordinator - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                     //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILayoutGuide * quickControlLayoutGuide;                                           //@synthesize quickControlLayoutGuide=_quickControlLayoutGuide - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) BOOL reachable;                                                                    //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL settingsUnlocked;                                                             //@synthesize settingsUnlocked=_settingsUnlocked - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * animationApplier;                                             //@synthesize animationApplier=_animationApplier - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;                               //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) HUQuickControlContainerViewController * quickControlViewController;              //@synthesize quickControlViewController=_quickControlViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * settingsViewController;                                       //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,readonly) HFItem * sourceItem;                                                             //@synthesize sourceItem=_sourceItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUCardViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hideControls;                                                                 //@synthesize hideControls=_hideControls - In the implementation block
@property (assign,nonatomic) BOOL hideSettings;                                                                 //@synthesize hideSettings=_hideSettings - In the implementation block
@property (assign,nonatomic) BOOL disablePullToUnlockSettings;                                                  //@synthesize disablePullToUnlockSettings=_disablePullToUnlockSettings - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<HUCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUCardViewControllerDelegate>)arg1 ;
-(NSMutableArray *)constraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)keyCommands;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(BOOL)hideControls;
-(void)setReachable:(BOOL)arg1 ;
-(void)_escapeKeyPressed;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setUpConstraints;
-(HUQuickControlSummaryNavigationBarTitleView *)navigationBarTitleView;
-(void)setNavigationBarTitleView:(HUQuickControlSummaryNavigationBarTitleView *)arg1 ;
-(BOOL)reachable;
-(UIViewController *)settingsViewController;
-(void)_unlockSettings;
-(HFItem *)sourceItem;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(BOOL)hideSettings;
-(void)setHideSettings:(BOOL)arg1 ;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)_updateControlStatusText;
-(void)_updateIconDescriptorAnimated:(BOOL)arg1 ;
-(HUQuickControlContainerViewController *)quickControlViewController;
-(id)requestDismissal;
-(HUAnimationApplier *)animationApplier;
-(void)setAnimationApplier:(HUAnimationApplier *)arg1 ;
-(void)_actuateTapticFeedback;
-(void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(BOOL)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateReachability:(BOOL)arg2 ;
-(UILayoutGuide *)quickControlLayoutGuide;
-(double)_hostViewHeight;
-(double)_quickControlSectionHeight;
-(void)_endUsingTapticFeedback;
-(double)_quickControlScrollOffsetBoundary;
-(BOOL)disablePullToUnlockSettings;
-(void)_nudgeScrollViewToPoint:(CGPoint)arg1 ;
-(HUQuickControlViewControllerCoordinator *)viewControllerCoordinator;
-(BOOL)settingsUnlocked;
-(void)setSettingsUnlocked:(BOOL)arg1 ;
-(void)_scrollToSettings;
-(id)_springAnimationSettings;
-(void)_updateReachabilityState;
-(id)initWithQuickControlViewController:(id)arg1 settingsViewController:(id)arg2 sourceItem:(id)arg3 controlItems:(id)arg4 home:(id)arg5 ;
-(void)setHideControls:(BOOL)arg1 ;
-(void)dismissCardAnimated:(BOOL)arg1 ;
-(void)scrollToDetailsViewAnimated:(BOOL)arg1 ;
-(CGSize)overridingContentSizeForPresentedViewController:(id)arg1 ;
-(void)setDisablePullToUnlockSettings:(BOOL)arg1 ;
-(void)setViewControllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 ;
-(void)setQuickControlLayoutGuide:(UILayoutGuide *)arg1 ;
@end

