/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding> {

	BOOL _supportsAccessExpressMode;
	NSString* _deviceName;
	NSString* _deviceSerialNumber;
	NSString* _deviceUDID;
	NSString* _productType;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,retain) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                   //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceUDID;                           //@synthesize deviceUDID=_deviceUDID - In the implementation block
@property (nonatomic,retain) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAccessExpressMode;                  //@synthesize supportsAccessExpressMode=_supportsAccessExpressMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(void)setProductType:(NSString *)arg1 ;
-(id)description;
-(NSString *)deviceUDID;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(BOOL)supportsAccessExpressMode;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceUDID:(NSString *)arg1 ;
-(void)setSupportsAccessExpressMode:(BOOL)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
@end

