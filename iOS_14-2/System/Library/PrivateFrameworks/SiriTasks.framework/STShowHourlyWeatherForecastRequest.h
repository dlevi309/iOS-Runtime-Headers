/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, NSArray, STCity;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {

	STWeatherAttributes* _currentAttributes;
	NSArray* _hourlyAttributes;
	STCity* _city;
	long long _startHour;
	long long _forecastType;

}
+(BOOL)supportsSecureCoding;
-(long long)forecastType;
-(id)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)currentAttributes;
-(long long)startHour;
-(id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5 ;
-(id)hourlyAttributes;
@end

