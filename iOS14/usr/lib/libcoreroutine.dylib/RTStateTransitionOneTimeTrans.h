/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateTransitionOneTimeTrans : NSObject <NSSecureCoding> {

	double _start_s;
	double _stop_s;
	unsigned long long _motionActivityType;

}

@property (assign,nonatomic) double start_s;                                     //@synthesize start_s=_start_s - In the implementation block
@property (assign,nonatomic) double stop_s;                                      //@synthesize stop_s=_stop_s - In the implementation block
@property (assign,nonatomic) unsigned long long motionActivityType;              //@synthesize motionActivityType=_motionActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)stop_s;
-(id)initWithCoder:(id)arg1 ;
-(double)start_s;
-(void)setMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)motionActivityType;
-(id)initWithStart:(double)arg1 stop:(double)arg2 motionActivityType:(unsigned long long)arg3 ;
-(void)setStart_s:(double)arg1 ;
-(void)setStop_s:(double)arg1 ;
@end

