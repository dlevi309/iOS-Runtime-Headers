/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewControllerContentContainer.h>
#import <libobjc.A.dylib/SBPIPContentViewLayoutSettingsObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSHashTable, UIView, NSMutableArray, NSLayoutConstraint, FBDisplayLayoutElement, PGPictureInPictureViewController, NSString;

@interface SBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer, SBPIPContentViewLayoutSettingsObserver, UIGestureRecognizerDelegate> {

	NSHashTable* _observerHashTable;
	BOOL _interfaceOrientationLockAcquired;
	UIView* _contentView;
	CGSize _preferredContentSize;
	long long _contentViewPosition;
	CGSize _contentViewSize;
	UIEdgeInsets _contentViewPadding;
	unsigned _addContentViewLayoutConstraints : 1;
	unsigned _stashContentView : 1;
	unsigned _updateContentViewLayoutSettingsAndLayoutIfNeeded : 1;
	unsigned _panGestureHandled : 1;
	unsigned _rotationGestureHandled : 1;
	unsigned _pinchGestureHandled : 1;
	double _previousRotation;
	double _initialGestureScale;
	CGPoint _panGestureVelocity;
	double _pinchGestureScaleFactor;
	unsigned _handlePanRotationPinchGestureEndedState : 1;
	NSMutableArray* _layoutConstraints;
	NSLayoutConstraint* _contentViewGestureCenterXLayoutConstraint;
	NSLayoutConstraint* _contentViewGestureCenterYLayoutConstraint;
	NSLayoutConstraint* _contentViewGestureWidthLayoutConstraint;
	NSLayoutConstraint* _contentViewGestureHeightLayoutConstraint;
	long long _layoutConstraintStyle;
	FBDisplayLayoutElement* _displayLayoutElement;
	double _displayLayoutElementLevel;
	BOOL _animateSafeAreaInsetsChanges;
	PGPictureInPictureViewController* _pictureInPictureViewController;
	long long _requiredInterfaceOrientation;

}

@property (nonatomic,readonly) PGPictureInPictureViewController * pictureInPictureViewController;              //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (nonatomic,readonly) long long requiredInterfaceOrientation;                                         //@synthesize requiredInterfaceOrientation=_requiredInterfaceOrientation - In the implementation block
@property (assign,nonatomic) double displayLayoutElementLevel; 
@property (assign,nonatomic) BOOL animateSafeAreaInsetsChanges;                                                //@synthesize animateSafeAreaInsetsChanges=_animateSafeAreaInsetsChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(PGPictureInPictureViewController *)pictureInPictureViewController;
-(void)_handlePinchGesture:(id)arg1 ;
-(void)_handleRotationGesture:(id)arg1 ;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(BOOL)handleTapGesture;
-(BOOL)handleDoubleTapGesture;
-(void)preferredContentSizeDidChangeForPictureInPictureViewController;
-(void)performStartAnimationWithAnimationHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 animationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithPictureInPictureViewController:(id)arg1 ;
-(void)_actuallyUpdateContentViewLayoutSettingsAndLayoutIfNeeded;
-(void)_actuallyHandlePanRotationPinchGestureEndedState;
-(void)_updateContentViewLayoutConstraintsWithContentViewSize;
-(CGRect)_contentViewFrameInDisplayReferenceSpace;
-(void)_updateDisplayLayoutElementReferenceFrame;
-(void)_requireInterfaceOrientation:(long long)arg1 ;
-(CGRect)_contentViewFrameFromInterfaceOrientation:(long long)arg1 frameInFixedCoordinateSpace:(CGRect)arg2 ;
-(void)_updateContentViewLayoutConstraintsWithFrame:(CGRect)arg1 ;
-(void)_acquireInterfaceOrientationLock;
-(void)_relinquishInterfaceOrientationLock;
-(void)_updateContentViewLayoutSettingsAndLayoutIfNeeded;
-(void)_handlePanRotationPinchGestureBeganState;
-(CGPoint)_contentViewCenter;
-(BOOL)_stashContentViewWithContentViewCenter:(CGPoint)arg1 ;
-(void)_handlePanRotationPinchGestureEndedState;
-(void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg1 ;
-(CGSize)_constrainContentViewSize:(CGSize)arg1 ;
-(void)contentViewLayoutSettingsDidChange;
-(void)setContentViewPadding:(UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(double)displayLayoutElementLevel;
-(void)setDisplayLayoutElementLevel:(double)arg1 ;
-(long long)requiredInterfaceOrientation;
-(BOOL)animateSafeAreaInsetsChanges;
-(void)setAnimateSafeAreaInsetsChanges:(BOOL)arg1 ;
-(double)SB_accessibilityContentViewScale;
-(void)SB_accessibilitySetContentViewScale:(double)arg1 ;
@end

