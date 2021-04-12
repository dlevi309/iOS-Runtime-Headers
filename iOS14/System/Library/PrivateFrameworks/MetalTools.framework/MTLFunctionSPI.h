/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)bitcodeData;
-(NSString *)unpackedFilePath;
-(NSString *)filePath;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
-(const SCD_Struct_MT20*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
-(long long)lineNumber;
-(NSArray *)arguments;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(unsigned long long)renderTargetArrayIndexType;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(MTLType *)returnType;
-(id)reflectionWithOptions:(unsigned long long)arg1;

@end

