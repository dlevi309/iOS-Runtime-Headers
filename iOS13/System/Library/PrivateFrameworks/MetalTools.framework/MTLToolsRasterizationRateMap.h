/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@class NSString;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT0 screenSize; 
@property (readonly) SCD_Struct_MT0 physicalGranularity; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT18 parameterBufferSizeAndAlign; 
-(id<MTLDevice>)device;
-(unsigned long long)layerCount;
-(NSString *)label;
-(SCD_Struct_MT0)screenSize;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT0)physicalGranularity;
-(SCD_Struct_MT18)parameterBufferSizeAndAlign;
-(SCD_Struct_MT0)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT19)mapScreenToPhysicalCoordinates:(SCD_Struct_MT19)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT19)mapPhysicalToScreenCoordinates:(SCD_Struct_MT19)arg1 forLayer:(unsigned long long)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
@end

