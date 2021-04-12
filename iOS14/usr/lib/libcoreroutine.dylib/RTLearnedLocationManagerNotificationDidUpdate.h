/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

