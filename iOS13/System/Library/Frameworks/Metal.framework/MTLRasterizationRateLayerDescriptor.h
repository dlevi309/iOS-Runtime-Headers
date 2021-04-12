/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRasterizationRateSampleArray;

@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>

@property (nonatomic,readonly) SCD_Struct_MT10 sampleCount; 
@property (nonatomic,readonly) float* horizontalSampleStorage; 
@property (nonatomic,readonly) float* verticalSampleStorage; 
@property (nonatomic,readonly) MTLRasterizationRateSampleArray * horizontal; 
@property (nonatomic,readonly) MTLRasterizationRateSampleArray * vertical; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT10)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT10)arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3 ;
@end

