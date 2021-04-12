/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, MTLArgument, NSDictionary, NSData;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT52 _flags;
	NSArray* _vertexBuiltInArguments;
	unsigned long long _postVertexDumpStride;
	NSArray* _postVertexDumpOutputs;
	NSArray* _inferredInputs;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSArray* _tileArguments;
	NSArray* _tileBuiltInArguments;
	MTLArgument* _imageBlockDataReturn;
	NSDictionary* _performanceStatistics;
	unsigned _traceBufferIndex;
	NSData* _vertexPluginReturnData;
	NSData* _fragmentPluginReturnData;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)tileArguments;
-(id)fragmentArguments;
-(id)imageBlockDataReturn;
-(id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT52)arg4 ;
-(id)fragmentPluginReturnData;
-(id)inferredInputs;
-(id)vertexArguments;
-(id)performanceStatistics;
-(unsigned)traceBufferIndex;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)postVertexDumpOutputs;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT52)arg6 ;
-(id)description;
-(id)vertexPluginReturnData;
-(SCD_Struct_MT52)usageFlags;
-(id)vertexBuiltInArguments;
-(id)constantSamplerUniqueIdentifiers;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT52)arg5 ;
-(id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned)arg6 flags:(SCD_Struct_MT52)arg7 ;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(unsigned long long)postVertexDumpStride;
-(void)dealloc;
-(id)constantSamplerDescriptors;
@end

