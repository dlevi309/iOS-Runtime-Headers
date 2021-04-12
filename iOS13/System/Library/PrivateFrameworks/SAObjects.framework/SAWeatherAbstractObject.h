/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAWeatherAirQualityObject, SAWeatherCurrentConditions, NSArray, NSString, SAWeatherUnits, SAWeatherLocation;

@interface SAWeatherAbstractObject : SADomainObject

@property (nonatomic,retain) SAWeatherAirQualityObject * airQuality; 
@property (nonatomic,retain) SAWeatherCurrentConditions * currentConditions; 
@property (nonatomic,copy) NSArray * dailyForecasts; 
@property (nonatomic,copy) NSString * extendedForecastUrl; 
@property (nonatomic,copy) NSArray * hourlyForecasts; 
@property (nonatomic,retain) SAWeatherUnits * units; 
@property (nonatomic,retain) SAWeatherLocation * weatherLocation; 
@property (nonatomic,copy) NSString * weatherRequest; 
+(id)abstractObject;
+(id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAWeatherUnits *)units;
-(void)setUnits:(SAWeatherUnits *)arg1 ;
-(id)encodedClassName;
-(SAWeatherCurrentConditions *)currentConditions;
-(SAWeatherLocation *)weatherLocation;
-(void)setWeatherLocation:(SAWeatherLocation *)arg1 ;
-(SAWeatherAirQualityObject *)airQuality;
-(void)setAirQuality:(SAWeatherAirQualityObject *)arg1 ;
-(void)setCurrentConditions:(SAWeatherCurrentConditions *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSString *)extendedForecastUrl;
-(void)setExtendedForecastUrl:(NSString *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(NSString *)weatherRequest;
-(void)setWeatherRequest:(NSString *)arg1 ;
@end

