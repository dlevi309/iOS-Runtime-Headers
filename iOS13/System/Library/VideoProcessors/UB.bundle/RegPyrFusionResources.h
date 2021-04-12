/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
#import <UB/UB-Structs.h>
@interface RegPyrFusionResources : NSObject {

	SCD_Struct_Re33 offsets;
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

