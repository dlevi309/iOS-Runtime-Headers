/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFPeerDevice : NSObject <NSSecureCoding> {

	BOOL _defaultPairedDevice;
	BOOL _validKey;
	NSString* _uniqueID;
	NSString* _modelIdentifier;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _name;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	long long _keyCounter;

}

@property (copy) NSString * uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (copy) NSString * modelIdentifier;                                    //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (copy) NSString * productName;                                        //@synthesize productName=_productName - In the implementation block
@property (copy) NSString * productVersion;                                     //@synthesize productVersion=_productVersion - In the implementation block
@property (copy) NSString * productBuildVersion;                                //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (copy) NSString * deviceColor;                                        //@synthesize deviceColor=_deviceColor - In the implementation block
@property (copy) NSString * enclosureColor;                                     //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (getter=isDefaultPairedDevice) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign) BOOL validKey;                                               //@synthesize validKey=_validKey - In the implementation block
@property (assign) long long keyCounter;                                        //@synthesize keyCounter=_keyCounter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSString *)productVersion;
-(NSString *)modelIdentifier;
-(NSString *)productBuildVersion;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(BOOL)isDefaultPairedDevice;
-(NSString *)enclosureColor;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)validKey;
-(void)setValidKey:(BOOL)arg1 ;
-(long long)keyCounter;
-(void)setKeyCounter:(long long)arg1 ;
@end

