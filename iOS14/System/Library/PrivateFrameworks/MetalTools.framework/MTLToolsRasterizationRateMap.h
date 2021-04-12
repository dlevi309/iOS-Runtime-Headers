/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@class NSString;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT0 screenSize; 
@property (readonly) SCD_Struct_MT0 physicalGranularity; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT56 parameterBufferSizeAndAlign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(SCD_Struct_MT0)screenSize;
-(id<MTLDevice>)device;
-(unsigned long long)layerCount;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT0)physicalGranularity;
-(SCD_Struct_MT56)parameterBufferSizeAndAlign;
-(SCD_Struct_MT0)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT55)mapScreenToPhysicalCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT55)mapPhysicalToScreenCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(NSString *)label;
@end

