/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@class NSNumber;

@interface PRSessionStartNotification : NSObject {

	long long _notificationType;
	NSNumber* _bluetoothConnectionEventCounterValue;

}

@property (readonly) long long notificationType;                                   //@synthesize notificationType=_notificationType - In the implementation block
@property (readonly) NSNumber * bluetoothConnectionEventCounterValue;              //@synthesize bluetoothConnectionEventCounterValue=_bluetoothConnectionEventCounterValue - In the implementation block
+(id)createWithBluetoothConnectionEventCounterValue:(id)arg1 ;
-(id)init;
-(void)_setType:(long long)arg1 ;
-(long long)notificationType;
-(void)_setBluetoothConnectionEventCounterValue:(id)arg1 ;
-(NSNumber *)bluetoothConnectionEventCounterValue;
@end

