/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	SCD_Struct_MT31 _dim;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT31 screenSize; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT31 physicalGranularity; 
@property (readonly) SCD_Struct_MT34 parameterBufferSizeAndAlign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)init;
-(SCD_Struct_MT31)screenSize;
-(id<MTLDevice>)device;
-(NSString *)description;
-(unsigned long long)layerCount;
-(void)copyParameterDataToBuffer:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)physicalCoordinate:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)screenCoordinate:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT31)physicalGranularity;
-(SCD_Struct_MT34)parameterBufferSizeAndAlign;
-(SCD_Struct_MT31)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT35)mapScreenToPhysicalCoordinates:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)mapPhysicalToScreenCoordinates:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(NSString *)label;
-(void)dealloc;
@end

