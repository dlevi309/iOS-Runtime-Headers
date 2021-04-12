/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView {

	BOOL _animating;
	double __smallTickRotationRadians;
	double __largeTickRotationRadians;
	CALayer* __smallTickLayer;
	CALayer* __largeTickLayer;
	CAReplicatorLayer* __smallTickReplicatorLayer;
	CAReplicatorLayer* __largeTickReplicatorLayer;
	CALayer* __timerHandLayer;
	CALayer* __timerHandParentLayer;
	SCD_Struct_CA31 _spec;

}

@property (nonatomic,readonly) double _smallTickRotationRadians;                           //@synthesize _smallTickRotationRadians=__smallTickRotationRadians - In the implementation block
@property (nonatomic,readonly) double _largeTickRotationRadians;                           //@synthesize _largeTickRotationRadians=__largeTickRotationRadians - In the implementation block
@property (nonatomic,readonly) CALayer * _smallTickLayer;                                  //@synthesize _smallTickLayer=__smallTickLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _largeTickLayer;                                  //@synthesize _largeTickLayer=__largeTickLayer - In the implementation block
@property (nonatomic,readonly) CAReplicatorLayer * _smallTickReplicatorLayer;              //@synthesize _smallTickReplicatorLayer=__smallTickReplicatorLayer - In the implementation block
@property (nonatomic,readonly) CAReplicatorLayer * _largeTickReplicatorLayer;              //@synthesize _largeTickReplicatorLayer=__largeTickReplicatorLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _timerHandLayer;                                  //@synthesize _timerHandLayer=__timerHandLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _timerHandParentLayer;                            //@synthesize _timerHandParentLayer=__timerHandParentLayer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA31 spec;                                       //@synthesize spec=_spec - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                            //@synthesize animating=_animating - In the implementation block
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)setSpec:(SCD_Struct_CA31)arg1 ;
-(SCD_Struct_CA31)spec;
-(BOOL)_shouldUseAnimations;
-(id)initWithSpec:(SCD_Struct_CA31)arg1 ;
-(id)initWithFrame:(CGRect)arg1 spec:(SCD_Struct_CA31)arg2 ;
-(void)_commonCAMTimelapseShutterRingViewInitializationWithSpec:(SCD_Struct_CA31)arg1 ;
-(double)_rotationRadiansFromTickCount:(long long)arg1 ;
-(double)_tickRadiusForTickSize:(CGSize)arg1 ringSize:(CGSize)arg2 ;
-(void)_removeStartAnimations;
-(void)_removeStopAnimations;
-(void)_addStartAnimations;
-(void)_addStopAnimations;
-(double)_smallTickRotationRadians;
-(double)_rotationZFromTransform:(CATransform3D)arg1 ;
-(double)_largeTickRotationRadians;
-(CALayer *)_smallTickLayer;
-(CALayer *)_largeTickLayer;
-(CAReplicatorLayer *)_smallTickReplicatorLayer;
-(CAReplicatorLayer *)_largeTickReplicatorLayer;
-(CALayer *)_timerHandLayer;
-(CALayer *)_timerHandParentLayer;
@end

