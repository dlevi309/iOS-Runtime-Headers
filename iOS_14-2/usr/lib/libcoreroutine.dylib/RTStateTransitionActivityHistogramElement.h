/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying> {

	CMMotionActivity* _activity;
	double _interval;

}

@property (nonatomic,retain) CMMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) double interval;                          //@synthesize interval=_interval - In the implementation block
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(CMMotionActivity *)activity;
-(void)setActivity:(CMMotionActivity *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

