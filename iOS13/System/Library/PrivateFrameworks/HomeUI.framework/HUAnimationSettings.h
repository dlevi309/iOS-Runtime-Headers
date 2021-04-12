/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory> {

	float _repeatCount;
	double _duration;
	double _delay;
	double _speed;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) float repeatCount;                                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (nonatomic,readonly) double durationWithSpeed; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 curve:(long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setRepeatCount:(float)arg1 ;
-(float)repeatCount;
-(double)durationWithSpeed;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(double)interpolatedProgressForTime:(double)arg1 ;
-(id)settingsSpedUpByFactor:(double)arg1 ;
@end

