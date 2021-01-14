/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKContentContainerObserver.h>
#import <libobjc.A.dylib/PKViewWindowObserver.h>

@protocol UICoordinateSpace, PKCompactNavigationContainerControllerDelegate;
@class UIView, PKCompactNavigationContainedNavigationWrapperViewController, UIViewController, UITapGestureRecognizer, PKCompactNavigationContainedNavigationController, NSString;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver> {

	BOOL _centeredCard;
	BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
	unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
	BOOL _requiresMasking;
	UIView* _maskingContainerView;
	CGRect _maximumModalPresentationFrame;
	PKCompactNavigationContainedNavigationWrapperViewController* _presentationContextVC;
	SCD_Struct_PK29 _topVCInfo;
	CGRect _statusBarFrame;
	unsigned short _layoutGroupCounter;
	unsigned short _contentSizeUpdateDeferralCounter;
	BOOL _deferredContentSizeUpdate;
	BOOL _deferredContentSizeUpdateIsAnimated;
	BOOL _deferredContentSizeUpdateIsForced;
	UIViewController* _topVC;
	BOOL _topVCIsExpectedClass;
	BOOL _topVCIsInInitialLayout;
	UIViewController* _pendingTopVC;
	unsigned long long _pendingTopVCIdentifier;
	unsigned long long _updateChildViewControllerSizeCounter;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned char _visibility;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	CGRect _lastKeyboardFrame;
	BOOL _didMoveToWindowDirtiesLayout;
	BOOL _presentingNavigationController;
	PKCompactNavigationContainedNavigationController* _containedNavigationController;
	unsigned long long _style;
	id<UICoordinateSpace> _exclusionCoordinateSpace;
	id<PKCompactNavigationContainerControllerDelegate> _delegate;
	CGRect _exclusionRect;

}

@property (assign,getter=isPresentingNavigationController,nonatomic) BOOL presentingNavigationController;                     //@synthesize presentingNavigationController=_presentingNavigationController - In the implementation block
@property (assign,nonatomic) BOOL didMoveToWindowDirtiesLayout;                                                               //@synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout - In the implementation block
@property (nonatomic,readonly) PKCompactNavigationContainedNavigationController * containedNavigationController;              //@synthesize containedNavigationController=_containedNavigationController - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect exclusionRect;                                                                          //@synthesize exclusionRect=_exclusionRect - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> exclusionCoordinateSpace;                                                //@synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace - In the implementation block
@property (assign,nonatomic,__weak) id<PKCompactNavigationContainerControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dimmingColor;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(PKCompactNavigationContainedNavigationController *)containedNavigationController;
-(void)setPresentingNavigationController:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2 ;
-(void)_updateStatusBarFrame;
-(void)_updateTopViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateForKeyboardIfNecessary;
-(void)_beginLayoutGroup;
-(void)_endLayoutGroup;
-(CGRect)exclusionRect;
-(id<PKCompactNavigationContainerControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(CGRect)_targetNavigationControllerFrameForInfo:(SCD_Struct_PK30)arg1 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(CGSize)_navigationControllerSizeForChildViewControllerInfo:(SCD_Struct_PK30)arg1 withCurrentInfo:(SCD_Struct_PK30)arg2 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK30)_infoForViewController:(id)arg1 ;
-(CGSize)modalPresentationSize;
-(void)_updateTopViewControllerAsync:(id)arg1 animated:(BOOL)arg2 ;
-(void)observedView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(void)setExclusionRect:(CGRect)arg1 withCoordinateSpace:(id)arg2 ;
-(BOOL)didMoveToWindowDirtiesLayout;
-(id<UICoordinateSpace>)exclusionCoordinateSpace;
-(BOOL)isPresentingNavigationController;
-(unsigned long long)supportedInterfaceOrientations;
-(void)insertBackgroundLevelView:(id)arg1 ;
-(void)setDidMoveToWindowDirtiesLayout:(BOOL)arg1 ;
-(void)setDelegate:(id<PKCompactNavigationContainerControllerDelegate>)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(long long)preferredUserInterfaceStyle;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2 ;
-(void)keyboardWillShow:(id)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(id)_backgroundColor;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)childViewControllerPreferredContentSizeForSize:(CGSize)arg1 isRoot:(BOOL)arg2 ;
-(CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(CGSize)arg1 isRoot:(BOOL)arg2 ;
-(CGSize)childViewControllerSizeForNavigationControllerSize:(CGSize)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)viewDidLayoutSubviews;
-(unsigned long long)style;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

