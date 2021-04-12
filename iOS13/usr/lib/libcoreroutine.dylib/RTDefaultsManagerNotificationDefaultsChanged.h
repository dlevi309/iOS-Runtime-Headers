/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification {

	NSArray* _updatedKeys;

}

@property (nonatomic,readonly) NSArray * updatedKeys;              //@synthesize updatedKeys=_updatedKeys - In the implementation block
-(id)init;
-(NSArray *)updatedKeys;
-(id)initWithUpdatedKeys:(id)arg1 ;
@end

