/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLDevice;
@class NSBundle, NTKPromise;

@interface NTKKaleidoscopeResourceManager : NSObject {

	NSBundle* _bundle;
	id<MTLDevice> _device;
	unsigned long long _clients;
	unsigned long long _viewMtlPixelFormat;
	NTKPromise* _renderPipelines[4][2];
	NTKPromise* _mtlBuffer;

}
+(void)_deallocInstance:(id)arg1 ;
+(id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 ;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_asyncDeallocInstance;
-(void)_loadMTLBufferData;
-(void)_loadPrograms;
-(void)addClient;
-(void)removeClient;
-(void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5 ;
-(id)getPipelineForShaderType:(unsigned long long)arg1 blending:(BOOL)arg2 ;
-(id)getGeometryBuffer;
@end

