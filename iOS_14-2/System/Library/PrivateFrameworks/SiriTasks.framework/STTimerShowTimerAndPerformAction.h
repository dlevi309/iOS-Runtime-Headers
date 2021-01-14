/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {

	unsigned long long _action;
	STTimer* _timer;

}
+(BOOL)supportsSecureCoding;
-(id)timer;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2 ;
@end

