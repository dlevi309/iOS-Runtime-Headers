/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@interface FIUIWorkoutSplit : NSObject {

	double _distanceInMeters;
	double _duration;

}

@property (assign,nonatomic) double distanceInMeters;              //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDistanceInMeters:(double)arg1 ;
-(double)distanceInMeters;
-(id)initWithDistance:(double)arg1 duration:(double)arg2 ;
@end

