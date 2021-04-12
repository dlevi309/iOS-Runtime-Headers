/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject {

	UIGestureRecognizerTransformAnalyzerInfo* _smoothedInfo;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	int _dominantComponent;

}

@property (nonatomic,readonly) int dominantComponent;                                                //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) double translationWeight;                                               //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) double pinchingWeight;                                                  //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) double rotationWeight;                                                  //@synthesize rotationWeight=_rotationWeight - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizerTransformAnalyzerInfo * smoothedInfo;              //@synthesize smoothedInfo=_smoothedInfo - In the implementation block
-(id)init;
-(void)setPinchingWeight:(double)arg1 ;
-(id)analyzeTouches:(id)arg1 ;
-(void)setRotationWeight:(double)arg1 ;
-(void)setTranslationWeight:(double)arg1 ;
-(int)dominantComponent;
-(void)reset;
-(double)rotationWeight;
-(double)translationWeight;
-(double)pinchingWeight;
-(UIGestureRecognizerTransformAnalyzerInfo *)smoothedInfo;
@end

