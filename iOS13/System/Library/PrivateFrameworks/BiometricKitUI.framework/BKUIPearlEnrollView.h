/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/BKUIVideoCaptureSesssionDelegate.h>

@protocol BKUIPearlEnrollViewDelegate;
@class BKUIPearlVideoCaptureSession, UIView, UILabel, NSDate, NSString, NSTimer, AVPlayer, NSArray, BKUIPearlCrossHairsView, BKUIPearlPositioningGuideView, CAShapeLayer, UILayoutGuide, UIImageView, BKUIPearlMovieLoopView, BKUIPearlPillContainerView;

@interface BKUIPearlEnrollView : UIView <BKUIVideoCaptureSesssionDelegate> {

	BKUIPearlVideoCaptureSession* _videoCaptureSession;
	BOOL _didStartCapture;
	BOOL _activated;
	UIView* _cameraShadeView;
	BOOL _progressiveBlur;
	double _currentCorrectedPitch;
	BOOL _blurInProgress;
	UILabel* _repositionPhoneLabel;
	NSDate* _startTime;
	unsigned long long _frameCount;
	NSString* _debugFrameInformation;
	NSString* _debugTemplateInformation;
	NSString* _debugStatusInformation;
	double _pitchCorrectionSamples;
	double _pitchCorrection;
	unsigned long long _correctionSamplesCount;
	double _pitchMin;
	double _pitchMax;
	unsigned long long _fillHoldoffFrameCount;
	BOOL _stateTransitionInProgress;
	NSDate* _stateStart;
	NSTimer* _nudgeTimer;
	BOOL _nudging;
	unsigned long long _nudgesNudged;
	BOOL _nudgesPaused;
	AVPlayer* _tutorialPlayer;
	NSArray* _entryAnimationImages;
	BOOL _entryAnimationAlreadyRan;
	BKUIPearlCrossHairsView* _crossHairs;
	BKUIPearlPositioningGuideView* _positioningGuide;
	UIView* _circleMaskView;
	CAShapeLayer* _circleMaskLayer;
	UIView* _roundedRectMaskView;
	CAShapeLayer* _roundedRectMaskLayer;
	UILabel* _debugLabel;
	unsigned long long _pendingRaiseLowerGuidanceState;
	BOOL _raiseLowerGuidanceStatePending;
	NSTimer* _raiseLowerGuidanceDelayTimer;
	BOOL _debugOverlayVisible;
	BOOL _active;
	int _state;
	id<BKUIPearlEnrollViewDelegate> _delegate;
	UILayoutGuide* _portalLayoutGuide;
	UIImageView* _entryAnimationView;
	BKUIPearlMovieLoopView* _tutorialMovieView;
	BKUIPearlPillContainerView* _pillContainer;
	NSArray* _portalLayoutGuideConstraints;

}

@property (nonatomic,retain) UIImageView * entryAnimationView;                             //@synthesize entryAnimationView=_entryAnimationView - In the implementation block
@property (nonatomic,retain) BKUIPearlMovieLoopView * tutorialMovieView;                   //@synthesize tutorialMovieView=_tutorialMovieView - In the implementation block
@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BKUIPearlPillContainerView * pillContainer;                   //@synthesize pillContainer=_pillContainer - In the implementation block
@property (nonatomic,retain) NSArray * portalLayoutGuideConstraints;                       //@synthesize portalLayoutGuideConstraints=_portalLayoutGuideConstraints - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIPearlEnrollViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL debugOverlayVisible;                                     //@synthesize debugOverlayVisible=_debugOverlayVisible - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * portalLayoutGuide;                          //@synthesize portalLayoutGuide=_portalLayoutGuide - In the implementation block
-(void)dealloc;
-(id<BKUIPearlEnrollViewDelegate>)delegate;
-(void)setDelegate:(id<BKUIPearlEnrollViewDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(int)state;
-(void)setActive:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(BOOL)active;
-(void)setBackgroundColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateWithProgress:(id)arg1 ;
-(void)startCapture;
-(void)_updateDebugOverlay;
-(id)previewLayer;
-(void)willDisappear;
-(void)setSplashImageView:(id)arg1 ;
-(double)percentOfPillsCompleted;
-(void)postEnrollDeActivate;
-(void)setState:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithVideoCaptureSession:(id)arg1 ;
-(void)setEntryAnimationImages:(id)arg1 ;
-(void)preEnrollActivate;
-(UILayoutGuide *)portalLayoutGuide;
-(void)setNudgesPaused:(BOOL)arg1 ;
-(BOOL)debugOverlayVisible;
-(void)setDebugOverlayVisible:(BOOL)arg1 ;
-(void)updateWithFaceState:(id)arg1 ;
-(void)setFailed;
-(void)setMovieViewHidden:(BOOL)arg1 ;
-(void)updateEntryAnimationViewForOrientationChange;
-(BOOL)useRegularPadLayout;
-(CGPoint)portalCenter;
-(UIImageView *)entryAnimationView;
-(BOOL)expectsRunningVideoCaptureSession:(id)arg1 ;
-(void)setPitch:(double)arg1 yaw:(double)arg2 ;
-(double)pillRingRadius;
-(void)_endAndCleanupEnrollSessionIfNeeded;
-(void)_stopNudgeTimer;
-(void)setCameraBlurred:(BOOL)arg1 ;
-(void)_startNudgeTimer;
-(void)_cleanupUIState;
-(void)_animateToEntryAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToTutorialWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToNeedsPositioningFromState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_animateToNeedsCenterBinWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToFirstScanWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToFirstScanCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToSecondScanWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToSecondScanCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToFinishedWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToPartialCaptureWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePortalLayoutGuide;
-(void)_animateToState:(int)arg1 fromState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setState:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCorrectionEstimates:(double)arg1 yaw:(double)arg2 ;
-(void)_updateRaiseLowerGuidanceLabelIfNeededForPitch:(double)arg1 ;
-(double)_progressiveBlurAmountForPitch:(double)arg1 ;
-(void)setCameraBlurAmount:(double)arg1 useShade:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_recordDataFrameWithFaceState:(id)arg1 ;
-(BKUIPearlPillContainerView *)pillContainer;
-(void)_setRaiseLowerGuidanceLabelState:(unsigned long long)arg1 ;
-(double)tutorialRingRadius;
-(double)portalRadius;
-(CGSize)tutorialMovieSize;
-(CGPoint)portalOffset;
-(NSArray *)portalLayoutGuideConstraints;
-(void)setPortalLayoutGuideConstraints:(NSArray *)arg1 ;
-(id)_maskPathWithRadius:(double)arg1 inFrame:(CGRect)arg2 ;
-(void)_nudgeIfNecessary;
-(void)_runTutorialLoopWithDuration:(double)arg1 delay:(double)arg2 loopDelay:(double)arg3 ;
-(double)_nonOccludingCircleMaskRadius;
-(id)_enrollMaskPathWithRadius:(double)arg1 ;
-(CATransform3D)_needsPositioningPreviewTransform;
-(BOOL)_animateCircleMaskWithPositioningGuide;
-(CATransform3D)_scanningAndPartialCapturePreviewTransform;
-(void)_animateToScanningStateWithCompletion:(/*^block*/id)arg1 ;
-(double)completedRingRadius;
-(double)_previewZoomLevel;
-(void)setEntryAnimationView:(UIImageView *)arg1 ;
-(BKUIPearlMovieLoopView *)tutorialMovieView;
-(void)setTutorialMovieView:(BKUIPearlMovieLoopView *)arg1 ;
-(void)setPillContainer:(BKUIPearlPillContainerView *)arg1 ;
@end

