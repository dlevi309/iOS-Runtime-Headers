/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class CAGradientLayer, CAShapeLayer;

@interface CAMStageLightAnimator : NSObject {

	CAGradientLayer* _gradientLayer;
	CAShapeLayer* _circleLayer;
	unsigned long long _state;
	unsigned long long __appearingAnimationCount;
	CGRect _circleBaseFrame;

}

@property (assign,setter=_setAppearingAnimationCount:,nonatomic) unsigned long long _appearingAnimationCount;              //@synthesize _appearingAnimationCount=__appearingAnimationCount - In the implementation block
@property (getter=_isAppearing,nonatomic,readonly) BOOL _appearing; 
@property (nonatomic,readonly) CAGradientLayer * gradientLayer;                                                            //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * circleLayer;                                                                 //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGRect circleBaseFrame;                                                                       //@synthesize circleBaseFrame=_circleBaseFrame - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(BOOL)_isAppearing;
-(void)setCircleBaseFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_animateAppearing;
-(SCD_Struct_CA23)_circleGeometryForState:(unsigned long long)arg1 ;
-(SCD_Struct_CA24)_gradientGeometryForState:(unsigned long long)arg1 ;
-(SCD_Struct_CA25)_gradientPropertiesForGeometry:(SCD_Struct_CA24)arg1 ;
-(void)_animateGradientToProperties:(SCD_Struct_CA25)arg1 duration:(double)arg2 timing:(id)arg3 ;
-(void)_animateCircleToGeometry:(SCD_Struct_CA23)arg1 duration:(double)arg2 timing:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_animateCircleColorWithDuration:(double)arg1 timing:(id)arg2 ;
-(void)_animateSearchingIfNeededFromState:(unsigned long long)arg1 ;
-(void)_animateBounceIfNeeded;
-(void)_animateHidden;
-(unsigned long long)_appearingAnimationCount;
-(void)_setAppearingAnimationCount:(unsigned long long)arg1 ;
-(void)_didFinishAppearing;
-(double)_circleLineWidth;
-(void)_animateGradientFromProperties:(SCD_Struct_CA25)arg1 toProperties:(SCD_Struct_CA25)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 ;
-(void)_animateCircleFromGeometry:(SCD_Struct_CA23)arg1 toGeometry:(SCD_Struct_CA23)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(SCD_Struct_CA23)_currentCircleGeometry;
-(SCD_Struct_CA25)_currentGradientProperties;
-(void)_animateGradientProperties:(SCD_Struct_CA25*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 ;
-(void)_animateCircleGeometry:(SCD_Struct_CA23*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(CGRect)circleBaseFrame;
-(CAShapeLayer *)circleLayer;
-(id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2 ;
-(void)setCircleBaseFrame:(CGRect)arg1 ;
@end

