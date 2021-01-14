/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol UITimingCurveProvider;
@interface JFXCompositionPlayerViewControllerAnimationProperties : NSObject {

	BOOL _shouldScale;
	double _animationDuration;
	id<UITimingCurveProvider> _timingParameters;

}

@property (assign,nonatomic) double animationDuration;                                //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldScale;                                        //@synthesize shouldScale=_shouldScale - In the implementation block
@property (nonatomic,retain) id<UITimingCurveProvider> timingParameters;              //@synthesize timingParameters=_timingParameters - In the implementation block
-(double)animationDuration;
-(id<UITimingCurveProvider>)timingParameters;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)shouldScale;
-(void)setShouldScale:(BOOL)arg1 ;
-(void)setTimingParameters:(id<UITimingCurveProvider>)arg1 ;
@end

