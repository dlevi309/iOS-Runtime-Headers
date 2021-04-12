/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

@interface NTKRichComplicationCurveView : NTKRichComplicationShapeView {

	double _curveWidth;
	double _padding;
	double _drawingBeginAngle;
	double _drawingEndAngle;
	BOOL _clockwise;
	double _beginAngle;
	double _endAngle;

}

@property (assign,nonatomic) double beginAngle;              //@synthesize beginAngle=_beginAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) BOOL clockwise;                 //@synthesize clockwise=_clockwise - In the implementation block
-(double)endAngle;
-(void)layoutSubviews;
-(void)setEndAngle:(double)arg1 ;
-(void)_updatePath;
-(CGPoint)_pointAtProgress:(float)arg1 ;
-(void)_setupGradientLayer:(id)arg1 ;
-(double)_angleAtProgress:(float)arg1 ;
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6 ;
-(void)setBeginAngle:(double)arg1 ;
-(void)setClockwise:(BOOL)arg1 ;
-(double)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg1 ;
-(const CGPathRef)_generatePath;
-(BOOL)_shouldReverseGradient;
-(double)beginAngle;
-(BOOL)clockwise;
@end

