/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)city;
-(id)createResponse;
-(id)currentAttributes;
-(id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4 ;
-(id)dailyAttributes;
-(long long)startWeekday;
@end

