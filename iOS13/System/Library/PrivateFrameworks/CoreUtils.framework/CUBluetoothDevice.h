/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	int _primaryPlacement;
	int _secondaryPlacement;
	unsigned _productIdentifier;
	SCD_Struct_CU3 _address;
	NSString* _addressString;
	NSUUID* _identifier;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _name;

}

@property (assign,nonatomic) SCD_Struct_CU3 address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * addressString;                  //@synthesize addressString=_addressString - In the implementation block
@property (assign,nonatomic) int colorCode;                           //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;              //@synthesize connectedServices=_connectedServices - In the implementation block
@property (assign,nonatomic) unsigned deviceFlags;                    //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL magicPaired;                        //@synthesize magicPaired=_magicPaired - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                    //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int primaryPlacement;                    //@synthesize primaryPlacement=_primaryPlacement - In the implementation block
@property (assign,nonatomic) int secondaryPlacement;                  //@synthesize secondaryPlacement=_secondaryPlacement - In the implementation block
@property (assign,nonatomic) BOOL present;                            //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAACPService;                //@synthesize supportsAACPService=_supportsAACPService - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(SCD_Struct_CU3)address;
-(BOOL)present;
-(void)setAddress:(SCD_Struct_CU3)arg1 ;
-(NSString *)addressString;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setAddressString:(NSString *)arg1 ;
-(BOOL)supportsAACPService;
-(int)secondaryPlacement;
-(int)primaryPlacement;
-(unsigned)deviceFlags;
-(void)setDeviceFlags:(unsigned)arg1 ;
-(void)setSupportsAACPService:(BOOL)arg1 ;
-(void)setProductIdentifier:(unsigned)arg1 ;
-(void)setSecondaryPlacement:(int)arg1 ;
-(void)setPrimaryPlacement:(int)arg1 ;
-(void)setMagicPaired:(BOOL)arg1 ;
-(void)setColorCode:(int)arg1 ;
-(void)setConnectedServices:(unsigned)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(unsigned)connectedServices;
-(int)colorCode;
-(BOOL)magicPaired;
-(NSString *)modelNumber;
-(unsigned)productIdentifier;
-(void)setPresent:(BOOL)arg1 ;
@end

