/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	shared_ptr<MTLCompilerCache>* _shaderCache;

}

@property (copy,readonly) NSString * pluginPath;                                           //@synthesize pluginPath=_pluginPath - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> compilerQueue;                           //@synthesize compilerQueue=_compilerQueue - In the implementation block
@property (readonly) MTLCompilerConnectionManager* compilerConnectionManager;              //@synthesize compilerConnectionManager=_compilerConnectionManager - In the implementation block
@property (readonly) unsigned compilerId;                                                  //@synthesize compilerId=_compilerId - In the implementation block
@property (readonly) unsigned long long compilerFlags;                                     //@synthesize compilerFlags=_compilerFlags - In the implementation block
-(BOOL)copyShaderCacheToPath:(id)arg1 ;
-(void)allowLibrariesFromOtherPlatforms;
-(SCD_Struct_MT50)libraryCacheStats;
-(void*)getShaderCacheKeys;
-(void)unloadShaderCaches;
-(SCD_Struct_MT50)pipelineCacheStats;
-(void)compileRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statelessBackendCompileRequestInternal:(MTLCompilerFunctionRequest*)arg1 sync:(BOOL)arg2 compilerHash:(const SCD_Struct_MT19*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileFunctionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 pipelineLibrary:(id)arg4 binaryArchives:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)addTileRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(SCD_Struct_MT19)hashKeyForLibraryRequest:(MTLCompileLibraryRequestData*)arg1 ;
-(BOOL)addComputePipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)compilerFlags;
-(BOOL)addRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateLanguageAndAIRVersionForFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)pluginPath;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileFunctionRequestInternal:(id)arg1 frameworkLinking:(BOOL)arg2 linkDataSize:(unsigned long long)arg3 reflectionOnly:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 pipelineLibrary:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(SCD_Struct_MT19)hashKeyForStatelessCompilationRequest:(id)arg1 ;
-(MTLCompilerConnectionManager*)compilerConnectionManager;
-(BOOL)addTileRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id*)arg3 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 binaryArchives:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)compileStatelessFunctionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 visibleFunctionGroups:(id)arg3 frameworkData:(id)arg4 driverKeyData:(id)arg5 options:(unsigned long long)arg6 pipelineCache:(id)arg7 sync:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetData:(id)arg1 cacheUUID:(SCD_Struct_MT19*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5 ;
-(BOOL)addRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned)arg6 pipelineCache:(id)arg7 sync:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(BOOL)addComputePipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned)compilerId;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSObject*<OS_dispatch_queue>)compilerQueue;
-(void)compileLibraryRequest:(MTLCompileLibraryRequestData)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCompiledOutput:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3 hashKey:(const SCD_Struct_MT19*)arg4 functionCache:(const MultiLevelPipelineCache*)arg5 ;
-(id)compileDynamicLibrary:(id)arg1 computePipelineDescriptor:(id)arg2 error:(id*)arg3 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)dealloc;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned)arg6 sync:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 privateVisibleFunctions:(id)arg3 visibleFunctionGroups:(id)arg4 frameworkData:(id)arg5 driverKeyData:(id)arg6 options:(unsigned long long)arg7 pipelineCache:(id)arg8 sync:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)addCompiledOutput:(id)arg1 cachedCompiledOutput:(id)arg2 importedSymbols:(id)arg3 importedLibraries:(id)arg4 hashKey:(const SCD_Struct_MT19*)arg5 functionCache:(const MultiLevelPipelineCache*)arg6 ;
@end

