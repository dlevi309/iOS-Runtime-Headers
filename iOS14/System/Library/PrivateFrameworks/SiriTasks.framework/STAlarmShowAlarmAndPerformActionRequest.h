/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarmAction;

@interface STAlarmShowAlarmAndPerformActionRequest : AFSiriRequest {

	STAlarmAction* _action;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)action;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithAction:(id)arg1 ;
@end

