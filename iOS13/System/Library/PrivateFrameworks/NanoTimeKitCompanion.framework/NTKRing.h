/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKRing : NSObject {

	double _fillFraction;
	double _strokeWidth;
	double _backgroundRingAlpha;
	double _radius;
	long long _ringStyle;

}

@property (assign) double fillFraction;                     //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign) double strokeWidth;                      //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) double backgroundRingAlpha;              //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign) long long ringStyle;                     //@synthesize ringStyle=_ringStyle - In the implementation block
+(id)fillFractionStringForFillFraction:(float)arg1 ;
+(id)fillFractionStringWithSymbolForFillFraction:(float)arg1 ;
+(id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2 ;
-(id)init;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(double)fillFraction;
-(void)setFillFraction:(double)arg1 ;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(double)backgroundRingAlpha;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 ;
-(id)ringImage;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4 ;
-(double)_validFillFraction:(double)arg1 ;
-(void)fillFraction:(double)arg1 ;
-(id)fillFractionString;
-(id)fillFractionStringWithSymbol;
@end

