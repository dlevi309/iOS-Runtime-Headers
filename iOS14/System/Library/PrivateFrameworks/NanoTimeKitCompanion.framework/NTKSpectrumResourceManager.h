/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLDevice, MTLBuffer, MTLRenderPipelineState, MTLTexture, MTLLibrary;
@interface NTKSpectrumResourceManager : NSObject {

	id<MTLDevice> _device;
	unsigned long long _clients;
	unsigned long long _pixelFormat;
	id<MTLBuffer> _verticesBuffer;
	id<MTLRenderPipelineState> _pipelineStates[16];
	id<MTLTexture> _vignetteTexture;
	id<MTLTexture> _overlayTexture;
	id<MTLLibrary> _library;

}
+(void)_deallocInstance:(id)arg1 ;
+(id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 ;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)_generatePipeline:(unsigned long long)arg1 ;
-(void)_asyncDeallocInstance;
-(void)addClient;
-(void)removeClient;
-(void)_loadGeometry;
-(id)vignetteTexture;
-(id)overlayTexture;
-(id)renderPipelineForConfig:(unsigned long long)arg1 ;
-(id)verticesBuffer;
@end

