/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification {

	NSArray* _updatedKeys;

}

@property (nonatomic,readonly) NSArray * updatedKeys;              //@synthesize updatedKeys=_updatedKeys - In the implementation block
-(id)init;
-(id)initWithUpdatedKeys:(id)arg1 ;
-(NSArray *)updatedKeys;
@end

