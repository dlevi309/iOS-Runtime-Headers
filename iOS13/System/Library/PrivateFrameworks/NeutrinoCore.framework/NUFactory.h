/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUStorageFactory, NUSlowMotionVideoFactory;
@class NUSchemaRegistry, NURenderPipelineRegistry, NSString, NUScheduler, NUPurgeableStoragePool, NUGLContext, NUGLContextPool, NURenderNodeCache, NUPlatform, NUJSContextPool, NUCacheNodeRegistry;

@interface NUFactory : NSObject {

	NUSchemaRegistry* _schemaRegistry;
	NURenderPipelineRegistry* _renderPipelineRegistry;
	NSString* _defaultNameSpace;
	NUScheduler* _scheduler;
	NUPurgeableStoragePool* _bufferStoragePool;
	NUPurgeableStoragePool* _surfaceStoragePool;
	id<NUStorageFactory> _bufferFactory;
	id<NUStorageFactory> _surfaceFactory;
	NUGLContext* _sharedOpenGLContext;
	NUGLContextPool* _sharedOpenGLContextPool;
	NURenderNodeCache* _renderNodeCache;
	NUPlatform* _platform;
	NUJSContextPool* _sharedJavaScriptContextPool;
	NUCacheNodeRegistry* _cacheNodeRegistry;
	id<NUSlowMotionVideoFactory> _slomoFactory;

}

@property (nonatomic,retain) NUSchemaRegistry * schemaRegistry;                              //@synthesize schemaRegistry=_schemaRegistry - In the implementation block
@property (nonatomic,retain) NURenderPipelineRegistry * renderPipelineRegistry;              //@synthesize renderPipelineRegistry=_renderPipelineRegistry - In the implementation block
@property (nonatomic,copy) NSString * defaultNameSpace;                                      //@synthesize defaultNameSpace=_defaultNameSpace - In the implementation block
@property (nonatomic,retain) NUScheduler * scheduler;                                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NUPurgeableStoragePool * bufferStoragePool;                     //@synthesize bufferStoragePool=_bufferStoragePool - In the implementation block
@property (nonatomic,retain) NUPurgeableStoragePool * surfaceStoragePool;                    //@synthesize surfaceStoragePool=_surfaceStoragePool - In the implementation block
@property (nonatomic,retain) id<NUStorageFactory> bufferFactory;                             //@synthesize bufferFactory=_bufferFactory - In the implementation block
@property (nonatomic,retain) id<NUStorageFactory> surfaceFactory;                            //@synthesize surfaceFactory=_surfaceFactory - In the implementation block
@property (nonatomic,retain) NUGLContext * sharedOpenGLContext;                              //@synthesize sharedOpenGLContext=_sharedOpenGLContext - In the implementation block
@property (nonatomic,retain) NUGLContextPool * sharedOpenGLContextPool;                      //@synthesize sharedOpenGLContextPool=_sharedOpenGLContextPool - In the implementation block
@property (nonatomic,retain) NURenderNodeCache * renderNodeCache;                            //@synthesize renderNodeCache=_renderNodeCache - In the implementation block
@property (nonatomic,retain) NUPlatform * platform;                                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NUJSContextPool * sharedJavaScriptContextPool;                  //@synthesize sharedJavaScriptContextPool=_sharedJavaScriptContextPool - In the implementation block
@property (nonatomic,retain) NUCacheNodeRegistry * cacheNodeRegistry;                        //@synthesize cacheNodeRegistry=_cacheNodeRegistry - In the implementation block
@property (nonatomic,retain) id<NUSlowMotionVideoFactory> slomoFactory;                      //@synthesize slomoFactory=_slomoFactory - In the implementation block
+(void)reset;
+(id)sharedFactory;
+(void)setSharedFactory:(id)arg1 ;
-(void)start;
-(NUPlatform *)platform;
-(void)setPlatform:(NUPlatform *)arg1 ;
-(NUScheduler *)scheduler;
-(void)setScheduler:(NUScheduler *)arg1 ;
-(void)shutdown;
-(NUSchemaRegistry *)schemaRegistry;
-(void)setSchemaRegistry:(NUSchemaRegistry *)arg1 ;
-(NURenderPipelineRegistry *)renderPipelineRegistry;
-(void)setRenderPipelineRegistry:(NURenderPipelineRegistry *)arg1 ;
-(NSString *)defaultNameSpace;
-(void)setDefaultNameSpace:(NSString *)arg1 ;
-(NUPurgeableStoragePool *)bufferStoragePool;
-(void)setBufferStoragePool:(NUPurgeableStoragePool *)arg1 ;
-(NUPurgeableStoragePool *)surfaceStoragePool;
-(void)setSurfaceStoragePool:(NUPurgeableStoragePool *)arg1 ;
-(id<NUStorageFactory>)bufferFactory;
-(void)setBufferFactory:(id<NUStorageFactory>)arg1 ;
-(id<NUStorageFactory>)surfaceFactory;
-(void)setSurfaceFactory:(id<NUStorageFactory>)arg1 ;
-(NUGLContext *)sharedOpenGLContext;
-(void)setSharedOpenGLContext:(NUGLContext *)arg1 ;
-(NUGLContextPool *)sharedOpenGLContextPool;
-(void)setSharedOpenGLContextPool:(NUGLContextPool *)arg1 ;
-(NURenderNodeCache *)renderNodeCache;
-(void)setRenderNodeCache:(NURenderNodeCache *)arg1 ;
-(NUJSContextPool *)sharedJavaScriptContextPool;
-(void)setSharedJavaScriptContextPool:(NUJSContextPool *)arg1 ;
-(NUCacheNodeRegistry *)cacheNodeRegistry;
-(void)setCacheNodeRegistry:(NUCacheNodeRegistry *)arg1 ;
-(id<NUSlowMotionVideoFactory>)slomoFactory;
-(void)setSlomoFactory:(id<NUSlowMotionVideoFactory>)arg1 ;
@end

