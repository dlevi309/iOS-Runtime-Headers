/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewControllerContentContainer.h>
#import <libobjc.A.dylib/SBPIPInteractionControllerDelegate.h>

@class NSHashTable, UIView, SBPIPInteractionController, SBFFluidBehaviorSettings, BSTimer, NSMutableArray, FBDisplayLayoutElement, PGPictureInPictureViewController, NSString;

@interface SBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer, SBPIPInteractionControllerDelegate> {

	NSHashTable* _observerHashTable;
	BOOL _interfaceOrientationLockAcquired;
	UIView* _contentView;
	UIEdgeInsets _contentViewPadding;
	unsigned _updateContentViewLayoutSettingsAndLayoutIfNeeded : 1;
	SBPIPInteractionController* _interactionController;
	SBFFluidBehaviorSettings* _interactiveAnimationSettings;
	SBFFluidBehaviorSettings* _stashTabFluidBehavior;
	BSTimer* _stashedStateReduceResourcesUsageTimer;
	unsigned long long _inFlightAnimationCounter;
	NSMutableArray* _waitInteractionAnimationsCompletionBlocks;
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(PGPictureInPictureViewController *)pictureInPictureViewController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)_currentInterfaceOrientation;
-(void)viewSafeAreaInsetsDidChange;
-(void)removeObserver:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(BOOL)handleTapWhileStashedGesture;
-(BOOL)handleDoubleTapGesture;
-(void)setStashed:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForPictureInPictureViewController;
-(void)performStartAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)interactionControllerDidUpdateEdgeInsets:(id)arg1 ;
-(void)interactionController:(id)arg1 didUpdateStashProgress:(double)arg2 ;
-(void)interactionController:(id)arg1 wantsStashTabHidden:(BOOL)arg2 left:(BOOL)arg3 ;
-(void)interactionControllerDidBeginSizeChange:(id)arg1 behavior:(int)arg2 ;
-(void)interactionControllerDidEndSizeChange:(id)arg1 ;
-(void)interactionControllerDidEndAllInteractions:(id)arg1 ;
-(void)interactionController:(id)arg1 didSettleOnStashState:(BOOL)arg2 ;
-(void)setNeedsLayoutForInteractionController:(id)arg1 traits:(unsigned long long)arg2 withReason:(unsigned long long)arg3 behavior:(int)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithPictureInPictureViewController:(id)arg1 ;
-(void)_updateContentPadding;
-(void)_updateContentViewFrame:(CGRect)arg1 reason:(id)arg2 ;
-(CGRect)_contentViewFrameInDisplayReferenceSpace;
-(void)_updateDisplayLayoutElementReferenceFrame;
-(void)_setStashed:(BOOL)arg1 ;
-(CGRect)_contentViewFrameFromInterfaceOrientation:(long long)arg1 frameInFixedCoordinateSpace:(CGRect)arg2 ;
-(void)_requireInterfaceOrientation:(long long)arg1 ;
-(void)_acquireInterfaceOrientationLock;
-(void)_relinquishInterfaceOrientationLock;
-(void)_noteStashState:(BOOL)arg1 ;
-(void)setInteractionControllerEnabled:(BOOL)arg1 ;
-(void)setContentViewPadding:(UIEdgeInsets)arg1 ;
-(double)displayLayoutElementLevel;
-(void)setDisplayLayoutElementLevel:(double)arg1 ;
-(void)setInteractionsEnabled:(BOOL)arg1 ;
-(void)startResourcesUsageReductionAfterTimeout:(double)arg1 ;
-(void)stopResourcesUsageReduction;
-(void)forcePictureInPictureToFrame:(CGRect)arg1 ;
-(long long)requiredInterfaceOrientation;
-(BOOL)animateSafeAreaInsetsChanges;
-(void)setAnimateSafeAreaInsetsChanges:(BOOL)arg1 ;
-(double)SB_accessibilityContentViewScale;
-(void)SB_accessibilitySetContentViewScale:(double)arg1 ;
@end

