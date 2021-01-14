/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationCurveView;

@interface NTKRichComplicationCurvedProgressView : NTKRichComplicationProgressView {

	double _curveWidth;
	long long _progressFillStyle;
	NTKRichComplicationCurveView* _backgroundView;
	NTKRichComplicationCurveView* _foregroundView;
	BOOL _clockwise;
	double _beginAngle;
	double _endAngle;

}

@property (assign,nonatomic) double beginAngle;              //@synthesize beginAngle=_beginAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) BOOL clockwise;                 //@synthesize clockwise=_clockwise - In the implementation block
-(double)endAngle;
-(void)setProgress:(double)arg1 ;
-(void)setEndAngle:(double)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(void)setBeginAngle:(double)arg1 ;
-(void)setClockwise:(BOOL)arg1 ;
-(double)beginAngle;
-(BOOL)clockwise;
-(id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 beginAngle:(double)arg4 endAngle:(double)arg5 forDevice:(id)arg6 withFilterStyle:(long long)arg7 progressFillStyle:(long long)arg8 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2 ;
@end

