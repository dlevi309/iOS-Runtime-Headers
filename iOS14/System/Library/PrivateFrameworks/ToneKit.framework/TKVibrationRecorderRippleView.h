/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol TKVibrationRecorderStyleProvider, NSCopying;
@class NSMutableArray, NSMutableDictionary, CAAnimation, NSString;

@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate> {

	id<TKVibrationRecorderStyleProvider> _styleProvider;
	CGPoint _currentTouchLocation;
	double _currentTouchStartTime;
	unsigned long long _numberOfRipplesForCurrentTouch;
	BOOL _isTrackingTouch;
	NSMutableArray* _recentTouchesContextQueue;
	NSMutableArray* _reusableTouchContexts;
	double _currentSpeedCoefficient;
	BOOL _needsCurrentSpeedRefresh;
	BOOL _isAnimating;
	id<NSCopying> _displayLinkManagerObserverToken;
	NSMutableArray* _ringLayersQueue;
	NSMutableArray* _reusableRingLayers;
	NSMutableDictionary* _ringLayersByIdentifiers;
	unsigned long long _lastRingLayerIdentifier;
	CAAnimation* _ringEnlargementAnimation;
	double _fingerStillSpeed;
	double _fingerMovingSpeed;
	double _firstRippleInitialRadius;
	double _fadeOutRadius;

}

@property (getter=_isTouchDown,nonatomic,readonly) BOOL _touchDown; 
@property (assign,nonatomic) double fingerStillSpeed;                            //@synthesize fingerStillSpeed=_fingerStillSpeed - In the implementation block
@property (assign,nonatomic) double fingerMovingSpeed;                           //@synthesize fingerMovingSpeed=_fingerMovingSpeed - In the implementation block
@property (assign,nonatomic) double firstRippleInitialRadius;                    //@synthesize firstRippleInitialRadius=_firstRippleInitialRadius - In the implementation block
@property (assign,nonatomic) double fadeOutRadius;                               //@synthesize fadeOutRadius=_fadeOutRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)init;
-(void)_startAnimation;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)_currentSpeed;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyleProvider:(id)arg1 ;
-(void)_stopAnimation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(BOOL)_isTouchDown;
-(void)_refresh:(id)arg1 ;
-(void)setFingerStillSpeed:(double)arg1 ;
-(void)setFingerMovingSpeed:(double)arg1 ;
-(void)setFirstRippleInitialRadius:(double)arg1 ;
-(void)setFadeOutRadius:(double)arg1 ;
-(void)_updateRingEnlargementAnimation;
-(void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(CGPoint)arg2 speed:(double)arg3 ;
-(id)_reusableTouchContextObject;
-(void)_enqueueReusableTouchContextObject:(id)arg1 ;
-(double)fingerStillSpeed;
-(double)fingerMovingSpeed;
-(double)firstRippleInitialRadius;
-(double)fadeOutRadius;
-(id)_reusableRingLayer;
-(void)_enqueueReusableRingLayer:(id)arg1 ;
-(void)_touchBeganAtLocation:(CGPoint)arg1 ;
-(void)_touchMovedToLocation:(CGPoint)arg1 ;
-(void)_touchEndedAtLocation:(CGPoint)arg1 ;
@end

