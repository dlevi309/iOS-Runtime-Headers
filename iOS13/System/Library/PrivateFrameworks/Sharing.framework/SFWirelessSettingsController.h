/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


#import <Sharing/Sharing-Structs.h>
@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _airplaneModeEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	unsigned long long _uwbStatus;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;
	unsigned long long _ultraWideBandStatus;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; 
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (readonly) unsigned long long ultraWideBandStatus;                                   //@synthesize ultraWideBandStatus=_ultraWideBandStatus - In the implementation block
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(BOOL)isWifiEnabled;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isBluetoothEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isWirelessAccessPointEnabled;
-(void)setWirelessAccessPointEnabled:(BOOL)arg1 ;
-(BOOL)isWirelessCarPlayEnabled;
-(unsigned long long)ultraWideBandStatus;
@end

