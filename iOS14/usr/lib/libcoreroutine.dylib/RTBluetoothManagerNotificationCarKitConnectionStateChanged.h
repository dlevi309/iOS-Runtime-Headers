/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBluetoothManagerNotificationCarKitConnectionStateChanged : RTNotification {

	long long _carKitConnectionState;

}

@property (nonatomic,readonly) long long carKitConnectionState;              //@synthesize carKitConnectionState=_carKitConnectionState - In the implementation block
-(id)initWithCarKitConnectionState:(long long)arg1 ;
-(long long)carKitConnectionState;
@end

