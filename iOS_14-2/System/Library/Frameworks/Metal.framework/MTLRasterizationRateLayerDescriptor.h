/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRasterizationRateSampleArray;

@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>

@property (nonatomic,readonly) SCD_Struct_MT30 sampleCount; 
@property (nonatomic,readonly) float* horizontalSampleStorage; 
@property (nonatomic,readonly) float* verticalSampleStorage; 
@property (nonatomic,readonly) MTLRasterizationRateSampleArray * horizontal; 
@property (nonatomic,readonly) MTLRasterizationRateSampleArray * vertical; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithSampleCount:(SCD_Struct_MT30)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT30)arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

