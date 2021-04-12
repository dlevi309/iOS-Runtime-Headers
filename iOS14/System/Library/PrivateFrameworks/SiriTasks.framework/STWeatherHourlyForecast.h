/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject {

	long long _timeIndex;
	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(id)temperature;
-(long long)conditionCode;
-(id)chanceOfPrecipitation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)timeIndex;
-(id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4 ;
@end

