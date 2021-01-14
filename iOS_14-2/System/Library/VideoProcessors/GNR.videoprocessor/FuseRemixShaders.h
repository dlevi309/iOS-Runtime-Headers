/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class FuseRemixFragmentShader;

@interface FuseRemixShaders : NSObject {

	FuseRemixFragmentShader* _fuseLuma;
	FuseRemixFragmentShader* _fuseChroma;
	FuseRemixFragmentShader* _fuseRemixLuma;
	FuseRemixFragmentShader* _fuseRemixChroma;
	FuseRemixFragmentShader* _blackSubtraction;

}
-(id)initWithMetal:(id)arg1 pixelFormatLuma:(unsigned long long)arg2 pixelFormatChroma:(unsigned long long)arg3 fusionType:(int)arg4 fixPyramidAlignment:(BOOL)arg5 staticOIS:(BOOL)arg6 reduceOisGhosting:(BOOL)arg7 ;
@end

