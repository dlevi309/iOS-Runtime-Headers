/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLBuffer;
#import <UB/UB-Structs.h>
@interface FusionRemixUniforms : NSObject {

	id<MTLBuffer> _fragUniBufSBP;
	id<MTLBuffer> _vertexUniBufSBP;
	id<MTLBuffer> _fragUniBufInt;
	FusionRemixStageUniformsIBP* _ptr2FragBufSBP;
	FusionRemixStageUniformsVertex* _ptr2VertBufSBP;
	FusionRemixStageUniformsInternal* _ptr2FragBufInt;

}
-(id)initWithMetal:(id)arg1 ;
@end

