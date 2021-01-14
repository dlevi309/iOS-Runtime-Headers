/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWMColorPalette.h>

@class NSString;

@interface NWMTemperatureColor : NSObject <NWMColorPalette>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorForTemperature:(id)arg1 ;
+(void)colorSpectrumBetweenLow:(id)arg1 high:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)colorSpectrum;
@end

