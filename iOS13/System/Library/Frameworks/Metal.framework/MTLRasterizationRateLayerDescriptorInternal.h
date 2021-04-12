/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateLayerDescriptor.h>

@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {

	float* _data;
	SCD_Struct_MT11 _size;
	MTLRasterizationRateSampleArrayInternal* _horizontal;
	MTLRasterizationRateSampleArrayInternal* _vertical;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_MT11)sampleCount;
-(id)horizontal;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT11)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT11)arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3 ;
-(float*)horizontalSampleStorage;
-(float*)verticalSampleStorage;
-(id)vertical;
@end

