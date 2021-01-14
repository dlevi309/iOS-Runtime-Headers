/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKColorPalette.h>

@interface GKImageColorPalette : GKColorPalette {

	unsigned _hueSpread;
	unsigned _saturationSpread;
	unsigned _brightnessSpread;
	unsigned _grayscaleSpread;
	HSVColor* _imageHSVMap;
	CGSize _imageSize;
	double _borderPercentageForBorderDetection;
	unsigned _hueHistogram[360];
	unsigned _saturationHistogram[256];
	unsigned _brightnessHistogram[256];

}
-(id)initWithImage:(id)arg1 ;
-(void)reset;
-(BOOL)analyzeImage:(CGImageRef)arg1 ;
-(void)clearMainHistograms;
-(void)clearSaturationAndBrightnessHistograms;
-(void)iterateOverPixelsWithBlock:(/*^block*/id)arg1 forHue:(unsigned)arg2 ;
-(unsigned)weightHistogram:(unsigned*)arg1 size:(unsigned)arg2 spread:(unsigned)arg3 ;
-(void)generateHSVMapWithContext:(CGContextRef)arg1 ;
-(void)findBrightColors;
-(void)printHistogram:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
@end

