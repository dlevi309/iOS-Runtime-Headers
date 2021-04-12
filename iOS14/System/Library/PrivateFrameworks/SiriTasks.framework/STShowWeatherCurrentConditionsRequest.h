/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	STCity* _city;
	STWeatherUnits* _units;

}
+(BOOL)supportsSecureCoding;
-(id)units;
-(id)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3 ;
@end

