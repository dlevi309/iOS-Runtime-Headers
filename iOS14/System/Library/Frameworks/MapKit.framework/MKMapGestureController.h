/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKVariableDelayTapRecognizerDelegate.h>
#import <libobjc.A.dylib/_MKUserInteractionGestureRecognizerTouchObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKMapGestureControllerDelegate;
@class MKBasicMapView, MKScaleView, MKCompassView, MKRotationFilter, MKVariableDelayTapRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIPanGestureRecognizer, _MKOneHandedZoomGestureRecognizer, _MKZoomingGestureControlConfiguration, _MKConditionalPanRotationGestureRecognizer, _MKConditionalPanZoomGestureRecognizer, _MKConditionalPanTiltGestureRecognizer, _UIInterruptScrollDecelerationGestureRecognizer, _MKDirectionalArrowRecognizer, VKTimedAnimation, VKDynamicAnimation, VKCompoundAnimation, _MKUserInteractionGestureRecognizer, UIRotationGestureRecognizer, MKTiltGestureRecognizer, UITraitCollection, UIGestureRecognizer, NSString;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate> {

	MKBasicMapView* _mapView;
	id<MKMapGestureControllerDelegate> _delegate;
	MKScaleView* _scaleView;
	MKCompassView* _compassView;
	MKRotationFilter* _rotationFilter;
	BOOL _rotationSnappingEnabled;
	MKVariableDelayTapRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerTapGestureRecognizer;
	UILongPressGestureRecognizer* _twoFingerLongPressGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	_MKOneHandedZoomGestureRecognizer* _oneHandedZoomGestureRecognizer;
	_MKZoomingGestureControlConfiguration* _zoomConfiguration;
	CGPoint _panRotateStartPoint;
	CGPoint _panZoomStartPoint;
	UIPanGestureRecognizer* _scaleDragGestureRecognizer;
	_MKConditionalPanRotationGestureRecognizer* _conditionalPanRotationGestureRecognizer;
	_MKConditionalPanZoomGestureRecognizer* _conditionalPanZoomGestureRecognizer;
	_MKConditionalPanTiltGestureRecognizer* _conditionalPanTiltGestureRecognizer;
	_UIInterruptScrollDecelerationGestureRecognizer* _gestureInterruptionRecognizer;
	_MKDirectionalArrowRecognizer* _activeArrowGestureRecognizer;
	_MKDirectionalArrowRecognizer* _arrowZoomGestureRecognizer;
	_MKDirectionalArrowRecognizer* _arrowRotateGestureRecognizer;
	_MKDirectionalArrowRecognizer* _arrowPanGestureRecognizer;
	VKTimedAnimation* _currentArrowAnimation;
	double _arrowZoomSpeed;
	double _arrowZoomStartTimestamp;
	double _pinchFactorAverageInGesture;
	double _lastPinchUpdateTimestamp;
	double _lastScale;
	VKDynamicAnimation* _pinchDecelerationAnimation;
	VKCompoundAnimation* _panDecelerationAnimationGroup;
	long long _gestureCount;
	BOOL _panWithMomentum;
	_MKUserInteractionGestureRecognizer* _touchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	VKDynamicAnimation* _rotationDecelerationAnimation;
	MKTiltGestureRecognizer* _tiltGestureRecognizer;
	VKDynamicAnimation* _tiltDecelerationAnimation;
	BOOL _didStartLongPress;
	BOOL _isPanning;
	BOOL _isPinching;
	UITraitCollection* _traitCollection;
	double _lastZoomPanTranslation;
	CGPoint _scrollTranslation;
	CGPoint _lastArrowScrollTranslationDelta;
	BOOL _isFullRotatingFromArrows;
	double _lastRotationInGestureDelta;
	double _lastRotation;

}

@property (nonatomic,readonly) MKBasicMapView * mapView;                                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<MKMapGestureControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKScaleView * scaleView;                                                           //@synthesize scaleView=_scaleView - In the implementation block
@property (nonatomic,retain) MKCompassView * compassView;                                                       //@synthesize compassView=_compassView - In the implementation block
@property (nonatomic,retain) MKRotationFilter * rotationFilter;                                                 //@synthesize rotationFilter=_rotationFilter - In the implementation block
@property (assign,nonatomic) BOOL rotationSnappingEnabled;                                                      //@synthesize rotationSnappingEnabled=_rotationSnappingEnabled - In the implementation block
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotationEnabled,nonatomic) BOOL rotationEnabled; 
@property (assign,getter=isTiltEnabled,nonatomic) BOOL tiltEnabled; 
@property (assign,nonatomic) BOOL panWithMomentum;                                                              //@synthesize panWithMomentum=_panWithMomentum - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;                             //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;                          //@synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;              //@synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;                         //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * oneHandedZoomGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isScrollEnabled;
-(BOOL)isZoomEnabled;
-(void)setCompassView:(MKCompassView *)arg1 ;
-(void)_handleStandardTilt:(id)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)beginGesturing;
-(void)setPanWithMomentum:(BOOL)arg1 ;
-(void)_handleRotationPan:(id)arg1 ;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(void)stopUserInteractionFromExternalGesture;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)gestureRecognizerTouchesBegan:(id)arg1 ;
-(id<MKMapGestureControllerDelegate>)delegate;
-(void)zoomIn;
-(void)handlePinch:(id)arg1 ;
-(void)_updateRotationGestureForState:(long long)arg1 focusPoint:(CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4 ;
-(void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2 ;
-(BOOL)rotationSnappingEnabled;
-(void)zoomOut;
-(void)handleArrowRotate:(id)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 ;
-(void)handleTwoFingerTap:(id)arg1 ;
-(UIGestureRecognizer *)oneHandedZoomGestureRecognizer;
-(void)handleTilt:(id)arg1 ;
-(void)endGesturing;
-(void)stopDynamicAnimations;
-(void)setRotationSnappingEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<MKMapGestureControllerDelegate>)arg1 ;
-(CGPoint)_snapPointToDevicePixels:(CGPoint)arg1 ;
-(void)_updateZoomGestureForState:(long long)arg1 focusPoint:(CGPoint)arg2 scale:(double)arg3 velocity:(double)arg4 gestureType:(long long)arg5 configuration:(id)arg6 ;
-(BOOL)isRotationEnabled;
-(UILongPressGestureRecognizer *)twoFingerLongPressGestureRecognizer;
-(MKCompassView *)compassView;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(BOOL)tiltGestureRecognizerShouldBegin:(id)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)handleArrowPan:(id)arg1 ;
-(UITapGestureRecognizer *)twoFingerTapGestureRecognizer;
-(void)handleTwoFingerLongPress:(id)arg1 ;
-(MKScaleView *)scaleView;
-(void)_clearGesture:(id)arg1 ;
-(void)handleTouch:(id)arg1 ;
-(void)setTiltEnabled:(BOOL)arg1 ;
-(void)cancelZoomInOrOut;
-(double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(void)handleArrowZoom:(id)arg1 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3 ;
-(void)_setTraitCollection:(id)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)gestureRecognizerTouchesEnded:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)_handleZoomPan:(id)arg1 ;
-(void)_handleInterrupt:(id)arg1 ;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)_setOneHandedZoomGestureConfiguration:(id)arg1 ;
-(void)startUserInteractionFromExternalGesture;
-(void)clearGestureRecognizersInFlight;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setRotationFilter:(MKRotationFilter *)arg1 ;
-(void)gestureRecognizerTouchesCanceled:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isTiltEnabled;
-(void)handleRotation:(id)arg1 ;
-(void)setScaleView:(MKScaleView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(MKBasicMapView *)mapView;
-(void)handlePanZoom:(id)arg1 ;
-(MKRotationFilter *)rotationFilter;
-(void)dealloc;
-(BOOL)panWithMomentum;
@end

