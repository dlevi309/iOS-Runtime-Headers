/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT33 _flags;
	unsigned _traceBufferIndex;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(void)dealloc;
-(id)description;
-(id)arguments;
-(SCD_Struct_MT33)usageFlags;
-(id)performanceStatistics;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)builtInArguments;
-(id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT33)arg5 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT33)arg4 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

