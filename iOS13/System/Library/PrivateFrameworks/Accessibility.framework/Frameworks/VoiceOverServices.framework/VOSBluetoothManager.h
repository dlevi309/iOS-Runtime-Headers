/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
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
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)available;
-(BOOL)connected;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(long long)powerState;
-(void)_postNotification:(id)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(NSArray *)pairedDevices;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(BOOL)powered;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)cancelPairing;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(void)_powerChanged;
-(BOOL)isAnyoneScanning;
-(void)_removeDevice:(id)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(void)resetDeviceScanning;
-(void)_restartScan;
-(void)_discoveryStateChanged;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(NSArray *)connectingDevices;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(unsigned)authorizedServices;
-(void)_setDiscoveryAgentScanning:(BOOL)arg1 ;
-(BOOL)isValidBrailleDevice:(id)arg1 ;
-(BOOL)_onlySensorsConnected;
-(id)deviceForAddressString:(id)arg1 ;
-(NSArray *)pairedBrailleDevices;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(void)setAuthorizedServices:(unsigned)arg1 ;
@end

