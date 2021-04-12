/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>
#import <libobjc.A.dylib/NWColorIndexable.h>

@class WFTemperature, NSString;

@interface NWMTemperatureColorIndex : NWColorIndex <NWColorIndexable> {

	WFTemperature* _temperature;

}

@property (nonatomic,readonly) WFTemperature * temperature;              //@synthesize temperature=_temperature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allIndices;
+(id)indexWithTemperature:(id)arg1 color:(id)arg2 ;
-(WFTemperature *)temperature;
-(id)initWithTemperature:(id)arg1 color:(id)arg2 ;
@end

