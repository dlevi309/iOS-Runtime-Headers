/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@class NSString, MTLType, NSArray, NSDictionary;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>

@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long functionType; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * vertexAttributes; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSString * name; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
@property (readonly) unsigned long long options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newFunctionWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bitcodeData;
-(NSString *)unpackedFilePath;
-(NSString *)filePath;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 ;
-(const SCD_Struct_MT20*)bitCodeHash;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2 ;
-(unsigned long long)functionType;
-(NSDictionary *)functionConstantsDictionary;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3 ;
-(long long)lineNumber;
-(unsigned long long)patchType;
-(unsigned long long)options;
-(NSArray *)vertexAttributes;
-(NSString *)name;
-(NSArray *)stageInputAttributes;
-(NSArray *)arguments;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(unsigned long long)renderTargetArrayIndexType;
-(id)functionInputs;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(MTLType *)returnType;
-(long long)patchControlPointCount;
-(void)setLabel:(NSString *)arg1 ;
-(id)reflectionWithOptions:(unsigned long long)arg1 ;
-(NSString *)label;
@end

