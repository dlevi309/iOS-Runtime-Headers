/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
@class NSArray, ToneMappingCurves;

@interface ToneMappingBuffers : NSObject {

	id<MTLTexture> inLumaTex;
	id<MTLTexture> inLumaTexAsRG;
	id<MTLTexture> inChromaTex;
	id<MTLTexture> localGainMapTex;
	id<MTLTexture> outLumaTex;
	id<MTLTexture> outLumaTexAsRG;
	id<MTLTexture> outChromaTex;
	id<MTLTexture> skinMask;
	id<MTLTexture> personMask;
	NSArray* faceLandmarks;
	ToneMappingCurves* curves;

}
@end

