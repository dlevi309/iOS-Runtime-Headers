/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject {

	BOOL _magicPaired;
	BOOL _supportsAACPService;
	BOOL _present;
	unsigned _connectedServices;
	int _colorCode;
	unsigned _deviceFlags;
	unsigned _deviceType;
	int _disconnectReason;
	int _primaryPlacement;
	int _secondaryPlacement;
	unsigned _productIdentifier;
	int _streamState;
	unsigned _versionID;
	SCD_Struct_CU6 _address;
	NSString* _addressString;
	NSUUID* _identifier;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _name;

}

@property (assign,nonatomic) SCD_Struct_CU6 address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * addressString;                  //@synthesize addressString=_addressString - In the implementation block
@property (assign,nonatomic) int colorCode;                           //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;              //@synthesize connectedServices=_connectedServices - In the implementation block
@property (assign,nonatomic) unsigned deviceFlags;                    //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (assign,nonatomic) unsigned deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int disconnectReason;                    //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL magicPaired;                        //@synthesize magicPaired=_magicPaired - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                    //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int primaryPlacement;                    //@synthesize primaryPlacement=_primaryPlacement - In the implementation block
@property (assign,nonatomic) int secondaryPlacement;                  //@synthesize secondaryPlacement=_secondaryPlacement - In the implementation block
@property (assign,nonatomic) BOOL present;                            //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) int streamState;                         //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) BOOL supportsAACPService;                //@synthesize supportsAACPService=_supportsAACPService - In the implementation block
@property (assign,nonatomic) unsigned versionID;                      //@synthesize versionID=_versionID - In the implementation block
-(unsigned)versionID;
-(unsigned)deviceType;
-(NSString *)manufacturer;
-(unsigned)connectedServices;
-(id)init;
-(void)setPresent:(BOOL)arg1 ;
-(BOOL)supportsAACPService;
-(int)secondaryPlacement;
-(int)primaryPlacement;
-(void)setSupportsAACPService:(BOOL)arg1 ;
-(void)setSecondaryPlacement:(int)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setPrimaryPlacement:(int)arg1 ;
-(void)setMagicPaired:(BOOL)arg1 ;
-(BOOL)present;
-(int)disconnectReason;
-(void)setDisconnectReason:(int)arg1 ;
-(BOOL)magicPaired;
-(int)streamState;
-(void)setStreamState:(int)arg1 ;
-(void)setDeviceType:(unsigned)arg1 ;
-(void)setDeviceFlags:(unsigned)arg1 ;
-(void)setProductIdentifier:(unsigned)arg1 ;
-(void)setConnectedServices:(unsigned)arg1 ;
-(unsigned)deviceFlags;
-(unsigned)productIdentifier;
-(NSString *)name;
-(id)description;
-(void)setAddressString:(NSString *)arg1 ;
-(SCD_Struct_CU6)address;
-(void)setAddress:(SCD_Struct_CU6)arg1 ;
-(int)colorCode;
-(unsigned long long)hash;
-(NSString *)modelNumber;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)addressString;
-(NSUUID *)identifier;
-(void)setVersionID:(unsigned)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setColorCode:(int)arg1 ;
@end

