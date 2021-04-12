/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue, OS_dispatch_source, PUCropGestureHandlerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSObject, NUCropModel;

@interface PUCropGestureHandler : NSObject {

	CGVector _panRubberBandDelta;
	CGVector _panSlideVelocity;
	NSObject*<OS_dispatch_queue> _animationQueue;
	NSObject*<OS_dispatch_source> _pitchYawRollAnimationTimer;
	NSObject*<OS_dispatch_source> _panAnimationTimer;
	NSObject*<OS_dispatch_source> _zoomAnimationTimer;
	SCD_Struct_PU37 _panState;
	SCD_Struct_PU38 _pinchState;
	SCD_Struct_PU39 _pitchYawRollState;
	CGRect _panPinchStartRect;
	double _gestureStartPitch;
	double _gestureStartYaw;
	double _gestureStartRoll;
	int _pitchYawRollAnimationTimerCountdown;
	BOOL _inPanState;
	BOOL _inZoomState;
	BOOL _isDebugging;
	BOOL _isLogging;
	BOOL _delegateQueueIsMain;
	BOOL _animateEndGesture;
	id<PUCropGestureHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	double _maximumZoomScale;
	NUCropModel* _cropModel;
	double _zoomOverflow;
	long long _gesture;
	CGVector _panRubberBandOffset;

}

@property (__weak) id<PUCropGestureHandlerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign) double maximumZoomScale;                                           //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (retain,readonly) NUCropModel * cropModel;                                  //@synthesize cropModel=_cropModel - In the implementation block
@property (readonly) CGVector panRubberBandOffset;                                    //@synthesize panRubberBandOffset=_panRubberBandOffset - In the implementation block
@property (readonly) double zoomOverflow;                                             //@synthesize zoomOverflow=_zoomOverflow - In the implementation block
@property (readonly) long long gesture;                                               //@synthesize gesture=_gesture - In the implementation block
-(void)setAnimateEndGestureEnabled:(BOOL)arg1 ;
-(void)_setGestureTypePan;
-(void)_setGestureTypePinch;
-(void)_clearGestureTypePitchYawRoll;
-(void)_clearGestureTypePan;
-(void)_clearGestureTypePinch;
-(void)_dispatchSyncOnDelegateQueue:(/*^block*/id)arg1 ;
-(void)_setGestureType:(long long)arg1 ;
-(void)zoomWithScale:(double)arg1 rubberband:(BOOL)arg2 ;
-(void)_startPitchYawRollGestureTimeoutTimer;
-(void)_zoomWithScale:(double)arg1 startCropRect:(CGRect)arg2 ;
-(void)_constrainedMoveCropRectBy:(CGVector)arg1 startRect:(CGRect)arg2 rubberband:(BOOL)arg3 ;
-(void)_stopAnimatedZoomTimer;
-(void)_stopAnimatedZoom;
-(void)_stopAnimatedPanTimer;
-(void)_stopAnimatedPan;
-(void)beginPan;
-(id<PUCropGestureHandlerDelegate>)delegate;
-(CGSize)masterImageSize;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)setPitchAngle:(double)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<PUCropGestureHandlerDelegate>)arg1 ;
-(long long)gesture;
-(void)_setZoomScale:(double)arg1 ;
-(void)beginZoom;
-(double)maximumZoomScale;
-(void)_didTrack;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)_zoomScaleForModelCropRect:(CGRect)arg1 ;
-(double)_zoomScaleForCurrentCropRectAndModelRect;
-(void)endZoomWithScale:(double)arg1 ;
-(void)zoomWithScale:(double)arg1 ;
-(void)endPanWithTranslation:(CGVector)arg1 velocity:(CGVector)arg2 ;
-(void)panWithTranslation:(CGVector)arg1 velocity:(CGVector)arg2 ;
-(double)zoomOverflow;
-(id)initWithCropModel:(id)arg1 ;
-(CGVector)panRubberBandOffset;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setRollAngle:(double)arg1 ;
-(void)reset;
-(void)setYawAngle:(double)arg1 ;
-(NUCropModel *)cropModel;
-(id)delgateQueue;
@end

