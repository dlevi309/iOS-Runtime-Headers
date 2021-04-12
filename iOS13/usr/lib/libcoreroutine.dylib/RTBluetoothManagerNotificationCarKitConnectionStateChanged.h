/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

