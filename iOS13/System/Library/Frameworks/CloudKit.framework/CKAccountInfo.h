/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKAccountInfo : NSObject <NSSecureCoding> {

	BOOL _hasValidCredentials;
	long long _accountStatus;
	long long _accountPartition;
	long long _deviceToDeviceEncryptionAvailability;

}

@property (assign,nonatomic) BOOL supportsDeviceToDeviceEncryption; 
@property (assign,nonatomic) long long deviceToDeviceEncryptionAvailability;              //@synthesize deviceToDeviceEncryptionAvailability=_deviceToDeviceEncryptionAvailability - In the implementation block
@property (assign,nonatomic) long long accountStatus;                                     //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) long long accountPartition;                                  //@synthesize accountPartition=_accountPartition - In the implementation block
@property (assign,nonatomic) BOOL hasValidCredentials;                                    //@synthesize hasValidCredentials=_hasValidCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(long long)accountStatus;
-(long long)deviceToDeviceEncryptionAvailability;
-(id)CKPropertiesDescription;
-(long long)accountPartition;
-(BOOL)hasValidCredentials;
-(void)setDeviceToDeviceEncryptionAvailability:(long long)arg1 ;
-(void)setSupportsDeviceToDeviceEncryption:(BOOL)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(void)setAccountPartition:(long long)arg1 ;
-(void)setHasValidCredentials:(BOOL)arg1 ;
@end

