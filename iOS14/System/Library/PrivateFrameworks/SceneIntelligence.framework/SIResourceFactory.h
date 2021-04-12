/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


@protocol MTLDevice, MTLLibrary, MTLCommandQueue;
#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIResourceFactory : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)init;
-(id)newFunctionWithName:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 surface:(IOSurfaceRef)arg2 ;
-(void)loadShaderLibrary:(id)arg1 forObject:(id)arg2 ;
-(id)newComputePipelineStateWithName:(id)arg1 ;
-(id)newCubemapWithFormat:(SIImageFormat_struct)arg1 ;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 ;
-(id)newIOSurfaceBackedTexture:(SIImageFormat_struct)arg1 ;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(id)textureFromDictionary:(id)arg1 ;
-(id)dictionaryFromTexture:(id)arg1 ;
@end

