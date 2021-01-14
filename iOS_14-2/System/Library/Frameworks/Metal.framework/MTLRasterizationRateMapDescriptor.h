/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRasterizationRateLayerArray, NSString;

@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>

@property (nonatomic,readonly) MTLRasterizationRateLayerArray * layers; 
@property (assign,nonatomic) SCD_Struct_MT31 screenSize; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long layerCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 layer:(id)arg2 ;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

