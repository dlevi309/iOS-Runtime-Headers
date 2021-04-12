/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)condition;
-(id)temperature;
-(id)chanceOfPrecipitation;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5 ;
@end

