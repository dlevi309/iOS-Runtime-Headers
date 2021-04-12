/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@interface ACHWorkoutEvaluationWorkoutProperties : NSObject {

	BOOL _isFirstParty;
	unsigned long long _type;
	double _duration;
	double _kilocalories;
	double _kilometers;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double kilocalories;                  //@synthesize kilocalories=_kilocalories - In the implementation block
@property (nonatomic,readonly) double kilometers;                    //@synthesize kilometers=_kilometers - In the implementation block
@property (nonatomic,readonly) BOOL isFirstParty;                    //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(BOOL)isFirstParty;
-(double)kilocalories;
-(double)kilometers;
-(unsigned long long)type;
-(double)duration;
-(id)initWithWorkout:(id)arg1 ;
@end

