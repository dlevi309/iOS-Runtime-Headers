/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTLocationManagerNotificationLocationsLeeched : RTNotification {

	NSArray* _leechedLocations;

}

@property (nonatomic,readonly) NSArray * leechedLocations;              //@synthesize leechedLocations=_leechedLocations - In the implementation block
-(id)initWithLocations:(id)arg1 ;
-(NSArray *)leechedLocations;
@end

