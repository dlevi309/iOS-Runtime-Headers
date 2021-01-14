/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateLayerDescriptor.h>

@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {

	float* _data;
	SCD_Struct_MT31 _size;
	MTLRasterizationRateSampleArrayInternal* _horizontal;
	MTLRasterizationRateSampleArrayInternal* _vertical;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(id)horizontal;
-(id)vertical;
-(id)description;
-(SCD_Struct_MT31)sampleCount;
-(unsigned long long)hash;
-(id)initWithSampleCount:(SCD_Struct_MT31)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT31)arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3 ;
-(float*)verticalSampleStorage;
-(float*)horizontalSampleStorage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

