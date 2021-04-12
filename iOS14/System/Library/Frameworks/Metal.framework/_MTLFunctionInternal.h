/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLFunction.h>

@class NSString;

@interface _MTLFunctionInternal : _MTLFunction {

	MTLFunctionData _functionData;
	unsigned char _publicMetadataInitialized;
	unsigned char _privateMetadataInitialized;
	unsigned char _sourceArchiveMetadataInitialized;
	MTLProgramObject* _programObject;
	NSString* _filePath;
	long long _lineNumber;

}
-(id)unpackedFilePath;
-(id)filePath;
-(const SCD_Struct_MT19*)bitCodeHash;
-(void)setUnpackedFilePath:(id)arg1 ;
-(unsigned long long)bitCodeFileSize;
-(id)functionConstantsDictionary;
-(void)setFunctionConstantSpecializationHash:(const SCD_Struct_MT19*)arg1 ;
-(void)initializeSourceArchive;
-(void)setArguments:(id)arg1 ;
-(BOOL)needsFunctionConstantValues;
-(const MTLFunctionData*)functionData;
-(unsigned long long)bitCodeOffset;
-(void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 originalRequest:(const MTLCompilerFunctionRequest*)arg5 sync:(BOOL)arg6 specializedName:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(long long)lineNumber;
-(unsigned long long)patchType;
-(id)vertexAttributes;
-(void)setSourceArchiveOffset:(unsigned long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLineNumber:(long long)arg1 ;
-(id)stageInputAttributes;
-(void)setVertexAttributes:(id)arg1 ;
-(id)arguments;
-(BOOL)specializedFunctionHash:(SCD_Struct_MT19*)arg1 requestData:(id*)arg2 constants:(id)arg3 specializedName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)pluginData;
-(void)initializePrivateMetadata;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 functionData:(MTLFunctionData*)arg4 device:(id)arg5 ;
-(void)setFunctionConstants:(id)arg1 ;
-(unsigned long long)renderTargetArrayIndexType;
-(void)initializePublicMetadata;
-(void)setStageInputAttributes:(id)arg1 ;
-(id)functionInputs;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(void)setPrecompiledOutput:(id)arg1 ;
-(id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 originalRequest:(const MTLCompilerFunctionRequest*)arg5 specializedName:(id)arg6 error:(id*)arg7 ;
-(unsigned long long)sourceArchiveOffset;
-(void)setReturnType:(id)arg1 ;
-(id)precompiledOutput;
-(MTLProgramObject*)programObject;
-(id)returnType;
-(long long)patchControlPointCount;
-(unsigned char)bitcodeType;
-(void)setPluginData:(id)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(id)functionConstants;
-(void)dealloc;
-(void)setBitcodeType:(unsigned char)arg1 ;
@end

