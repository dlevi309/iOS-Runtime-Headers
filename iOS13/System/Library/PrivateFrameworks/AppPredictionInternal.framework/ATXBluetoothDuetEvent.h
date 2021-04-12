/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXBluetoothDuetEvent : ATXDuetEvent {

	NSString* _deviceIdentifier;
	NSString* _deviceName;
	long long _bluetoothState;
	long long _deviceType;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                    //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,readonly) long long deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
+(long long)deviceTypeFromBluetoothDeviceType:(id)arg1 ;
-(id)description;
-(id)identifier;
-(long long)deviceType;
-(NSString *)deviceIdentifier;
-(NSString *)deviceName;
-(long long)bluetoothState;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 ;
@end

