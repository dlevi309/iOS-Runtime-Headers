/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, NSArray, STCity;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest {

	STWeatherAttributes* _currentAttributes;
	NSArray* _dailyAttributes;
	STCity* _city;
	long long _startWeekday;

}
+(BOOL)supportsSecureCoding;
-(id)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)currentAttributes;
-(id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4 ;
-(id)dailyAttributes;
-(long long)startWeekday;
@end

