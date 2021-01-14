/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture;
#import <MattingV1/MattingV1-Structs.h>
@class MPSImageBox;

@interface FocalPlaneRestriction : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLComputePipelineState> _computeFocalPlaneWeightsKernel;
	id<MTLComputePipelineState> _applyFocalPlaneRestrictionKernel;
	id<MTLTexture> _softFocalPlaneTexture;
	id<MTLTexture> _filteredSoftFocalPlaneTexture;
	MPSImageBox* _boxfilter;
	SCD_Struct_Ma7 _config;

}

@property (assign,nonatomic) SCD_Struct_Ma7 config;              //@synthesize config=_config - In the implementation block
-(SCD_Struct_Ma7)config;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(void)setConfig:(SCD_Struct_Ma7)arg1 ;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(SCD_Struct_Ma7)arg1 ;
-(int)encodeApplyFocalPlaneRestrictionOn:(id)arg1 inputDisparity:(id)arg2 segmentation:(id)arg3 focalPlane:(id)arg4 ;
@end

