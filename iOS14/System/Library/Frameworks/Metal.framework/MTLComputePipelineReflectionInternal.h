/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary, NSData;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT53 _flags;
	unsigned _traceBufferIndex;
	NSData* _pluginReturnData;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)performanceStatistics;
-(unsigned)traceBufferIndex;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT53)arg4 ;
-(id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT53)arg5 ;
-(id)arguments;
-(id)description;
-(SCD_Struct_MT53)usageFlags;
-(id)constantSamplerUniqueIdentifiers;
-(id)builtInArguments;
-(id)pluginReturnData;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)dealloc;
-(id)constantSamplerDescriptors;
@end

