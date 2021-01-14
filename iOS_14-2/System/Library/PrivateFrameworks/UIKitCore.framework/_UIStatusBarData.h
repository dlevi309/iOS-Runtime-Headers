/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIStatusBarDataStringEntry, _UIStatusBarDataCellularEntry, _UIStatusBarDataWifiEntry, _UIStatusBarDataBatteryEntry, _UIStatusBarDataBluetoothEntry, _UIStatusBarDataThermalEntry, _UIStatusBarDataActivityEntry, _UIStatusBarDataTetheringEntry, _UIStatusBarDataLocationEntry, _UIStatusBarDataLockEntry, _UIStatusBarDataBoolEntry, _UIStatusBarDataEntry, _UIStatusBarDataVoiceControlEntry, _UIStatusBarDataIntegerEntry, _UIStatusBarDataBackgroundActivityEntry, NSSet;

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding> {

	_UIStatusBarDataStringEntry* _timeEntry;
	_UIStatusBarDataStringEntry* _shortTimeEntry;
	_UIStatusBarDataStringEntry* _dateEntry;
	_UIStatusBarDataStringEntry* _personNameEntry;
	_UIStatusBarDataStringEntry* _deviceNameEntry;
	_UIStatusBarDataCellularEntry* _cellularEntry;
	_UIStatusBarDataCellularEntry* _secondaryCellularEntry;
	_UIStatusBarDataWifiEntry* _wifiEntry;
	_UIStatusBarDataBatteryEntry* _mainBatteryEntry;
	_UIStatusBarDataBluetoothEntry* _bluetoothEntry;
	_UIStatusBarDataThermalEntry* _thermalEntry;
	_UIStatusBarDataActivityEntry* _activityEntry;
	_UIStatusBarDataTetheringEntry* _tetheringEntry;
	_UIStatusBarDataLocationEntry* _locationEntry;
	_UIStatusBarDataLockEntry* _lockEntry;
	_UIStatusBarDataBoolEntry* _quietModeEntry;
	_UIStatusBarDataBoolEntry* _electronicTollCollectionEntry;
	_UIStatusBarDataBoolEntry* _radarEntry;
	_UIStatusBarDataEntry* _rotationLockEntry;
	_UIStatusBarDataEntry* _airplaneModeEntry;
	_UIStatusBarDataEntry* _ttyEntry;
	_UIStatusBarDataEntry* _nikeEntry;
	_UIStatusBarDataEntry* _assistantEntry;
	_UIStatusBarDataEntry* _studentEntry;
	_UIStatusBarDataEntry* _vpnEntry;
	_UIStatusBarDataEntry* _liquidDetectionEntry;
	_UIStatusBarDataVoiceControlEntry* _voiceControlEntry;
	_UIStatusBarDataEntry* _airPlayEntry;
	_UIStatusBarDataEntry* _carPlayEntry;
	_UIStatusBarDataEntry* _alarmEntry;
	_UIStatusBarDataEntry* _sensorActivityEntry;
	_UIStatusBarDataIntegerEntry* _volumeEntry;
	_UIStatusBarDataBackgroundActivityEntry* _backgroundActivityEntry;
	_UIStatusBarDataStringEntry* _backNavigationEntry;
	_UIStatusBarDataStringEntry* _forwardNavigationEntry;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSSet * existingEntryKeys; 
@property (nonatomic,copy) _UIStatusBarDataStringEntry * timeEntry;                                        //@synthesize timeEntry=_timeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * shortTimeEntry;                                   //@synthesize shortTimeEntry=_shortTimeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * dateEntry;                                        //@synthesize dateEntry=_dateEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * personNameEntry;                                  //@synthesize personNameEntry=_personNameEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * deviceNameEntry;                                  //@synthesize deviceNameEntry=_deviceNameEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataCellularEntry * cellularEntry;                                  //@synthesize cellularEntry=_cellularEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataCellularEntry * secondaryCellularEntry;                         //@synthesize secondaryCellularEntry=_secondaryCellularEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataWifiEntry * wifiEntry;                                          //@synthesize wifiEntry=_wifiEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBatteryEntry * mainBatteryEntry;                                //@synthesize mainBatteryEntry=_mainBatteryEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBluetoothEntry * bluetoothEntry;                                //@synthesize bluetoothEntry=_bluetoothEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataThermalEntry * thermalEntry;                                    //@synthesize thermalEntry=_thermalEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataActivityEntry * activityEntry;                                  //@synthesize activityEntry=_activityEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataTetheringEntry * tetheringEntry;                                //@synthesize tetheringEntry=_tetheringEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataLocationEntry * locationEntry;                                  //@synthesize locationEntry=_locationEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataLockEntry * lockEntry;                                          //@synthesize lockEntry=_lockEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBoolEntry * quietModeEntry;                                     //@synthesize quietModeEntry=_quietModeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBoolEntry * electronicTollCollectionEntry;                      //@synthesize electronicTollCollectionEntry=_electronicTollCollectionEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBoolEntry * radarEntry;                                         //@synthesize radarEntry=_radarEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * rotationLockEntry;                                      //@synthesize rotationLockEntry=_rotationLockEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * airplaneModeEntry;                                      //@synthesize airplaneModeEntry=_airplaneModeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * ttyEntry;                                               //@synthesize ttyEntry=_ttyEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * nikeEntry;                                              //@synthesize nikeEntry=_nikeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * assistantEntry;                                         //@synthesize assistantEntry=_assistantEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * studentEntry;                                           //@synthesize studentEntry=_studentEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * vpnEntry;                                               //@synthesize vpnEntry=_vpnEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * liquidDetectionEntry;                                   //@synthesize liquidDetectionEntry=_liquidDetectionEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataVoiceControlEntry * voiceControlEntry;                          //@synthesize voiceControlEntry=_voiceControlEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * airPlayEntry;                                           //@synthesize airPlayEntry=_airPlayEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * carPlayEntry;                                           //@synthesize carPlayEntry=_carPlayEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * alarmEntry;                                             //@synthesize alarmEntry=_alarmEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataEntry * sensorActivityEntry;                                    //@synthesize sensorActivityEntry=_sensorActivityEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataIntegerEntry * volumeEntry;                                     //@synthesize volumeEntry=_volumeEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBackgroundActivityEntry * backgroundActivityEntry;              //@synthesize backgroundActivityEntry=_backgroundActivityEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * backNavigationEntry;                              //@synthesize backNavigationEntry=_backNavigationEntry - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataStringEntry * forwardNavigationEntry;                           //@synthesize forwardNavigationEntry=_forwardNavigationEntry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryKeys;
-(_UIStatusBarDataStringEntry *)deviceNameEntry;
-(void)applyUpdate:(id)arg1 ;
-(_UIStatusBarDataEntry *)airPlayEntry;
-(id)dataByApplyingOverlay:(id)arg1 ;
-(void)setWifiEntry:(_UIStatusBarDataWifiEntry *)arg1 ;
-(void)setForwardNavigationEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(void)setMainBatteryEntry:(_UIStatusBarDataBatteryEntry *)arg1 ;
-(id)dataByApplyingUpdate:(id)arg1 keys:(id)arg2 ;
-(void)setTetheringEntry:(_UIStatusBarDataTetheringEntry *)arg1 ;
-(_UIStatusBarDataBluetoothEntry *)bluetoothEntry;
-(void)setAssistantEntry:(_UIStatusBarDataEntry *)arg1 ;
-(_UIStatusBarDataEntry *)sensorActivityEntry;
-(void)setPersonNameEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(void)setElectronicTollCollectionEntry:(_UIStatusBarDataBoolEntry *)arg1 ;
-(_UIStatusBarDataBoolEntry *)radarEntry;
-(void)setCarPlayEntry:(_UIStatusBarDataEntry *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBackgroundActivityEntry:(_UIStatusBarDataBackgroundActivityEntry *)arg1 ;
-(void)setRotationLockEntry:(_UIStatusBarDataEntry *)arg1 ;
-(_UIStatusBarDataWifiEntry *)wifiEntry;
-(void)makeUpdateFromData:(id)arg1 ;
-(void)setStudentEntry:(_UIStatusBarDataEntry *)arg1 ;
-(_UIStatusBarDataTetheringEntry *)tetheringEntry;
-(_UIStatusBarDataBoolEntry *)electronicTollCollectionEntry;
-(_UIStatusBarDataStringEntry *)shortTimeEntry;
-(_UIStatusBarDataThermalEntry *)thermalEntry;
-(_UIStatusBarDataIntegerEntry *)volumeEntry;
-(_UIStatusBarDataBatteryEntry *)mainBatteryEntry;
-(_UIStatusBarDataStringEntry *)dateEntry;
-(_UIStatusBarDataStringEntry *)backNavigationEntry;
-(void)setNikeEntry:(_UIStatusBarDataEntry *)arg1 ;
-(id)description;
-(void)setVolumeEntry:(_UIStatusBarDataIntegerEntry *)arg1 ;
-(void)setAirPlayEntry:(_UIStatusBarDataEntry *)arg1 ;
-(_UIStatusBarDataBackgroundActivityEntry *)backgroundActivityEntry;
-(void)setShortTimeEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(void)setLocationEntry:(_UIStatusBarDataLocationEntry *)arg1 ;
-(void)setActivityEntry:(_UIStatusBarDataActivityEntry *)arg1 ;
-(void)setDeviceNameEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(void)setTimeEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(_UIStatusBarDataActivityEntry *)activityEntry;
-(_UIStatusBarDataEntry *)assistantEntry;
-(_UIStatusBarDataBoolEntry *)quietModeEntry;
-(void)setAlarmEntry:(_UIStatusBarDataEntry *)arg1 ;
-(unsigned long long)hash;
-(_UIStatusBarDataCellularEntry *)secondaryCellularEntry;
-(void)setCellularEntry:(_UIStatusBarDataCellularEntry *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVpnEntry:(_UIStatusBarDataEntry *)arg1 ;
-(void)setQuietModeEntry:(_UIStatusBarDataBoolEntry *)arg1 ;
-(_UIStatusBarDataEntry *)carPlayEntry;
-(void)setTtyEntry:(_UIStatusBarDataEntry *)arg1 ;
-(void)_applyUpdate:(id)arg1 keys:(id)arg2 ;
-(void)setLiquidDetectionEntry:(_UIStatusBarDataEntry *)arg1 ;
-(_UIStatusBarDataStringEntry *)forwardNavigationEntry;
-(_UIStatusBarDataEntry *)ttyEntry;
-(_UIStatusBarDataEntry *)alarmEntry;
-(_UIStatusBarDataStringEntry *)personNameEntry;
-(_UIStatusBarDataEntry *)airplaneModeEntry;
-(_UIStatusBarDataStringEntry *)timeEntry;
-(_UIStatusBarDataEntry *)nikeEntry;
-(void)setBackNavigationEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(BOOL)isEmpty;
-(id)updateFromData:(id)arg1 ;
-(_UIStatusBarDataLockEntry *)lockEntry;
-(void)setThermalEntry:(_UIStatusBarDataThermalEntry *)arg1 ;
-(void)setLockEntry:(_UIStatusBarDataLockEntry *)arg1 ;
-(void)setRadarEntry:(_UIStatusBarDataBoolEntry *)arg1 ;
-(void)setSensorActivityEntry:(_UIStatusBarDataEntry *)arg1 ;
-(void)setVoiceControlEntry:(_UIStatusBarDataVoiceControlEntry *)arg1 ;
-(_UIStatusBarDataEntry *)vpnEntry;
-(NSSet *)existingEntryKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIStatusBarDataEntry *)liquidDetectionEntry;
-(_UIStatusBarDataLocationEntry *)locationEntry;
-(void)setSecondaryCellularEntry:(_UIStatusBarDataCellularEntry *)arg1 ;
-(_UIStatusBarDataEntry *)studentEntry;
-(void)setAirplaneModeEntry:(_UIStatusBarDataEntry *)arg1 ;
-(void)setBluetoothEntry:(_UIStatusBarDataBluetoothEntry *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_UIStatusBarDataVoiceControlEntry *)voiceControlEntry;
-(void)setDateEntry:(_UIStatusBarDataStringEntry *)arg1 ;
-(_UIStatusBarDataCellularEntry *)cellularEntry;
-(_UIStatusBarDataEntry *)rotationLockEntry;
@end

