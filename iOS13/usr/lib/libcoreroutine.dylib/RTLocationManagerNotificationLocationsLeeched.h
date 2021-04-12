/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

