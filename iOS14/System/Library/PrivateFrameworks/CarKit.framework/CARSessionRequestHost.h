/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CARSessionRequestHost : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSArray* _wiredIPv6Addresses;
	NSArray* _wirelessIPv6Addresses;
	long long _port;
	NSString* _carplayWiFiUUID;
	NSString* _deviceIdentifier;
	NSString* _publicKey;
	NSString* _sourceVersion;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSArray * wiredIPv6Addresses;                 //@synthesize wiredIPv6Addresses=_wiredIPv6Addresses - In the implementation block
@property (nonatomic,copy) NSArray * wirelessIPv6Addresses;              //@synthesize wirelessIPv6Addresses=_wirelessIPv6Addresses - In the implementation block
@property (assign,nonatomic) long long port;                             //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * carplayWiFiUUID;                   //@synthesize carplayWiFiUUID=_carplayWiFiUUID - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * publicKey;                         //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                     //@synthesize sourceVersion=_sourceVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPort:(long long)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)publicKey;
-(long long)port;
-(void)setPublicKey:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)wiredIPv6Addresses;
-(NSArray *)wirelessIPv6Addresses;
-(NSString *)sourceVersion;
-(NSString *)carplayWiFiUUID;
-(id)initWithHostProperties:(id)arg1 ;
-(void)setWiredIPv6Addresses:(NSArray *)arg1 ;
-(void)setWirelessIPv6Addresses:(NSArray *)arg1 ;
-(void)setCarplayWiFiUUID:(NSString *)arg1 ;
-(void)setSourceVersion:(NSString *)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end

