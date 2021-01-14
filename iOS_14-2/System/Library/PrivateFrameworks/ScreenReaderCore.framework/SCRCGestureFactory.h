/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@protocol SCRCGestureFactoryCallback;
#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject {

	double _stallDistance;
	double _maxDimension;
	double _thumbRegion;
	long long _orientation;
	long long _directions[7];
	CGPoint _axisFlipper;
	double _scaledTrackingDistance;
	BOOL _setTrackingTimer;
	double _flickVelocityThreshold;
	double _tapVelocityThreshold;
	double _echoWaitTime;
	CGRect _tapSpeedRegion;
	double _tapVelocityThresholdForRegion;
	long long _tapSpeedFingerCount;
	BOOL _inTapSpeedRegionForDownEvent;
	CGRect _mainFrame;
	CGRect _gutterFrame;
	double _lastTime;
	double _lastDownTime;
	double _lastGutterDownTime;
	double _lastDegrees;
	double _startDegrees;
	double _startDistance;
	double _potentialTrackingStartTimestamp;
	BOOL _requireUp;
	BOOL _thumbRejectionEnabled;
	long long _state;
	long long _direction;
	double _directionalSlope;
	SCRCFingerState _finger[2];
	unsigned long long _absoluteFingerCount;
	unsigned short _fingerCount;
	unsigned short _lastFingerCount;
	double _distance;
	unsigned long long _tapCount;
	CGRect _tapFrame;
	CGRect _tapMultiFrame;
	id<SCRCGestureFactoryCallback> _trackDelegate;
	id<SCRCGestureFactoryCallback> _tapDelegate;
	id<SCRCGestureFactoryCallback> _gutterUpDelegate;
	id<SCRCGestureFactoryCallback> _splitTapDelegate;
	id<SCRCGestureFactoryCallback> _canSplitTapDelegate;
	id<SCRCGestureFactoryCallback> _didBeginSplitGestureDelegate;
	SCRCTargetSelectorTimer* _trackingTimer;
	SCD_Struct_SC6 _tap;
	SCRCTargetSelectorTimer* _tapTimer;
	SCRCTargetSelectorTimer* _gutterUpTimer;
	SCRCGestureFactory* _splitFactory;
	SCD_Struct_SC7 _split;

}

@property (assign,nonatomic) BOOL thumbRejectionEnabled;              //@synthesize thumbRejectionEnabled=_thumbRejectionEnabled - In the implementation block
-(long long)direction;
-(void)_up;
-(double)velocity;
-(CGPoint)endLocation;
-(double)distance;
-(void)_handleTap;
-(unsigned long long)fingerCount;
-(CGPoint)startLocation;
-(double)vector;
-(long long)gestureState;
-(void)_drag:(id)arg1 ;
-(void)_down:(id)arg1 ;
-(long long)orientation;
-(CGPoint)rawLocation;
-(void)reset;
-(unsigned long long)tapCount;
-(CGRect)mainFrame;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(SCD_Struct_SC8)handleGestureEvent:(id)arg1 ;
-(void)setTapSpeed:(double)arg1 ;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3 ;
-(void)_enterTrackingMode:(id)arg1 ;
-(CGRect)_currentTapRect;
-(void)_updateMultiTapFrame;
-(void)_resetSplit;
-(void)_processUpAndPost:(BOOL)arg1 ;
-(void)_updateTapState;
-(BOOL)_handleSplitTap;
-(SCD_Struct_SC8)captureCurrentState;
-(BOOL)_handleSplitEvent:(id)arg1 ;
-(void)_updateStartWithPoint:(CGPoint)arg1 time:(double)arg2 ;
-(CGRect)tapFrame;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 ;
-(void)setFlickSpeed:(double)arg1 ;
-(double)flickSpeed;
-(void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(CGRect)arg2 fingerCount:(long long)arg3 ;
-(double)tapSpeed;
-(void)_handleGutterUp;
-(double)directionalSlope;
-(unsigned long long)absoluteFingerCount;
-(BOOL)tapIsDown;
-(double)firstFingerPressure;
-(double)firstFingerAltitude;
-(double)firstFingerAzimuth;
-(CGPoint)rawAverageLocation;
-(CGRect)multiTapFrame;
-(CGPoint)tapPoint;
-(CGPoint)tapPointWeightedToSides;
-(double)tapInterval;
-(id)gestureStateString;
-(BOOL)thumbRejectionEnabled;
-(void)setThumbRejectionEnabled:(BOOL)arg1 ;
@end

