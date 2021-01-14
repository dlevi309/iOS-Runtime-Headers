/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class STTemperature, NSNumber;

@interface STWeatherAttributes : STSiriModelObject {

	long long _condition;
	STTemperature* _temperature;
	STTemperature* _highTemperature;
	STTemperature* _lowTemperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(id)temperature;
-(id)chanceOfPrecipitation;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)condition;
-(id)initWithCoder:(id)arg1 ;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5 ;
@end

