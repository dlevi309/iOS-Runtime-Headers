/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)gradientStyle;
-(double)drawingAngle;
-(void)setDrawingAngle:(double)arg1 ;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setGradientStyle:(unsigned)arg1 ;
-(CUIPSDGradientEvaluator *)evaluator;
-(void)setEvaluator:(CUIPSDGradientEvaluator *)arg1 ;
-(void)dealloc;
@end

