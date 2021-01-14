/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol OS_dispatch_source;
@class NSObject, NSString, NSData, NSMutableSet, NSSet;

@interface ACCTransportIOAccessoryManager : ACCTransportIOAccessoryBase {

	BOOL _allAccessoryInfoFieldsAreValid;
	BOOL _needsOOBPairing;
	BOOL _isAuthenticated;
	BOOL _isRootPort;
	BOOL _bAccConnected;
	BOOL _bIsInductive;
	BOOL _bIsInductivePowerToAccessory;
	BOOL _bIsWatch;
	int _accessoryPowerMode;
	int _connectionType;
	int _resistorID;
	NSObject*<OS_dispatch_source> _authTimerAccessory;
	NSString* _deviceName;
	NSString* _deviceVendorName;
	NSString* _deviceModelNumber;
	NSString* _deviceSerialNumber;
	NSString* _deviceHardwareRevision;
	NSString* _deviceFirmwareRevision;
	NSString* _ppid;
	NSData* _digitalID;
	NSString* _connectionUUID;
	NSMutableSet* _mutableioAccessoryChildPorts;
	NSMutableSet* _mutableioAccessoryEAChildPorts;
	NSMutableSet* _mutableioAccessoryAuthCPChildPorts;
	NSMutableSet* _mutableioAccessoryOOBPairingChildPorts;

}

@property (nonatomic,retain) NSMutableSet * mutableioAccessoryChildPorts;                        //@synthesize mutableioAccessoryChildPorts=_mutableioAccessoryChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryEAChildPorts;                      //@synthesize mutableioAccessoryEAChildPorts=_mutableioAccessoryEAChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryAuthCPChildPorts;                  //@synthesize mutableioAccessoryAuthCPChildPorts=_mutableioAccessoryAuthCPChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryOOBPairingChildPorts;              //@synthesize mutableioAccessoryOOBPairingChildPorts=_mutableioAccessoryOOBPairingChildPorts - In the implementation block
@property (assign,nonatomic) int resistorID;                                                     //@synthesize resistorID=_resistorID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceVendorName;                                        //@synthesize deviceVendorName=_deviceVendorName - In the implementation block
@property (nonatomic,retain) NSString * deviceModelNumber;                                       //@synthesize deviceModelNumber=_deviceModelNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                                      //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareRevision;                                  //@synthesize deviceHardwareRevision=_deviceHardwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceFirmwareRevision;                                  //@synthesize deviceFirmwareRevision=_deviceFirmwareRevision - In the implementation block
@property (nonatomic,retain) NSString * ppid;                                                    //@synthesize ppid=_ppid - In the implementation block
@property (nonatomic,retain) NSData * digitalID;                                                 //@synthesize digitalID=_digitalID - In the implementation block
@property (nonatomic,readonly) BOOL bIsInductive;                                                //@synthesize bIsInductive=_bIsInductive - In the implementation block
@property (nonatomic,readonly) BOOL bIsInductivePowerToAccessory;                                //@synthesize bIsInductivePowerToAccessory=_bIsInductivePowerToAccessory - In the implementation block
@property (nonatomic,readonly) BOOL bIsWatch;                                                    //@synthesize bIsWatch=_bIsWatch - In the implementation block
@property (nonatomic,readonly) NSSet * ioAccessoryChildPorts; 
@property (nonatomic,readonly) NSSet * eaProtocolChildPorts; 
@property (nonatomic,readonly) NSSet * authCPChildPorts; 
@property (nonatomic,readonly) NSSet * oobPairingChildPorts; 
@property (assign,nonatomic) int accessoryPowerMode;                                             //@synthesize accessoryPowerMode=_accessoryPowerMode - In the implementation block
@property (assign,nonatomic) BOOL needsOOBPairing;                                               //@synthesize needsOOBPairing=_needsOOBPairing - In the implementation block
@property (assign,nonatomic) BOOL isAuthenticated;                                               //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (nonatomic,readonly) BOOL isRootPort;                                                  //@synthesize isRootPort=_isRootPort - In the implementation block
@property (nonatomic,readonly) int connectionType;                                               //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL bAccConnected;                                                 //@synthesize bAccConnected=_bAccConnected - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> authTimerAccessory;                 //@synthesize authTimerAccessory=_authTimerAccessory - In the implementation block
@property (nonatomic,copy) NSString * connectionUUID;                                            //@synthesize connectionUUID=_connectionUUID - In the implementation block
-(NSString *)ppid;
-(void)setPpid:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(NSString *)deviceName;
-(void)_sendNotification:(id)arg1 ;
-(void)setMutableioAccessoryAuthCPChildPorts:(NSMutableSet *)arg1 ;
-(void)setConnectionUUID:(NSString *)arg1 ;
-(BOOL)bIsWatch;
-(id)initWithIOService:(unsigned)arg1 ;
-(BOOL)setFeaturesFromAuthStatus:(int)arg1 authCert:(id)arg2 ;
-(BOOL)resetAccessoryBaseCurrent;
-(int)connectionType;
-(unsigned)accessoryChargingCurrentInmA;
-(int)cableType;
-(unsigned)USBCurrentLimitInmA;
-(void)_handleBatteryPackNotification;
-(NSMutableSet *)mutableioAccessoryChildPorts;
-(void)removeIOAccessoryChildPort:(id)arg1 ;
-(void)transportClassTerminated;
-(unsigned)sleepPowerCurrentLimitInmA;
-(NSSet *)ioAccessoryChildPorts;
-(void)_processAccessoryInfo;
-(int)_ACCPlatformUSBModeForIOAccessoryUSBConnectType:(int)arg1 ;
-(NSString *)deviceVendorName;
-(BOOL)supervisedTransportsRestricted;
-(unsigned)USBChargingVoltageInmV;
-(int)resistorID;
-(int)_IOAccUSBModeTypeForSetUSBMode:(int)arg1 ;
-(int)getUSBMode;
-(unsigned)USBCurrentLimitBaseInmA;
-(BOOL)isRootPort;
-(void)_stopAuthTimer;
-(void)setDigitalID:(NSData *)arg1 ;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 ;
-(void)setAccessoryPowerMode:(int)arg1 ;
-(void)setDeviceVendorName:(NSString *)arg1 ;
-(BOOL)isPowerDuringSleepSupported;
-(void)setNeedsOOBPairing:(BOOL)arg1 ;
-(BOOL)setUSBMode:(int)arg1 ;
-(BOOL)bIsInductive;
-(void)setMutableioAccessoryOOBPairingChildPorts:(NSMutableSet *)arg1 ;
-(int)USBCurrentLimitOffsetInmA;
-(void)_clearAccessoryInfo;
-(void)_handlePowerChangeNotification;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setMutableioAccessoryChildPorts:(NSMutableSet *)arg1 ;
-(int)accessoryPowerMode;
-(BOOL)bAccConnected;
-(id)_connectionUUIDsForNotification;
-(NSString *)deviceFirmwareRevision;
-(NSString *)connectionUUID;
-(void)setMutableioAccessoryEAChildPorts:(NSMutableSet *)arg1 ;
-(void)setDeviceHardwareRevision:(NSString *)arg1 ;
-(NSMutableSet *)mutableioAccessoryAuthCPChildPorts;
-(NSMutableSet *)mutableioAccessoryEAChildPorts;
-(void)_registerForIOAccessoryManagerInterestNotifications;
-(BOOL)isBatteryPackModeEnabled;
-(void)_pokeResistorID;
-(NSSet *)authCPChildPorts;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 ;
-(BOOL)setUSBCurrentOffset:(int)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setIsAuthenticated:(BOOL)arg1 ;
-(void)_handleResistorIDChangeNotification:(int)arg1 ;
-(BOOL)isPowerDuringSleepEnabled;
-(NSString *)deviceSerialNumber;
-(NSString *)deviceModelNumber;
-(BOOL)bIsInductivePowerToAccessory;
-(NSObject*<OS_dispatch_source>)authTimerAccessory;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 ;
-(NSString *)deviceHardwareRevision;
-(BOOL)setBatteryPackMode:(BOOL)arg1 ;
-(void)setBAccConnected:(BOOL)arg1 ;
-(NSSet *)eaProtocolChildPorts;
-(void)_handleUSBCurrentLimitNotification;
-(void)setDeviceFirmwareRevision:(NSString *)arg1 ;
-(void)setDeviceModelNumber:(NSString *)arg1 ;
-(int)_connectionTypeForPrimaryPort;
-(void)addIOAccessoryChildPort:(id)arg1 ;
-(NSSet *)oobPairingChildPorts;
-(NSData *)digitalID;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 ;
-(NSMutableSet *)mutableioAccessoryOOBPairingChildPorts;
-(void)dealloc;
-(void)setResistorID:(int)arg1 ;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 ;
-(BOOL)needsOOBPairing;
@end

