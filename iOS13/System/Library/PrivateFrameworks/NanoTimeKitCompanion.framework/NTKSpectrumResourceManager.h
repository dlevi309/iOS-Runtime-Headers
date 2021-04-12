/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
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

