/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProgress:(double)arg1 ;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
-(BOOL)clockwise;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(void)setBeginAngle:(double)arg1 ;
-(void)setClockwise:(BOOL)arg1 ;
-(double)beginAngle;
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6 progressFillStyle:(long long)arg7 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2 ;
@end

