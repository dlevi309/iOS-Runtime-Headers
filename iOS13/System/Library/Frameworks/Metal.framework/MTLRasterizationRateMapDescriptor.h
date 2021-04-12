/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRasterizationRateLayerArray, NSString;

@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>

@property (nonatomic,readonly) MTLRasterizationRateLayerArray * layers; 
@property (assign,nonatomic) SCD_Struct_MT11 screenSize; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long layerCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT11)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT11)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT11)arg1 layer:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

