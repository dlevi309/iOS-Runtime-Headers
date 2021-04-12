/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;
#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class NSString;

@interface CVAFilterDistanceTransform : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLTexture> _closestSites;
	id<MTLResourceGroupSPI> _intermediateTexturesResourceGroup;
	id<MTLComputePipelineState> _closestSitesKernel;
	id<MTLComputePipelineState> _distanceTransformKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 textureSize:(SCD_Struct_CV32)arg3 error:(id*)arg4 ;
@end

