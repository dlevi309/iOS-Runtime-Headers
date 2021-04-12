/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/AXPSAPDevice.h>

@class NSMutableArray, NSString, NSArray, CBPeripheral;

@interface AXFakePSAPDevice : AXPSAPDevice {

	NSMutableArray* _leftFakePrograms;
	NSMutableArray* _rightFakePrograms;
	/*^block*/id _writeBlock;
	BOOL _isConnecting;
	BOOL _connected;
	unsigned long long _deviceType;
	NSString* _name;
	NSArray* _manufacturer;
	NSArray* _model;
	NSString* _leftUUID;
	NSString* _rightUUID;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	CBPeripheral* leftPeripheral;
	CBPeripheral* rightPeripheral;
	unsigned long long _type;
	unsigned long long _excludedProperties;

}

@property (assign,nonatomic) BOOL connected;                                     //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSArray * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                               //@synthesize rightUUID=_rightUUID - In the implementation block
@property (assign,nonatomic) BOOL isConnecting;                                  //@synthesize isConnecting=_isConnecting - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                     //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                    //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                     //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                    //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                      //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long excludedProperties;              //@synthesize excludedProperties=_excludedProperties - In the implementation block
@property (nonatomic,retain) CBPeripheral * leftPeripheral; 
@property (nonatomic,retain) CBPeripheral * rightPeripheral; 
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)disconnect;
-(NSArray *)model;
-(void)setModel:(NSArray *)arg1 ;
-(unsigned long long)deviceType;
-(void)connect;
-(BOOL)isPersistent;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(NSArray *)manufacturer;
-(void)setManufacturer:(NSArray *)arg1 ;
-(BOOL)isConnecting;
-(void)persist;
-(id)initWithDeviceType:(unsigned long long)arg1 ;
-(id)manufacturerForType;
-(id)modelForType;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(BOOL)leftAvailable;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(BOOL)rightAvailable;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(void)createPrograms;
-(unsigned long long)excludedProperties;
-(unsigned long long)availablePropertiesForPeripheral:(id)arg1 ;
-(BOOL)programsListsAreEqual;
-(id)leftPrograms;
-(id)rightPrograms;
-(id)persistentRepresentation;
-(BOOL)isLeftConnected;
-(BOOL)isRightConnected;
-(BOOL)hasConnection;
-(BOOL)deviceSupportsProperty:(unsigned long long)arg1 ;
-(BOOL)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2 ;
-(BOOL)showCombinedPrograms;
-(void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(void)writeSignedInt:(char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(BOOL)didLoadBasicProperties;
-(BOOL)didLoadRequiredProperties;
-(void)registerWriteBlock:(/*^block*/id)arg1 ;
-(void)setNewName:(id)arg1 ;
-(BOOL)isFakeDevice;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setIsConnecting:(BOOL)arg1 ;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(CBPeripheral *)leftPeripheral;
-(void)setLeftPeripheral:(CBPeripheral *)arg1 ;
-(CBPeripheral *)rightPeripheral;
-(void)setRightPeripheral:(CBPeripheral *)arg1 ;
-(void)setExcludedProperties:(unsigned long long)arg1 ;
@end

