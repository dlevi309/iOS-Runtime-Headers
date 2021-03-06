/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)productName;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)validKey;
-(NSString *)name;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(id)description;
-(NSString *)deviceColor;
-(void)setValidKey:(BOOL)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(long long)keyCounter;
-(void)setKeyCounter:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
@end

