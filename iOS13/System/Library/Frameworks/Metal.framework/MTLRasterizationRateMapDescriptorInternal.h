/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateMapDescriptor.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapDescriptorSPI.h>

@class NSString, MTLRasterizationRateLayerArrayInternal;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {

	SCD_Struct_MT11 _screenSize;
	NSString* _label;
	vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >* _layers;
	MTLRasterizationRateLayerArrayInternal* _layerAccessor;

}
-(id)init;
-(oneway void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)layerCount;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(id)layers;
-(void)setScreenSize:(SCD_Struct_MT11)arg1 ;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MT11)screenSize;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithScreenSize:(SCD_Struct_MT11)arg1 ;
-(const id*)layerPointer:(unsigned long long*)arg1 ;
@end

