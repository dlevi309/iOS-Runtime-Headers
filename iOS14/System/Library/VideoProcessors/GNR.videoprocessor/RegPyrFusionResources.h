/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface RegPyrFusionResources : NSObject {

	SCD_Struct_Re2 offsets;
	id<MTLTexture> refDerivTex[20];
	id<MTLTexture> refDerivAsU32[20];
	id<MTLTexture> interim[20];
	id<MTLTexture> interimAsU32[20];
	id<MTLTexture> nonRefDerivTex[20];
	id<MTLTexture> prevShiftMap[20];
	id<MTLTexture> prevShiftMapAsRGBA[20];
	id<MTLTexture> nextShiftMap[20];
	id<MTLTexture> shiftMapWeight[20];
	id<MTLTexture> confidenceMap;
	id<MTLTexture> prevShiftMapAsU32;
	id<MTLTexture> nextShiftMapAsR16;
	id<MTLTexture> nextShiftMapAsRG16;
	id<MTLTexture> confidenceMapAsRG16;

}
@end

