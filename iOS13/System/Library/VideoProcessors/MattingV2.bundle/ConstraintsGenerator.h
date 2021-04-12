/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


@protocol MTLDevice, MTLTexture, MTLComputePipelineState;
#import <MattingV2/MattingV2-Structs.h>
@class MPSImageThresholdBinary, MPSImageThresholdBinaryInverse, MPSImageAreaMin, FigMetalContext;

@interface ConstraintsGenerator : NSObject {

	id<MTLDevice> _device;
	id<MTLTexture> _tmpSegmentation;
	id<MTLTexture> _fgErodedSegmentation;
	id<MTLTexture> _bgErodedSegmentation;
	MPSImageThresholdBinary* _fgThresholdFilter;
	MPSImageThresholdBinaryInverse* _bgThresholdFilter;
	MPSImageAreaMin* _erosionFilter;
	id<MTLComputePipelineState> _assembleConstraintsKernel;
	FigMetalContext* _metalContext;
	unsigned long long _preallocatedSize;

}

@property (nonatomic,readonly) unsigned long long preallocatedSize;              //@synthesize preallocatedSize=_preallocatedSize - In the implementation block
-(unsigned long long)preallocatedSize;
-(id)initWithMetalContext:(id)arg1 ;
-(int)prepareForConfiguration:(SCD_Struct_Co0)arg1 ;
-(int)encodeToCommandBuffer:(id)arg1 segmentationTexture:(id)arg2 constraintsTexture:(id)arg3 config:(SCD_Struct_Co0)arg4 ;
@end

