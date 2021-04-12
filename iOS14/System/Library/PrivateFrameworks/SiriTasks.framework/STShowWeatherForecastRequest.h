/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, NSArray, STCity, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	NSArray* _hourlyForecasts;
	STCity* _city;
	STWeatherUnits* _units;
	long long _forecastType;

}
+(BOOL)supportsSecureCoding;
-(id)units;
-(long long)forecastType;
-(id)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)hourlyForecasts;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5 ;
@end

