/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

	double _lowPassTranslationMagnitudeDelta;
	double _lowPassScaleDelta;
	double _lowPassRotationDelta;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	long long _dominantComponent;

}

@property (nonatomic,readonly) long long dominantComponent;              //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) double translationWeight;                   //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) double pinchingWeight;                      //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) double rotationWeight;                      //@synthesize rotationWeight=_rotationWeight - In the implementation block
-(id)init;
-(void)setPinchingWeight:(double)arg1 ;
-(void)analyzeTouches:(id)arg1 ;
-(void)setRotationWeight:(double)arg1 ;
-(void)setTranslationWeight:(double)arg1 ;
-(long long)dominantComponent;
-(void)reset;
-(double)rotationWeight;
-(double)translationWeight;
-(double)pinchingWeight;
@end

