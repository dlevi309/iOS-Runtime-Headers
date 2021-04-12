/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <SceneKit/SCNView.h>

@protocol AVTViewFaceTrackingDelegate, SCNCaptureDeviceOutputConsumer;
@class AVTAvatar, SCNNode, AVTAvatarEnvironment, AVTFaceTracker, SCNTechnique, AVTARMaskRenderer, NSTimer, AVTHUDView, NSLock;

@interface AVTView : SCNView {

	unsigned long long _currentExpressionIndex[100];
	AVTAvatar* _avatar;
	SCNNode* _avatarNode;
	BOOL _lockLookAt;
	AVTAvatarEnvironment* _environment;
	AVTFaceTracker* _faceTracker;
	BOOL _enableFaceTracking;
	BOOL _faceIsTracked;
	BOOL _captureImageIsTooDark;
	BOOL _isSensorCovered;
	BOOL _directRetargetingMode;
	id<AVTViewFaceTrackingDelegate> _faceTrackingDelegate;
	BOOL _arMode;
	id<SCNCaptureDeviceOutputConsumer> _arCaptureDeviceOutputConsumer;
	SCNTechnique* _arMaskTechnique;
	AVTARMaskRenderer* _arMaskRenderer;
	CVMetalTextureCacheRef _arMaskTextureCache;
	unsigned long long _lastTrackingUpdateTimestamp;
	unsigned long long _noTrackingFrameCount;
	double _currentlyRenderedTrackingDate;
	SCD_Struct_AV17* _perfTimes;
	double _perfPacketUpdateTimestamp;
	BOOL _packetNeedRecording;
	BOOL _showPerfHUD;
	BOOL _enableReticle;
	int _droppedFrameCount;
	NSTimer* _perfTimeRefreshTimer;
	AVTHUDView* _debugView;
	NSLock* _lock;
	AVTAvatar* _lastRenderedAvatar;
	BOOL _faceTrackingPaused;

}

@property (nonatomic,retain) AVTAvatar * avatar; 
@property (assign,nonatomic) BOOL enableFaceTracking; 
@property (assign,getter=faceTrackingIsPaused,nonatomic) BOOL faceTrackingPaused;              //@synthesize faceTrackingPaused=_faceTrackingPaused - In the implementation block
@property (nonatomic,readonly) BOOL faceIsTracked;                                             //@synthesize faceIsTracked=_faceIsTracked - In the implementation block
@property (nonatomic,readonly) BOOL captureImageIsTooDark; 
@property (getter=isSensorCovered,nonatomic,readonly) BOOL sensorCovered; 
@property (assign,nonatomic) BOOL arMode; 
@property (assign,nonatomic) BOOL enableReticle;                                               //@synthesize enableReticle=_enableReticle - In the implementation block
+(id)snapshotAVTView:(id)arg1 matchingViewSize:(id)arg2 highQuality:(BOOL)arg3 ;
-(void)downcastWithAVTViewHandler:(/*^block*/id)arg1 recordViewHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)environment;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)interfaceOrientation;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setup;
-(AVTAvatar *)avatar;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(id)snapshotWithSize:(CGSize)arg1 ;
-(void)updateInterfaceOrientation;
-(void)setEnableFaceTracking:(BOOL)arg1 ;
-(BOOL)enableFaceTracking;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)updateAtTime:(double)arg1 ;
-(void)_UIOrientationDidChangeNotification:(id)arg1 ;
-(void)_renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(void)_renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(void)_renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)_drawAtTime:(double)arg1 ;
-(id)snapshotWithSize:(CGSize)arg1 scaleFactor:(float)arg2 options:(id)arg3 ;
-(id)snapshotWithSize:(CGSize)arg1 scaleFactor:(float)arg2 ;
-(void)setShowPerfHUD:(BOOL)arg1 ;
-(void)setEnableReticle:(BOOL)arg1 ;
-(void)setFaceTrackingDelegate:(id)arg1 ;
-(BOOL)faceIsTracked;
-(void)setFaceTrackingPaused:(BOOL)arg1 ;
-(BOOL)isSensorCovered;
-(BOOL)captureImageIsTooDark;
-(id)faceTracker;
-(void)setFaceIsTracked:(BOOL)arg1 ;
-(void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2 ;
-(void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2 ;
-(BOOL)directRetargetingMode;
-(void)setSensorCovered:(BOOL)arg1 ;
-(void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2 ;
-(void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3 ;
-(id)arSession;
-(BOOL)faceTrackingIsPaused;
-(void)setDirectRetargetingMode:(BOOL)arg1 ;
-(BOOL)arMode;
-(void)setArMode:(BOOL)arg1 ;
-(void)_resetFaceToRandomPosition;
-(void)setupOrientation;
-(void)_avtCommonInit;
-(void)_updateFocal;
-(void)_updateAvatarForARMode:(BOOL)arg1 ;
-(BOOL)enableReticle;
-(void)_enablePhysics:(BOOL)arg1 ;
-(void)_animateToNoTrackingState:(BOOL)arg1 ;
-(void)didLostTrackingForAWhile;
-(void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1 ;
-(BOOL)allowTrackSmoothing;
-(void)lockAvatar;
-(void)unlockAvatar;
-(void)avatarDidChange;
-(void)_fireTrackingLoss;
-(void)setCaptureImageIsTooDark:(BOOL)arg1 ;
-(id)faceTrackingDelegate;
-(void)_delayedTrackingLoss;
-(void)_cancelDelayedtrackingLoss;
-(void)updateForChangedFaceTrackingPaused;
-(void)_refreshPerfTimesInfo;
-(double)currentAudioTime;
-(BOOL)isDoubleBuffered;
-(BOOL)showPerfHUD;
-(void)_willRecord;
-(void)setFaceTracker:(id)arg1 ;
-(BOOL)faceIsFullyActive;
-(void)warmupMemoji;
-(id)transitionTexture;
-(double)currentlyRenderedTrackingDate;
@end

