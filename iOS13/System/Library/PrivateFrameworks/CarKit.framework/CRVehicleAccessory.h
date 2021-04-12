/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSString, NSData, NSArray, NSNumber, EAAccessory, NSDictionary;

@interface CRVehicleAccessory : NSObject {

	BOOL _supportsUSBCarPlay;
	BOOL _supportsWirelessCarPlay;
	BOOL _supportsWiredBluetoothPairing;
	BOOL _supportsEnhancedIntegration;
	NSString* _vehicleName;
	NSString* _vehicleModelName;
	NSData* _certificateSerialNumber;
	NSArray* _accessoryProtocols;
	NSString* _bluetoothAddress;
	NSString* _PPID;
	NSNumber* _connectionID;
	EAAccessory* _accessory;
	NSDictionary* _vehicleInfoDataCache;
	NSDictionary* _vehicleAccessoryInfoKeysCache;

}

@property (nonatomic,retain) NSString * vehicleName;                                  //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,retain) NSString * vehicleModelName;                             //@synthesize vehicleModelName=_vehicleModelName - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;                        //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSArray * accessoryProtocols;                            //@synthesize accessoryProtocols=_accessoryProtocols - In the implementation block
@property (nonatomic,retain) NSString * bluetoothAddress;                             //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSNumber * connectionID;                                 //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) BOOL supportsUSBCarPlay;                                 //@synthesize supportsUSBCarPlay=_supportsUSBCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWirelessCarPlay;                            //@synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWiredBluetoothPairing;                      //@synthesize supportsWiredBluetoothPairing=_supportsWiredBluetoothPairing - In the implementation block
@property (assign,nonatomic) BOOL supportsEnhancedIntegration;                        //@synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration - In the implementation block
@property (assign,nonatomic,__weak) EAAccessory * accessory;                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * PPID;                                         //@synthesize PPID=_PPID - In the implementation block
@property (nonatomic,copy) NSDictionary * vehicleInfoDataCache;                       //@synthesize vehicleInfoDataCache=_vehicleInfoDataCache - In the implementation block
@property (nonatomic,copy) NSDictionary * vehicleAccessoryInfoKeysCache;              //@synthesize vehicleAccessoryInfoKeysCache=_vehicleAccessoryInfoKeysCache - In the implementation block
-(id)description;
-(id)displayName;
-(EAAccessory *)accessory;
-(void)setAccessory:(EAAccessory *)arg1 ;
-(NSNumber *)connectionID;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(void)setConnectionID:(NSNumber *)arg1 ;
-(NSString *)vehicleName;
-(NSData *)certificateSerialNumber;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setSupportsEnhancedIntegration:(BOOL)arg1 ;
-(void)setAccessoryProtocols:(NSArray *)arg1 ;
-(void)setVehicleModelName:(NSString *)arg1 ;
-(void)setPPID:(NSString *)arg1 ;
-(BOOL)supportsEnhancedIntegration;
-(NSArray *)accessoryProtocols;
-(NSString *)vehicleModelName;
-(NSString *)PPID;
-(id)vehicleAccessoryInfoKeys;
-(BOOL)supportsWirelessCarPlay;
-(NSDictionary *)vehicleInfoDataCache;
-(NSDictionary *)vehicleAccessoryInfoKeysCache;
-(void)setVehicleAccessoryInfoKeysCache:(NSDictionary *)arg1 ;
-(BOOL)isBluetoothConnected;
-(id)radarDescription;
-(id)analyticsDescription;
-(BOOL)_updateName;
-(void)beginWiredBluetoothPairing:(/*^block*/id)arg1 ;
-(void)requestWiFiCredentials;
-(void)sendDeviceTransportIdentifiers;
-(BOOL)supportsUSBCarPlay;
-(void)setSupportsUSBCarPlay:(BOOL)arg1 ;
-(void)setSupportsWirelessCarPlay:(BOOL)arg1 ;
-(BOOL)supportsWiredBluetoothPairing;
-(void)setSupportsWiredBluetoothPairing:(BOOL)arg1 ;
-(void)setVehicleInfoDataCache:(NSDictionary *)arg1 ;
@end

