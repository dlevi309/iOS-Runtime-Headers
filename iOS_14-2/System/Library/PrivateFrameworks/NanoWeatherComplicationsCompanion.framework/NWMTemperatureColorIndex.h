/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

