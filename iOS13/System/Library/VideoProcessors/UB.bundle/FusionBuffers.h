/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
@interface FusionBuffers : NSObject {

	id<MTLTexture> simMapTex;
	id<MTLTexture> noiseMapLumaTex;
	id<MTLTexture> noiseMapChromaTex;
	id<MTLTexture> outLumaTex;
	id<MTLTexture> outLumaTexAsRG;
	id<MTLTexture> outChromaTex;

}
@end

