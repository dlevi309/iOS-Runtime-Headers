/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	SCD_Struct_MT11 _dim;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT11 screenSize; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT11 physicalGranularity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_MT14 parameterBufferSizeAndAlign; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<MTLDevice>)device;
-(unsigned long long)layerCount;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(SCD_Struct_MT11)screenSize;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)copyParameterDataToBuffer:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT15)physicalCoordinate:(SCD_Struct_MT15)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT15)screenCoordinate:(SCD_Struct_MT15)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT11)physicalGranularity;
-(SCD_Struct_MT14)parameterBufferSizeAndAlign;
-(SCD_Struct_MT11)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT15)mapScreenToPhysicalCoordinates:(SCD_Struct_MT15)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT15)mapPhysicalToScreenCoordinates:(SCD_Struct_MT15)arg1 forLayer:(unsigned long long)arg2 ;
@end

