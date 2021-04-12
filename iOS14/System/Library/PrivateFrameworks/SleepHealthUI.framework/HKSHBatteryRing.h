/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/


@interface HKSHBatteryRing : NSObject {

	double _fillFraction;
	double _strokeWidth;
	double _backgroundRingAlpha;
	double _radius;

}

@property (assign) double fillFraction;                     //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign) double strokeWidth;                      //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) double backgroundRingAlpha;              //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign) double radius;                           //@synthesize radius=_radius - In the implementation block
-(void)setRadius:(double)arg1 ;
-(id)init;
-(id)fillColor;
-(double)radius;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setFillFraction:(double)arg1 ;
-(id)initWithFillFraction:(double)arg1 radius:(double)arg2 strokeWidth:(double)arg3 ;
-(double)_validFillFraction:(double)arg1 ;
-(long long)fillFractionPercent;
-(id)ringImage;
-(id)fillFractionString;
-(double)fillFraction;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
@end

