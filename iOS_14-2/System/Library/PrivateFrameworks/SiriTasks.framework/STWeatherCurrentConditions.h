/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {

	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _highTemperature;
	NSNumber* _lowTemperature;

}
+(BOOL)supportsSecureCoding;
-(id)temperature;
-(long long)conditionCode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 ;
@end

