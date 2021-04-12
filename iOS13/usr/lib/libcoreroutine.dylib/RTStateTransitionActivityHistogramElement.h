/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(CMMotionActivity *)activity;
-(void)setActivity:(CMMotionActivity *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end

