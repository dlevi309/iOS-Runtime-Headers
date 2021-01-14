/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


#import <VoiceOverServices/VoiceOverServices-Structs.h>
@class NSMutableDictionary, NSDictionary, NSArray;

@interface VOSBluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	long long _available;
	unsigned _authorizedServices;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
	BOOL _wantsScanningEnabled;
	BOOL _wantsDiscoveryEnabled;
	NSDictionary* _brailleDriverDeviceDetectionInfo;

}

@property (assign,nonatomic) unsigned authorizedServices;                   //@synthesize authorizedServices=_authorizedServices - In the implementation block
@property (nonatomic,readonly) NSArray * connectingDevices; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (nonatomic,readonly) NSArray * pairedBrailleDevices; 
+(id)sharedInstance;
+(int)lastInitError;
-(BOOL)isDiscoverable;
-(BOOL)connected;
-(BOOL)enabled;
-(long long)powerState;
-(NSArray *)connectingDevices;
-(void)_powerChanged;
-(BOOL)available;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)setAudioConnected:(BOOL)arg1 ;
-(id)init;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(void)resetDeviceScanning;
-(void)connectDevice:(id)arg1 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(void)_restartScan;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_connectabilityChanged;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(NSArray *)pairedDevices;
-(void)_removeDevice:(id)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)cancelPairing;
-(void)postNotification:(id)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(BOOL)audioConnected;
-(BOOL)isAnyoneScanning;
-(void)_postNotification:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(BOOL)devicePairingEnabled;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)setConnectable:(BOOL)arg1 ;
-(BOOL)connectable;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)_discoveryStateChanged;
-(void)dealloc;
-(void)_connectedStatusChanged;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)powered;
-(unsigned)authorizedServices;
-(void)_setDiscoveryAgentScanning:(BOOL)arg1 ;
-(BOOL)isValidBrailleDevice:(id)arg1 ;
-(BOOL)_onlySensorsConnected;
-(id)deviceForAddressString:(id)arg1 ;
-(NSArray *)pairedBrailleDevices;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(id)alertControllerWithVOSBluetoothResult:(unsigned long long)arg1 device:(id)arg2 buttonHandler:(/*^block*/id)arg3 ;
-(void)setAuthorizedServices:(unsigned)arg1 ;
@end

