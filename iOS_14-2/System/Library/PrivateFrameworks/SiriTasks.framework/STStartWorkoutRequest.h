/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {

	long long _activityType;
	long long _locationType;
	long long _goalType;
	long long _userMode;
	HKQuantity* _goal;
	BOOL _isOpenGoal;
	BOOL _skipActivitySetup;

}
+(BOOL)supportsSecureCoding;
-(long long)userMode;
-(long long)activityType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(long long)goalType;
-(long long)locationType;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(id)workoutGoal;
-(id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7 ;
@end

