/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLBuffer, MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface FusionBuffers : NSObject {

	char* morphology;
	CVBufferRef similarityMap;
	id<MTLBuffer> scratchBuffer;
	id<MTLTexture> ltmLumaTex;
	id<MTLTexture> ltmChromaTex;

}
@end

