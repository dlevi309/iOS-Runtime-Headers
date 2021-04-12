/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(unsigned long long)state;
-(double)duration;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
@end

