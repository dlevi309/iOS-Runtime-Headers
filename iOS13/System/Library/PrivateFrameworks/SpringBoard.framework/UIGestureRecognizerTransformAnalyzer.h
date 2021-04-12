/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(id)analyzeTouches:(id)arg1 ;
-(int)dominantComponent;
-(void)setPinchingWeight:(double)arg1 ;
-(void)setRotationWeight:(double)arg1 ;
-(void)setTranslationWeight:(double)arg1 ;
-(double)translationWeight;
-(double)pinchingWeight;
-(double)rotationWeight;
-(UIGestureRecognizerTransformAnalyzerInfo *)smoothedInfo;
@end

