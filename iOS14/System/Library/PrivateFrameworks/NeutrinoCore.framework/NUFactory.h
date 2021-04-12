/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUStorageFactory;
@class NUSchemaRegistry, NURenderPipelineRegistry, NSString, NUScheduler, NUPurgeableStoragePool, NUGLContext, NUGLContextPool, NURenderNodeCache, NUPlatform, NUJSContextPool, NUCacheNodeRegistry, CIFilter;

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
	CIFilter* _repairMLFilter;

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
@property (nonatomic,retain) CIFilter * repairMLFilter;                                      //@synthesize repairMLFilter=_repairMLFilter - In the implementation block
+(void)reapAllStoragePools;
+(id)sharedFactory;
+(void)reset;
+(void)shutdownSharedFactory;
+(void)setSharedFactory:(id)arg1 ;
-(NUPlatform *)platform;
-(void)setPlatform:(NUPlatform *)arg1 ;
-(void)start;
-(void)setScheduler:(NUScheduler *)arg1 ;
-(NUScheduler *)scheduler;
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
-(CIFilter *)repairMLFilter;
-(void)setRepairMLFilter:(CIFilter *)arg1 ;
@end

