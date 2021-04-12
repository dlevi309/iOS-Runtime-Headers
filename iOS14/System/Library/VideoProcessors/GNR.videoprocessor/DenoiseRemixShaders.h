/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class DenoiseRemixFragmentShader;

@interface DenoiseRemixShaders : NSObject {

	DenoiseRemixFragmentShader* _denoiseChroma;
	DenoiseRemixFragmentShader* _denoiseLumaDenoiseRemixChroma;
	DenoiseRemixFragmentShader* _denoiseRemixLumaChroma;
	DenoiseRemixFragmentShader* _remixLuma;
	DenoiseRemixFragmentShader* _denoiseLumaAlpha;
	DenoiseRemixFragmentShader* _calculateLocalGain;
	DenoiseRemixFragmentShader* _writeOutGainMap;

}
-(id)initWithMetal:(id)arg1 vertFunc:(id)arg2 pixelFormatLuma:(unsigned long long)arg3 pixelFormatChroma:(unsigned long long)arg4 pixelFormatLoG:(unsigned long long)arg5 lgaAlgorithm:(int)arg6 ;
@end

