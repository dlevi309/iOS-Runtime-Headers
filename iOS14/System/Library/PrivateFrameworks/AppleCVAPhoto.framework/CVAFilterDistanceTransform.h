/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;
#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class NSString;

@interface CVAFilterDistanceTransform : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	id<MTLTexture> _closestSites;
	id<MTLResourceGroupSPI> _intermediateTexturesResourceGroup;
	id<MTLComputePipelineState> _closestSitesKernel;
	id<MTLComputePipelineState> _distanceTransformKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 textureSize:(SCD_Struct_CV32)arg4 error:(id*)arg5 ;
@end

