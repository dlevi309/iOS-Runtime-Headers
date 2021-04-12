/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@class NSString, MTLType, NSArray, MTLToolsPointerArray, NSDictionary;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {

	MTLToolsPointerArray* _functions;
	MTLToolsPointerArray* _indirectArgumentEncoders;
	MTLToolsPointerArray* _argumentEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * indirectArgumentEncoders;              //@synthesize indirectArgumentEncoders=_indirectArgumentEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * argumentEncoders;                      //@synthesize argumentEncoders=_argumentEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long functionType; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * vertexAttributes; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSString * name; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
-(void)dealloc;
-(NSString *)name;
-(NSArray *)arguments;
-(long long)lineNumber;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(MTLType *)returnType;
-(NSString *)filePath;
-(unsigned long long)patchType;
-(unsigned long long)functionType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(long long)patchControlPointCount;
-(NSArray *)vertexAttributes;
-(NSArray *)stageInputAttributes;
-(NSDictionary *)functionConstantsDictionary;
-(const SCD_Struct_MT16*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1 ;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bitcodeData;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(NSString *)unpackedFilePath;
-(unsigned long long)renderTargetArrayIndexType;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3 ;
-(MTLToolsPointerArray *)indirectArgumentEncoders;
-(MTLToolsPointerArray *)argumentEncoders;
@end

