/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)activityType;
-(long long)userMode;
-(long long)locationType;
-(id)createResponse;
-(long long)goalType;
-(id)workoutGoal;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7 ;
@end

