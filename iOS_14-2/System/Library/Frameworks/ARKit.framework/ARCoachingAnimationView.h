/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ARKit/ARCoachingUpdateManagerDelegate.h>

@class CAMetalLayer, ARCoachingUpdateManager, ARCoachingGlyphRenderer, NSString;

@interface ARCoachingAnimationView : UIView <ARCoachingUpdateManagerDelegate> {

	CAMetalLayer* _metalLayer;
	ARCoachingUpdateManager* _updateManager;
	ARCoachingGlyphRenderer* _renderer;
	 _lastCameraRight;
	 _lastCameraTranslation;
	 _rotationStartCameraRight;
	 _rotationStartCameraTranslation;
	float _cubeAngle;
	BOOL _isRotating;
	BOOL _wasRotating;
	double _nextStateTime;
	long long _lastUpdateState;
	long long _animationState;

}

@property (assign,nonatomic) long long animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnimationState:(long long)arg1 ;
-(long long)animationState;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupView;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2 ;
-(void)resizeForDrawable:(id)arg1 ;
-(void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3 ;
-(void)clampCubeToQuarterRotation;
-(void)updateMetalLayer;
-(void)updateCubeRotation:(id)arg1 motionTracker:(id)arg2 ;
-(double)calcNextAnimationSwitchTime:(double)arg1 forState:(unsigned long long)arg2 ;
-(void)updateAlternatingPlanes:(double)arg1 ;
-(void)updateVerticalClamp:(double)arg1 ;
-(void)startCoachingAnimation:(long long)arg1 ;
-(void)killCoachingAnimation;
-(void)updateWithFrame:(id)arg1 motionTracker:(id)arg2 ;
-(void)orientationChanged;
@end

