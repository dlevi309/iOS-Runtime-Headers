/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

