/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, MTLArgument, NSDictionary;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT32 _flags;
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
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(void)dealloc;
-(id)description;
-(SCD_Struct_MT32)usageFlags;
-(id)performanceStatistics;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned)arg6 flags:(SCD_Struct_MT32)arg7 ;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT32)arg6 ;
-(id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT32)arg4 ;
-(id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT32)arg5 ;
-(id)vertexBuiltInArguments;
-(unsigned long long)postVertexDumpStride;
-(id)postVertexDumpOutputs;
-(id)inferredInputs;
-(id)vertexArguments;
-(id)fragmentArguments;
-(id)tileArguments;
-(id)imageBlockDataReturn;
@end

