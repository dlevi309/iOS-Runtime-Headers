/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(double)kilocalories;
-(double)kilometers;
-(double)duration;
-(BOOL)isFirstParty;
-(id)initWithWorkout:(id)arg1 ;
@end

