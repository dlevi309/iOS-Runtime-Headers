/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSMutableDictionary;

@interface BluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	int _state;
	BOOL _airplaneMode;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BOOL _scanningInProgress;
	unsigned _scanningServiceMask;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	BTAccessoryManagerImplRef _accessoryManager;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
	BOOL _blacklistEnabled;

}

@property (assign,nonatomic) BOOL blacklistEnabled;              //@synthesize blacklistEnabled=_blacklistEnabled - In the implementation block
+(id)sharedInstance;
+(int)lastInitError;
+(void)setSharedInstanceQueue:(id)arg1 ;
-(long long)localDeviceSupportsService:(unsigned)arg1 ;
-(BOOL)isDiscoverable;
-(BOOL)connected;
-(int)bluetoothState;
-(BOOL)enabled;
-(int)powerState;
-(BOOL)deviceScanningInProgress;
-(id)connectingDevices;
-(void)_powerChanged;
-(BOOL)available;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)setAudioConnected:(BOOL)arg1 ;
-(id)init;
-(void)endVoiceCommand:(id)arg1 ;
-(void)acceptSSP:(long long)arg1 forDevice:(id)arg2 ;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(int)maskLocalDeviceEvents:(unsigned)arg1 ;
-(void)resetDeviceScanning;
-(void)connectDevice:(id)arg1 ;
-(id)localAddress;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)_attach;
-(id)connectedDeviceNamesThatMayBeBlacklisted;
-(BOOL)blacklistEnabled;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(BOOL)isAnyoneAdvertising;
-(void)enableTestMode;
-(void)scanForServices:(unsigned)arg1 ;
-(void)_restartScan;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)_cleanup:(BOOL)arg1 ;
-(id)deviceFromIdentifier:(id)arg1 ;
-(void)_connectabilityChanged;
-(void)_updateBluetoothState;
-(void)showPowerPrompt;
-(void)bluetoothStateActionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(void)bluetoothStateAction;
-(id)pairedDevices;
-(void)setBlacklistEnabled:(BOOL)arg1 ;
-(id)connectedDevices;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(void)startVoiceCommand:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(void)_notifyFirstDeviceUnlockCompleted;
-(void)_advertisingChanged;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)_updateAirplaneModeStatus;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)disconnectDevice:(id)arg1 ;
-(void)unpairDevice:(id)arg1 ;
-(void)_setScanState:(int)arg1 ;
-(void)_pairedStatusChanged;
-(void)cancelPairing;
-(void)postNotification:(id)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(BOOL)audioConnected;
-(BOOL)isAnyoneScanning;
-(void)_postNotification:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)disconnectDevicePhysicalLink:(id)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)setConnectable:(BOOL)arg1 ;
-(BOOL)connectable;
-(id)pairedNonAppleHAEDevices;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)_updateBlacklistMode;
-(void)_discoveryStateChanged;
-(void)dealloc;
-(void)_connectedStatusChanged;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)powered;
@end

