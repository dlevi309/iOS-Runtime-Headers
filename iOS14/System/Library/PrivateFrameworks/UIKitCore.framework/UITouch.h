/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIResponderForwardable.h>
#import <UIKitCore/_UIEventComponent.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIWindow, UIView, NSMutableArray, _UITouchPredictor, NSArray, NSNumber, UIResponder, NSString;

@interface UITouch : NSObject <_UIResponderForwardable, _UIEventComponent> {

	double _movementMagnitudeSquared;
	long long _phase;
	unsigned long long _tapCount;
	long long _edgeType;
	unsigned long long _edgeAim;
	unsigned long long _precision;
	unsigned _touchIdentifier;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	CGPoint _preciseLocationInWindow;
	CGPoint _precisePreviousLocationInWindow;
	double _previousPressure;
	long long _pathIndex;
	unsigned char _pathIdentity;
	double _pathMajorRadius;
	double _majorRadiusTolerance;
	double _pressure;
	double _maxObservedPressure;
	float _zGradient;
	SCD_Struct_UI20 _touchFlags;
	_UITouchPredictor* _touchPredictor;
	BOOL _eaten;
	BOOL _needsForceUpdate;
	BOOL _hasForceUpdate;
	unsigned char _forceStage;
	BOOL __expectedToBecomeDrag;
	double _timestamp;
	long long _forceCorrelationToken;
	double _maximumPossiblePressure;
	unsigned long long _senderID;
	IOHIDEventRef _hidEvent;
	double _altitudeAngle;
	long long _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	double _azimuthAngleInCADisplay;
	double _azimuthAngleInWindow;
	double _initialTouchTimestamp;
	CGSize _displacement;

}

@property (assign,setter=_setPathIndex:,nonatomic) long long _pathIndex;                            //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                  //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) double _pressure;                                                    //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setZGradient:,nonatomic) float _zGradient;                                //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) long long _edgeType;                              //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEdgeAim:,nonatomic) unsigned long long _edgeAim;                       //@synthesize edgeAim=_edgeAim - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                     //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                          //@synthesize hidEvent=_hidEvent - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                                          //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (assign,setter=_setForceStage:,nonatomic) unsigned char _forceStage;                      //@synthesize forceStage=_forceStage - In the implementation block
@property (assign,setter=_setIsPointerTouch:,nonatomic) BOOL _isPointerTouch; 
@property (assign,setter=_setIsRestingTouch:,nonatomic) BOOL _isRestingTouch; 
@property (assign,setter=_setIsTapToClick:,nonatomic) BOOL _isTapToClick; 
@property (nonatomic,readonly) double majorRadius; 
@property (nonatomic,readonly) double majorRadiusTolerance; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double maximumPossibleForce; 
@property (nonatomic,readonly) double altitudeAngle; 
@property (nonatomic,readonly) NSNumber * estimationUpdateIndex; 
@property (nonatomic,readonly) long long estimatedProperties; 
@property (nonatomic,readonly) long long estimatedPropertiesExpectingUpdates; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(long long)arg2 view:(id)arg3 ;
-(double)force;
-(CGPoint)_locationInSceneReferenceSpace;
-(long long)info;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)_abandonForwardingRecord;
-(BOOL)_isAbandoningForwardingRecord;
-(double)timestamp;
-(IOHIDEventRef)_hidEvent;
-(BOOL)_edgeForceActive;
-(BOOL)_edgeForcePending;
-(id)_forwardingRecord;
-(unsigned long long)_senderID;
-(unsigned long long)_edgeAim;
-(unsigned)_touchIdentifier;
-(UIResponder *)_responder;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)_mutableForwardingRecord;
-(unsigned char)_forceStage;
-(NSString *)description;
-(void)_setEdgeAim:(unsigned long long)arg1 ;
-(UIView *)view;
-(long long)_edgeType;
-(long long)_forwardablePhase;
-(UIWindow *)window;
-(double)_pressure;
-(BOOL)isDelayed;
-(long long)type;
-(void)_clearForReenteringHoverInWindow:(id)arg1 ;
-(void)_setPreviousTouch:(id)arg1 ;
-(void)setIsDelayed:(BOOL)arg1 ;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
-(id)_phaseDescription;
-(CGVector)azimuthUnitVectorInView:(id)arg1 ;
-(CGPoint)preciseLocationInView:(id)arg1 ;
-(double)azimuthAngleInView:(id)arg1 ;
-(CGPoint)precisePreviousLocationInView:(id)arg1 ;
-(double)altitudeAngle;
-(NSNumber *)estimationUpdateIndex;
-(long long)estimatedProperties;
-(long long)estimatedPropertiesExpectingUpdates;
-(BOOL)_isTapToClick;
-(void)_setType:(long long)arg1 ;
-(void)_clearGestureRecognizers;
-(void)_setIsPointerTouch:(BOOL)arg1 ;
-(BOOL)_isRestingTouch;
-(void)_setIsRestingTouch:(BOOL)arg1 ;
-(void)_setIsTapToClick:(BOOL)arg1 ;
-(void)_setPathIndex:(long long)arg1 ;
-(void)_setEdgeType:(long long)arg1 ;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(double)majorRadiusTolerance;
-(void)_setZGradient:(float)arg1 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setForceStage:(unsigned char)arg1 ;
-(long long)_responderForwardableType;
-(long long)_pathIndex;
-(id)_clone;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(float)_zGradient;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(double)majorRadius;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(long long)_compareIndex:(id)arg1 ;
-(NSArray *)gestureRecognizers;
-(void)_loadStateFromTouch:(id)arg1 ;
-(long long)phase;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(unsigned char)_pathIdentity;
-(float)_pathMajorRadius;
-(id)_gestureRecognizers;
-(void)_setResponder:(id)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(double)initialTouchTimestamp;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)tapCount;
-(BOOL)_isPointerTouch;
-(double)maximumPossibleForce;
-(void)dealloc;
-(void)_setForwardablePhase:(long long)arg1 ;
@end

