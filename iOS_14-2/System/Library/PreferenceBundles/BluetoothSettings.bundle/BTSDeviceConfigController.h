/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@class BTSDevice, NSArray, NSString, NSDictionary, NSMutableArray, PSSpecifier, BTSDeviceLE, CRPairedVehicleManager, CRCarPlayPreferences, PowerUISmartChargeClientAudioAccessories;

@interface BTSDeviceConfigController : PSListController <CRCarPlayPreferencesDelegate> {

	BTSDevice* _device;
	SCD_Struct_BT3 _syncSettings;
	BOOL _supportsMAP;
	BOOL _messagingEnabled;
	BOOL _isWatch;
	NSArray* _versionInfo;
	NSString* _ancAssetVersion;
	NSDictionary* _caseInfo;
	NSArray* _controlGroupSpecifiers;
	NSArray* _messagingSpecifiers;
	NSArray* _syncContactsSpecifiers;
	NSMutableArray* _syncGroupsSpecifiers;
	NSMutableArray* _aacpControlSpecifiers;
	NSMutableArray* _ancsControlSpecifiers;
	NSMutableArray* _nameControlSpecifiers;
	NSMutableArray* _accessoryInfoSpecifiers;
	BOOL _dismissed;
	PSSpecifier* _lastSelectedSyncGroup;
	BTSDeviceLE* _ctkdLeDevice;
	int _spatialNotifyToken;
	CRPairedVehicleManager* _vehicleManager;
	CRCarPlayPreferences* _carplayPreferences;
	unsigned long long _cachedCarplayPairingStatus;
	PowerUISmartChargeClientAudioAccessories* _smartChargeClient;

}

@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;                                   //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (nonatomic,retain) CRCarPlayPreferences * carplayPreferences;                                 //@synthesize carplayPreferences=_carplayPreferences - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCarplayPairingStatus;                             //@synthesize cachedCarplayPairingStatus=_cachedCarplayPairingStatus - In the implementation block
@property (nonatomic,retain) PowerUISmartChargeClientAudioAccessories * smartChargeClient;              //@synthesize smartChargeClient=_smartChargeClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isiPhone;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)clickHoldModeRight;
-(id)doubleTapActionRight;
-(void)handleCarPlayAllowedDidChange;
-(id)ancsAuthorized;
-(void)setListeningMode:(id)arg1 ;
-(int)listeningMode;
-(void)deviceRemoved:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)forgetDevice:(id)arg1 ;
-(id)doubleTapAction;
-(BOOL)canDisconnect;
-(id)micMode;
-(id)doubleTapActionLeft;
-(id)doubleTapCapability;
-(void)deviceUpdated:(id)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(id)clickHoldModeLeft;
-(void)dealloc;
-(void)setMicMode:(id)arg1 ;
-(id)inEarDetectEnabled;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)cancelFitTest;
-(BOOL)nicknameEnabled;
-(BOOL)boolFromBluetoothPreferences:(id)arg1 ;
-(void)userDidTapWatchLink:(id)arg1 ;
-(void)deviceSupportsSync:(id)arg1 ;
-(void)deviceSupportsMAP:(id)arg1 ;
-(void)listeningModeUpdated:(id)arg1 ;
-(void)spatialAudioUpdated:(id)arg1 ;
-(CRCarPlayPreferences *)carplayPreferences;
-(BOOL)deviceSupportsCarPlay;
-(id)_carPlayVehicle;
-(CRPairedVehicleManager *)vehicleManager;
-(void)updateDisconnectButton:(BOOL)arg1 ;
-(BOOL)canUnpair;
-(void)loadSyncSettings;
-(void)setInEarDetectEnabled:(id)arg1 ;
-(id)smartRouteMode;
-(void)setSmartRouteMode:(id)arg1 ;
-(void)setSpatialAudioEnabled:(id)arg1 ;
-(id)spatialAudioEnabled;
-(unsigned long long)cachedCarplayPairingStatus;
-(void)setCachedCarplayPairingStatus:(unsigned long long)arg1 ;
-(void)updateSerialNumberSpecifier:(id)arg1 ;
-(void)updateVersionSpecifier:(id)arg1 ;
-(void)loadAccessorySettings;
-(void)loadAccessoryInfo;
-(void)setANCSAuthorized:(id)arg1 ;
-(void)setCarplayPreferences:(CRCarPlayPreferences *)arg1 ;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(void)handlePairedVehiclesChanged:(id)arg1 ;
-(void)setCarPlayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)carPlayEnabled:(id)arg1 ;
-(void)metaGroupSelected:(id)arg1 ;
-(void)contactGroupSelected:(id)arg1 ;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)setdoubleTapActionLeft:(id)arg1 ;
-(void)setdoubleTapActionRight:(id)arg1 ;
-(void)setGestureMode:(id)arg1 specifier:(id)arg2 ;
-(void)sealDetectSet:(id)arg1 ;
-(id)sealDetect;
-(void)presentFitTestController:(id)arg1 ;
-(void)setAutomaticAnswerCallsEnabled:(id)arg1 ;
-(id)automaticAnswerCallsEnabled;
-(void)presentSpatialTutorialController:(id)arg1 ;
-(void)setOptimizedBatteryChargingEnabled:(id)arg1 ;
-(id)optimizedBatteryChargingEnabled;
-(id)getModelName:(id)arg1 ;
-(id)getModelNumber:(id)arg1 ;
-(id)getSystemSerialNumber:(id)arg1 ;
-(id)getBudLeftSerialNumber:(id)arg1 ;
-(id)getBudRightSerialNumber:(id)arg1 ;
-(id)getBudFirmwareVersion:(id)arg1 ;
-(id)getCaseName:(id)arg1 ;
-(id)getCaseFirmwareVersion:(id)arg1 ;
-(id)getANCAssetVersion:(id)arg1 ;
-(BOOL)isiCloudEnabled;
-(id)messagesEnabled:(id)arg1 ;
-(void)setMessagesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)contactSync:(id)arg1 ;
-(void)setContactSync:(id)arg1 specifier:(id)arg2 ;
-(void)setdoubleTapAction:(id)arg1 ;
-(PowerUISmartChargeClientAudioAccessories *)smartChargeClient;
-(void)setSmartChargeClient:(PowerUISmartChargeClientAudioAccessories *)arg1 ;
@end

