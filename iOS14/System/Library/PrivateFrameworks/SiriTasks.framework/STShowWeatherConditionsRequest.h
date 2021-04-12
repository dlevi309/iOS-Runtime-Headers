/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {

	STWeatherAttributes* _attributes;
	STCity* _city;

}
+(BOOL)supportsSecureCoding;
-(id)city;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)attributes;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithAttributes:(id)arg1 city:(id)arg2 ;
@end

