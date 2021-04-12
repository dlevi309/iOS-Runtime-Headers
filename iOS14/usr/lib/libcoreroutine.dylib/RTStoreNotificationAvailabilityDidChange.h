/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTStoreNotificationAvailabilityDidChange : RTNotification {

	unsigned long long _availability;

}

@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
-(id)description;
-(unsigned long long)availability;
-(id)initWithAvailability:(unsigned long long)arg1 ;
@end

