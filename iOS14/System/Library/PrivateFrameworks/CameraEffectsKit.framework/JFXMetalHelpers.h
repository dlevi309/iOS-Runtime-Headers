/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol MTLDevice;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXMetalHelpers : NSObject {

	id<MTLDevice> m_device;

}
+(CVBufferRef)createCVTextureFromImage:(CVBufferRef)arg1 withTextureCache:(CVMetalTextureCacheRef)arg2 ;
+(id)copyMetalLibraryWithDevice:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)metalPixelFormatForImage:(CVBufferRef)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)device;
-(id)newTextureWithSameSizeAs:(id)arg1 pixelFormat:(unsigned long long)arg2 ;
-(id)newTextureWithWidth:(unsigned)arg1 height:(unsigned)arg2 pixelFormat:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
-(id)newTexture:(id)arg1 ;
-(id)newPipelineStateForFunctionWithName:(id)arg1 ;
-(BOOL)runComputeEncoder:(id)arg1 pipelineState:(id)arg2 referenceTexture:(id)arg3 ;
@end

