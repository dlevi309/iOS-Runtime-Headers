/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLBuffer;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface FusionRemixUniforms : NSObject {

	id<MTLBuffer> _fragUniBufSBP;
	id<MTLBuffer> _vertexUniBufSBP;
	id<MTLBuffer> _fragUniBufInt;
	FusionRemixStageUniformsSBP* _ptr2FragBufSBP;
	FusionRemixStageUniformsVertex* _ptr2VertBufSBP;
	FusionRemixStageUniformsInternal* _ptr2FragBufInt;

}
-(id)initWithMetal:(id)arg1 ;
@end

