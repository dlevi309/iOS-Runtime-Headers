/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
#import <UB/UB-Structs.h>
@interface LumaChromaImage : NSObject {

	CVBufferRef pixelBuffer;
	id<MTLTexture> lumaTex;
	id<MTLTexture> chromaTex;

}
+(unsigned long long)getMetalLumaFormat:(CVBufferRef)arg1 ;
+(unsigned long long)getMetalChromaFormat:(CVBufferRef)arg1 ;
-(id)initWithContext:(id)arg1 pixelBuffer:(CVBufferRef)arg2 lumaAlignmentFactor:(unsigned long long)arg3 chromaAlignmentFactor:(unsigned long long)arg4 ;
@end

