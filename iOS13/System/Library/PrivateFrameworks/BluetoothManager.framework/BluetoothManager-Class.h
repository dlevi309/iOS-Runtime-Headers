/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)setSharedInstanceQueue:(id)arg1 ;
+(int)lastInitError;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)localAddress;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(BOOL)available;
-(BOOL)connected;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(int)bluetoothState;
-(int)powerState;
-(id)connectedDevices;
-(void)_postNotification:(id)arg1 ;
-(id)deviceFromIdentifier:(id)arg1 ;
-(id)pairedDevices;
-(BOOL)_attach;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)disconnectDevice:(id)arg1 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)acceptSSP:(long long)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)startVoiceCommand:(id)arg1 ;
-(void)endVoiceCommand:(id)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)_updateBlacklistMode;
-(void)_updateAirplaneModeStatus;
-(void)_updateBluetoothState;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(BOOL)powered;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(void)scanForServices:(unsigned)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)cancelPairing;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)bluetoothStateActionWithCompletion:(/*^block*/id)arg1 ;
-(void)setBlacklistEnabled:(BOOL)arg1 ;
-(void)disconnectDevicePhysicalLink:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(void)showPowerPrompt;
-(int)maskLocalDeviceEvents:(unsigned)arg1 ;
-(void)_powerChanged;
-(void)_notifyFirstDeviceUnlockCompleted;
-(BOOL)isAnyoneScanning;
-(BOOL)isAnyoneAdvertising;
-(void)_removeDevice:(id)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(void)resetDeviceScanning;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)_restartScan;
-(void)_setScanState:(int)arg1 ;
-(void)_discoveryStateChanged;
-(void)_advertisingChanged;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)pairedNonAppleHAEDevices;
-(void)_pairedStatusChanged;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(id)connectingDevices;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)blacklistEnabled;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(void)bluetoothStateAction;
-(id)connectedDeviceNamesThatMayBeBlacklisted;
-(void)enableTestMode;
@end

