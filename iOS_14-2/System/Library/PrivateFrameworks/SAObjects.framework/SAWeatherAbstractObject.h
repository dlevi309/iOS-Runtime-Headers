/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SAWeatherUnits *)units;
-(void)setUnits:(SAWeatherUnits *)arg1 ;
-(void)setCurrentConditions:(SAWeatherCurrentConditions *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAWeatherAirQualityObject *)airQuality;
-(void)setAirQuality:(SAWeatherAirQualityObject *)arg1 ;
-(NSString *)extendedForecastUrl;
-(void)setExtendedForecastUrl:(NSString *)arg1 ;
-(NSString *)weatherRequest;
-(void)setWeatherRequest:(NSString *)arg1 ;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(SAWeatherLocation *)weatherLocation;
-(void)setWeatherLocation:(SAWeatherLocation *)arg1 ;
-(SAWeatherCurrentConditions *)currentConditions;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)dailyForecasts;
@end

