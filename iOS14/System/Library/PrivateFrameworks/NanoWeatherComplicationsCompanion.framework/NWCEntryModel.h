/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWeatherConditions, WFAirQualityConditions, NSArray;

@interface NWCEntryModel : NSObject <NSSecureCoding> {

	WFWeatherConditions* _conditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyEntryModels;
	WFWeatherConditions* _dailyConditions;
	unsigned long long _timeOfDay;

}

@property (readonly) WFWeatherConditions * conditions;                           //@synthesize conditions=_conditions - In the implementation block
@property (readonly) WFAirQualityConditions * airQualityConditions;              //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (readonly) NSArray * hourlyEntryModels;                                //@synthesize hourlyEntryModels=_hourlyEntryModels - In the implementation block
@property (readonly) WFWeatherConditions * dailyConditions;                      //@synthesize dailyConditions=_dailyConditions - In the implementation block
@property (readonly) unsigned long long timeOfDay;                               //@synthesize timeOfDay=_timeOfDay - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFAirQualityConditions *)airQualityConditions;
-(WFWeatherConditions *)conditions;
-(unsigned long long)timeOfDay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFWeatherConditions *)dailyConditions;
-(NSArray *)hourlyEntryModels;
-(id)initWithConditions:(id)arg1 timeOfDay:(unsigned long long)arg2 ;
-(id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4 ;
-(id)initWithConditions:(id)arg1 dailyConditions:(id)arg2 timeOfDay:(unsigned long long)arg3 ;
-(id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 hourlyEntryModels:(id)arg3 dailyConditions:(id)arg4 timeOfDay:(unsigned long long)arg5 ;
-(id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 timeOfDay:(unsigned long long)arg3 ;
-(id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4 ;
@end

