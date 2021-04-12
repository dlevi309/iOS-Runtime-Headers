/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPersistenceManagerNotificationAvailabilityDidChange : RTNotification {

	unsigned long long _availability;

}

@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
-(id)description;
-(unsigned long long)availability;
-(id)initWithAvailability:(unsigned long long)arg1 ;
@end

