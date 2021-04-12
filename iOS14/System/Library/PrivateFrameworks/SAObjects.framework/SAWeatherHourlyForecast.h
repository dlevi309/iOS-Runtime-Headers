/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * temperature; 
+(id)hourlyForecast;
+(id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)temperature;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTemperature:(NSNumber *)arg1 ;
@end

