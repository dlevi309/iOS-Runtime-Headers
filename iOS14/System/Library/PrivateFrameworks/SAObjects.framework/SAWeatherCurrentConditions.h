/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWeatherBarometricPressure, SAWeatherCondition, NSNumber, NSString, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWeatherBarometricPressure * barometricPressure; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSString * dewPoint; 
@property (nonatomic,copy) NSString * heatIndex; 
@property (nonatomic,copy) NSString * moonPhase; 
@property (nonatomic,copy) NSString * percentHumidity; 
@property (nonatomic,copy) NSNumber * percentOfMoonFaceVisible; 
@property (nonatomic,copy) NSString * sunrise; 
@property (nonatomic,copy) NSString * sunset; 
@property (nonatomic,copy) NSString * temperature; 
@property (nonatomic,copy) NSString * timeOfObservation; 
@property (nonatomic,copy) NSString * timeZone; 
@property (nonatomic,copy) NSString * totalDailyPrecipitation; 
@property (nonatomic,copy) NSNumber * uvIndex; 
@property (nonatomic,copy) NSString * visibility; 
@property (nonatomic,copy) NSString * windChill; 
@property (nonatomic,retain) SAWeatherWindSpeed * windSpeed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)currentConditions;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(NSNumber *)uvIndex;
-(NSNumber *)dayOfWeek;
-(void)setWindSpeed:(SAWeatherWindSpeed *)arg1 ;
-(NSString *)timeZone;
-(NSString *)sunset;
-(NSString *)temperature;
-(NSString *)dewPoint;
-(void)setDewPoint:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setTimeZone:(NSString *)arg1 ;
-(SAWeatherWindSpeed *)windSpeed;
-(NSString *)visibility;
-(NSString *)sunrise;
-(NSString *)heatIndex;
-(id)encodedClassName;
-(void)setMoonPhase:(NSString *)arg1 ;
-(void)setSunrise:(NSString *)arg1 ;
-(void)setWindChill:(NSString *)arg1 ;
-(void)setVisibility:(NSString *)arg1 ;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(void)setSunset:(NSString *)arg1 ;
-(void)setTemperature:(NSString *)arg1 ;
-(SAWeatherCondition *)condition;
-(SAWeatherBarometricPressure *)barometricPressure;
-(void)setBarometricPressure:(SAWeatherBarometricPressure *)arg1 ;
-(NSString *)percentHumidity;
-(void)setPercentHumidity:(NSString *)arg1 ;
-(NSNumber *)percentOfMoonFaceVisible;
-(void)setPercentOfMoonFaceVisible:(NSNumber *)arg1 ;
-(NSString *)timeOfObservation;
-(void)setHeatIndex:(NSString *)arg1 ;
-(void)setTimeOfObservation:(NSString *)arg1 ;
-(NSString *)totalDailyPrecipitation;
-(void)setTotalDailyPrecipitation:(NSString *)arg1 ;
-(void)setUvIndex:(NSNumber *)arg1 ;
-(NSString *)windChill;
-(NSString *)moonPhase;
@end

