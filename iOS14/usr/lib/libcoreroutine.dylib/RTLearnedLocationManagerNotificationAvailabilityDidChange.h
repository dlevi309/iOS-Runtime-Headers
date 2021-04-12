/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTLearnedLocationManagerNotificationAvailabilityDidChange : RTNotification {

	BOOL _available;

}

@property (nonatomic,readonly) BOOL available;              //@synthesize available=_available - In the implementation block
-(BOOL)available;
-(id)description;
-(id)initWithAvailability:(BOOL)arg1 ;
@end

