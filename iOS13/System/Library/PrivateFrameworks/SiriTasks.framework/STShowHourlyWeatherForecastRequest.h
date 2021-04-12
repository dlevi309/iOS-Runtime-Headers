/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)city;
-(id)createResponse;
-(long long)forecastType;
-(id)currentAttributes;
-(id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5 ;
-(id)hourlyAttributes;
-(long long)startHour;
@end

