/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLDevice, OS_dispatch_queue, MTLRenderPipelineState, MTLBuffer;
@class NSBundle, NSObject;

@interface NTKKaleidoscopeResourceManager : NSObject {

	NSBundle* _bundle;
	id<MTLDevice> _device;
	unsigned long long _clients;
	unsigned long long _viewMtlPixelFormat;
	NSObject*<OS_dispatch_queue> _queue;
	id<MTLRenderPipelineState> _renderPipelines[4][2];
	id<MTLBuffer> _mtlBuffer;

}

@property (nonatomic,readonly) id<MTLBuffer> mtlBuffer;              //@synthesize mtlBuffer=_mtlBuffer - In the implementation block
+(void)_deallocInstance:(id)arg1 ;
+(id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
-(void)_asyncDeallocInstance;
-(id<MTLBuffer>)mtlBuffer;
-(void)addClient;
-(void)removeClient;
-(void)_queue_loadMTLBufferData;
-(void)_queue_loadPrograms;
-(void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5 ;
-(id)getPipelineForShaderType:(unsigned long long)arg1 blending:(BOOL)arg2 ;
-(id)getGeometryBuffer;
@end

