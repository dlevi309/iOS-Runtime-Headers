/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTMotionActivityHistogramBin : NSObject <NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	double _interval;

}

@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double interval;                            //@synthesize interval=_interval - In the implementation block
-(unsigned long long)confidence;
-(void)addInterval:(double)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)updateConfidence:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(void)setConfidence:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 interval:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

