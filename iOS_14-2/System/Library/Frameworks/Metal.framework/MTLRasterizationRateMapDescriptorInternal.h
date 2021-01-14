/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateMapDescriptor.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapDescriptorSPI.h>

@class NSString, MTLRasterizationRateLayerArrayInternal;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {

	SCD_Struct_MT31 _screenSize;
	NSString* _label;
	vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >* _layers;
	MTLRasterizationRateLayerArrayInternal* _layerAccessor;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(id)layers;
-(void)setScreenSize:(SCD_Struct_MT31)arg1 ;
-(SCD_Struct_MT31)screenSize;
-(id)description;
-(unsigned long long)layerCount;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(const id*)layerPointer:(unsigned long long*)arg1 ;
-(unsigned long long)hash;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithScreenSize:(SCD_Struct_MT31)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)dealloc;
@end

