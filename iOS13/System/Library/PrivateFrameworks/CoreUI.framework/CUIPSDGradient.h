/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {

	CUIPSDGradientEvaluator* evaluator;
	double drawingAngle;
	unsigned gradientStyle;

}

@property (retain) CUIPSDGradientEvaluator * evaluator; 
@property (assign) double drawingAngle; 
@property (assign) unsigned gradientStyle; 
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 style:(unsigned)arg5 ;
+(id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3 ;
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(BOOL)arg5 ;
-(void)dealloc;
-(CUIPSDGradientEvaluator *)evaluator;
-(void)setEvaluator:(CUIPSDGradientEvaluator *)arg1 ;
-(unsigned)gradientStyle;
-(double)drawingAngle;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setDrawingAngle:(double)arg1 ;
-(void)setGradientStyle:(unsigned)arg1 ;
@end

