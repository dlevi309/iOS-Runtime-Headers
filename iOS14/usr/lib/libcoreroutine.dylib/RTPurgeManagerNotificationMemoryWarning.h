/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPurgeManagerNotificationMemoryWarning : RTNotification {

	long long _pressureState;

}

@property (assign,nonatomic) long long pressureState;              //@synthesize pressureState=_pressureState - In the implementation block
-(id)initWithMemoryPressureState:(long long)arg1 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
@end

