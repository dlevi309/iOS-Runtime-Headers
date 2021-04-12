/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)city;
-(id)units;
-(id)createResponse;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3 ;
@end

