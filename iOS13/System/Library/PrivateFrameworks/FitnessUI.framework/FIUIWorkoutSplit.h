/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@interface FIUIWorkoutSplit : NSObject {

	double _distanceInMeters;
	double _duration;

}

@property (assign,nonatomic) double distanceInMeters;              //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)distanceInMeters;
-(void)setDistanceInMeters:(double)arg1 ;
-(id)initWithDistance:(double)arg1 duration:(double)arg2 ;
@end

