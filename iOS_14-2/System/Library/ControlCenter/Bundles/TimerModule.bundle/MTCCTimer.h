/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
*/

#import <TimerModule/TimerModule-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface MTCCTimer : NSObject <NSCopying> {

	unsigned long long _state;
	double _duration;
	double _remainingTime;
	NSDate* _fireDate;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
-(NSDate *)fireDate;
-(void)setDuration:(double)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

