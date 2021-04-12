/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification {

	double _intervalSinceLastUpdate;

}

@property (assign,nonatomic) double intervalSinceLastUpdate;              //@synthesize intervalSinceLastUpdate=_intervalSinceLastUpdate - In the implementation block
-(id)description;
-(double)intervalSinceLastUpdate;
-(id)initWithIntervalSinceLastUpdate:(double)arg1 ;
-(void)setIntervalSinceLastUpdate:(double)arg1 ;
@end

