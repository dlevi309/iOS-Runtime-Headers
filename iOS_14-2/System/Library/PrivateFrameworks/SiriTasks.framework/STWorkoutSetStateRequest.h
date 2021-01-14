/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@interface STWorkoutSetStateRequest : AFSiriRequest {

	long long _workoutState;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithState:(long long)arg1 ;
-(long long)workoutState;
@end

