/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSString, NSData, NSArray, NSNumber, EAAccessory, NSDictionary;

@interface CRVehicleAccessory : NSObject {

	BOOL _supportsUSBCarPlay;
	BOOL _supportsWirelessCarPlay;
	BOOL _supportsWiredBluetoothPairing;
	BOOL _supportsCarPlayConnectionRequest;
	BOOL _supportsEnhancedIntegration;
	NSString* _vehicleName;
	NSString* _vehicleModelName;
	NSData* _certificateSerialNumber;
	NSArray* _accessoryProtocols;
	NSString* _bluetoothAddress;
	long long _transportType;
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
@property (assign,nonatomic) long long transportType;                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSNumber * connectionID;                                 //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) BOOL supportsUSBCarPlay;                                 //@synthesize supportsUSBCarPlay=_supportsUSBCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWirelessCarPlay;                            //@synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWiredBluetoothPairing;                      //@synthesize supportsWiredBluetoothPairing=_supportsWiredBluetoothPairing - In the implementation block
@property (assign,nonatomic) BOOL supportsCarPlayConnectionRequest;                   //@synthesize supportsCarPlayConnectionRequest=_supportsCarPlayConnectionRequest - In the implementation block
@property (assign,nonatomic) BOOL supportsEnhancedIntegration;                        //@synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration - In the implementation block
@property (assign,nonatomic,__weak) EAAccessory * accessory;                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * PPID;                                         //@synthesize PPID=_PPID - In the implementation block
@property (nonatomic,copy) NSDictionary * vehicleInfoDataCache;                       //@synthesize vehicleInfoDataCache=_vehicleInfoDataCache - In the implementation block
@property (nonatomic,copy) NSDictionary * vehicleAccessoryInfoKeysCache;              //@synthesize vehicleAccessoryInfoKeysCache=_vehicleAccessoryInfoKeysCache - In the implementation block
+(id)_descriptionForTransportType:(long long)arg1 ;
+(long long)_transportTypeForExternalAccessoryTransportType:(int)arg1 ;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)PPID;
-(NSString *)bluetoothAddress;
-(void)setPPID:(NSString *)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(EAAccessory *)accessory;
-(NSData *)certificateSerialNumber;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setSupportsEnhancedIntegration:(BOOL)arg1 ;
-(void)setAccessoryProtocols:(NSArray *)arg1 ;
-(void)setVehicleModelName:(NSString *)arg1 ;
-(void)setSupportsUSBCarPlay:(BOOL)arg1 ;
-(void)setSupportsWirelessCarPlay:(BOOL)arg1 ;
-(BOOL)supportsEnhancedIntegration;
-(BOOL)supportsUSBCarPlay;
-(BOOL)supportsWirelessCarPlay;
-(NSArray *)accessoryProtocols;
-(NSString *)vehicleModelName;
-(BOOL)supportsCarPlayConnectionRequest;
-(long long)transportType;
-(id)vehicleAccessoryInfoKeys;
-(NSDictionary *)vehicleInfoDataCache;
-(NSDictionary *)vehicleAccessoryInfoKeysCache;
-(NSNumber *)connectionID;
-(void)setVehicleAccessoryInfoKeysCache:(NSDictionary *)arg1 ;
-(BOOL)isBluetoothConnected;
-(id)analyticsDescription;
-(void)beginWiredBluetoothPairing:(/*^block*/id)arg1 ;
-(void)requestWiFiCredentials;
-(void)sendDeviceTransportIdentifiers;
-(BOOL)supportsWiredBluetoothPairing;
-(void)sendWiredCarPlayAvailable:(id)arg1 wirelessCarPlayAvailable:(id)arg2 ;
-(void)setSupportsWiredBluetoothPairing:(BOOL)arg1 ;
-(void)setSupportsCarPlayConnectionRequest:(BOOL)arg1 ;
-(void)setConnectionID:(NSNumber *)arg1 ;
-(void)setVehicleInfoDataCache:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)vehicleName;
-(void)setAccessory:(EAAccessory *)arg1 ;
-(id)radarDescription;
-(BOOL)_updateName;
-(id)displayName;
@end

