/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureControlsViewControllerDelegate.h>

@protocol PGPictureInPictureViewControllerDelegate, PGPictureInPictureViewControllerContentContainer;
@class PGHostedWindowHostingHandle, PGPlaybackProgress, NSArray, UIView, PGLayerHostView, PGLoadingIndicatorView, PGStashedView, PGPictureInPictureControlsViewController, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureViewController : UIViewController <PGPictureInPictureControlsViewControllerDelegate> {

	long long _stashState;
	PGHostedWindowHostingHandle* _hostedWindowHostingHandle;
	CGAffineTransform _layerHostTransform;
	BOOL _showsAlternateActionButtonImage;
	BOOL _showsLoadingIndicator;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;
	UIView* _styleViewBelow;
	UIView* _containerView;
	PGLayerHostView* _contentView;
	PGLoadingIndicatorView* _loadingIndicatorView;
	PGStashedView* _stashedView;
	UIView* _styleViewAbove;
	PGPictureInPictureControlsViewController* _controlsViewController;
	BOOL _initialLayerFrameIsNull;
	id<PGPictureInPictureViewControllerDelegate> _delegate;
	SCD_Struct_PG0 _delegateRespondsTo;
	id<PGPictureInPictureViewControllerContentContainer> _contentContainer;
	SCD_Struct_PG0 _contentContainerRespondsTo;
	CGSize _preferredContentSize;
	BOOL _canStartShowingChrome;
	PGPictureInPictureApplication* _application;
	/*^block*/id _waitForUIFinalizationCompletionBlock;
	long long _controlsStyle;

}

@property (nonatomic,copy) id waitForUIFinalizationCompletionBlock;                                                     //@synthesize waitForUIFinalizationCompletionBlock=_waitForUIFinalizationCompletionBlock - In the implementation block
@property (assign,nonatomic) long long controlsStyle;                                                                   //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) BOOL showsAlternateActionButtonImage; 
@property (assign,nonatomic) BOOL showsLoadingIndicator; 
@property (nonatomic,retain) PGPlaybackProgress * playbackProgress; 
@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureViewControllerDelegate> delegate; 
@property (nonatomic,__weak,readonly) PGPictureInPictureApplication * application;                                      //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureViewControllerContentContainer> contentContainer;              //@synthesize contentContainer=_contentContainer - In the implementation block
@property (assign,nonatomic) BOOL canStartShowingChrome;                                                                //@synthesize canStartShowingChrome=_canStartShowingChrome - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView; 
@property (assign,nonatomic) long long stashState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)contentViewCornerRadius;
+(void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PGPictureInPictureViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureViewControllerDelegate>)arg1 ;
-(NSArray *)loadedTimeRanges;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(PGPictureInPictureApplication *)application;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(PGPlaybackProgress *)playbackProgress;
-(void)setPlaybackProgress:(PGPlaybackProgress *)arg1 ;
-(long long)controlsStyle;
-(void)setControlsStyle:(long long)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hostedWindowSizeChangeBegan;
-(void)hostedWindowSizeChangeEnded;
-(void)performSuspendAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performResumeAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performStopAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2 ;
-(void)setShowsAlternateActionButtonImage:(BOOL)arg1 ;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performStartAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareStopAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStashState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(void)showChrome:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(long long)stashState;
-(void)_performStartAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stopShowingControlsAnimated:(BOOL)arg1 ;
-(BOOL)showsAlternateActionButtonImage;
-(void)pictureInPictureControlsViewControllerStopButtonTapped:(id)arg1 ;
-(void)pictureInPictureControlsViewControllerActionButtonTapped:(id)arg1 ;
-(void)pictureInPictureControlsViewControllerCancelButtonTapped:(id)arg1 ;
-(BOOL)pictureInPictureControlsViewControllerShouldHandleTapGesture:(id)arg1 ;
-(BOOL)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(id)arg1 ;
-(void)setStashState:(long long)arg1 ;
-(void)setContentContainer:(id<PGPictureInPictureViewControllerContentContainer>)arg1 ;
-(void)setCanStartShowingChrome:(BOOL)arg1 ;
-(void)updateHostedWindowSize:(CGSize)arg1 ;
-(void)updateLayerHostTransform:(CGAffineTransform)arg1 ;
-(UIView *)contentContainerView;
-(id<PGPictureInPictureViewControllerContentContainer>)contentContainer;
-(BOOL)canStartShowingChrome;
-(id)waitForUIFinalizationCompletionBlock;
-(void)setWaitForUIFinalizationCompletionBlock:(id)arg1 ;
@end

