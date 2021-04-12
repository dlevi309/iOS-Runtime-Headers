/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, CLLocation, NSMeasurement, NSNumber, NSString, NSArray;

@interface WFWeatherData : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	NSDate* _date;
	CLLocation* _location;
	NSMeasurement* _temperature;
	NSMeasurement* _highTemperature;
	NSMeasurement* _lowTemperature;
	NSMeasurement* _feelsLikeTemperature;
	unsigned long long _condition;
	NSMeasurement* _visibility;
	NSMeasurement* _dewpoint;
	NSNumber* _humidity;
	NSMeasurement* _pressure;
	NSMeasurement* _precipitationAmount;
	NSNumber* _precipitationChance;
	NSMeasurement* _windSpeed;
	NSString* _windDirection;
	NSNumber* _uvIndex;
	NSDate* _sunriseTime;
	NSDate* _sunsetTime;
	NSNumber* _localizedAirQualityIndex;
	NSString* _localizedAirQualityCategory;
	NSArray* _pollutants;

}

@property (nonatomic,readonly) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSMeasurement * temperature;                              //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,readonly) NSMeasurement * highTemperature;                          //@synthesize highTemperature=_highTemperature - In the implementation block
@property (nonatomic,readonly) NSMeasurement * lowTemperature;                           //@synthesize lowTemperature=_lowTemperature - In the implementation block
@property (nonatomic,readonly) NSMeasurement * feelsLikeTemperature;                     //@synthesize feelsLikeTemperature=_feelsLikeTemperature - In the implementation block
@property (nonatomic,readonly) unsigned long long condition;                             //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) NSString * localizedConditionString; 
@property (nonatomic,readonly) NSMeasurement * visibility;                               //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) NSMeasurement * dewpoint;                                 //@synthesize dewpoint=_dewpoint - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * humidity;                                 //@synthesize humidity=_humidity - In the implementation block
@property (nonatomic,readonly) NSMeasurement * pressure;                                 //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,readonly) NSMeasurement * precipitationAmount;                      //@synthesize precipitationAmount=_precipitationAmount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * precipitationChance;                      //@synthesize precipitationChance=_precipitationChance - In the implementation block
@property (nonatomic,readonly) NSMeasurement * windSpeed;                                //@synthesize windSpeed=_windSpeed - In the implementation block
@property (nonatomic,copy,readonly) NSString * windDirection;                            //@synthesize windDirection=_windDirection - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * uvIndex;                                  //@synthesize uvIndex=_uvIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sunriseTime;                                //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sunsetTime;                                 //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * localizedAirQualityIndex;                 //@synthesize localizedAirQualityIndex=_localizedAirQualityIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAirQualityCategory;              //@synthesize localizedAirQualityCategory=_localizedAirQualityCategory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pollutants;                                //@synthesize pollutants=_pollutants - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(BOOL)usesMetricSystem;
+(id)temperatureUnit;
+(id)windSpeedUnit;
+(id)pressureUnit;
+(id)precipitationAmountUnit;
+(id)visibilityUnit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)condition;
-(NSMeasurement *)visibility;
-(CLLocation *)location;
-(NSMeasurement *)temperature;
-(NSMeasurement *)pressure;
-(NSNumber *)uvIndex;
-(NSMeasurement *)windSpeed;
-(NSMeasurement *)highTemperature;
-(NSMeasurement *)lowTemperature;
-(NSString *)windDirection;
-(NSArray *)pollutants;
-(NSNumber *)humidity;
-(NSDate *)sunriseTime;
-(NSDate *)sunsetTime;
-(NSNumber *)localizedAirQualityIndex;
-(NSString *)localizedAirQualityCategory;
-(NSString *)wfName;
-(id)initWithWeatherConditions:(id)arg1 ;
-(void)addAirQualityConditions:(id)arg1 ;
-(void)addMissingDataFromWeatherData:(id)arg1 ;
-(id)measurementForTemperature:(id)arg1 ;
-(unsigned long long)weatherConditionForConditionCode:(unsigned long long)arg1 ;
-(id)temperatureString;
-(NSString *)localizedConditionString;
-(NSMeasurement *)feelsLikeTemperature;
-(NSMeasurement *)dewpoint;
-(NSMeasurement *)precipitationAmount;
-(NSNumber *)precipitationChance;
@end

