/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class _MTLDevice, NSString, NSObject;

@interface MTLCompiler : NSObject {

	_MTLDevice* _device;
	NSString* _pluginPath;
	NSObject*<OS_dispatch_queue> _compilerQueue;
	MTLCompilerConnectionManager* _compilerConnectionManager;
	unsigned _compilerId;
	unsigned long long _compilerFlags;
	MTLCompilerCache* _shaderCache;

}

@property (copy,readonly) NSString * pluginPath;                                           //@synthesize pluginPath=_pluginPath - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> compilerQueue;                           //@synthesize compilerQueue=_compilerQueue - In the implementation block
@property (readonly) MTLCompilerConnectionManager* compilerConnectionManager;              //@synthesize compilerConnectionManager=_compilerConnectionManager - In the implementation block
@property (readonly) unsigned compilerId;                                                  //@synthesize compilerId=_compilerId - In the implementation block
@property (readonly) unsigned long long compilerFlags;                                     //@synthesize compilerFlags=_compilerFlags - In the implementation block
-(void)dealloc;
-(NSString *)pluginPath;
-(void)unloadShaderCaches;
-(SCD_Struct_MT31)libraryCacheStats;
-(SCD_Struct_MT31)pipelineCacheStats;
-(BOOL)copyShaderCacheToPath:(id)arg1 ;
-(void*)getShaderCacheKeys;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned)arg6 pipelineCache:(id)arg7 sync:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)compileFunctionInternal:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(BOOL)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned)arg7 sync:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned)arg6 sync:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)initWithTargetData:(id)arg1 cacheUUID:(SCD_Struct_MT55*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5 ;
-(void)compileRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)compilerQueue;
-(MTLCompilerConnectionManager*)compilerConnectionManager;
-(unsigned)compilerId;
-(unsigned long long)compilerFlags;
@end

