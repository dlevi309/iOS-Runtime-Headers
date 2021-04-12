/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKAccountInfo : NSObject <NSSecureCoding> {

	BOOL _hasValidCredentials;
	BOOL _isFromCache;
	long long _validationCounter;
	long long _accountStatus;
	long long _accountPartition;
	long long _deviceToDeviceEncryptionAvailability;

}

@property (assign) long long validationCounter;                                           //@synthesize validationCounter=_validationCounter - In the implementation block
@property (assign,nonatomic) BOOL isFromCache;                                            //@synthesize isFromCache=_isFromCache - In the implementation block
@property (assign,nonatomic) BOOL supportsDeviceToDeviceEncryption; 
@property (assign,nonatomic) long long deviceToDeviceEncryptionAvailability;              //@synthesize deviceToDeviceEncryptionAvailability=_deviceToDeviceEncryptionAvailability - In the implementation block
@property (assign,nonatomic) long long accountStatus;                                     //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) long long accountPartition;                                  //@synthesize accountPartition=_accountPartition - In the implementation block
@property (assign,nonatomic) BOOL hasValidCredentials;                                    //@synthesize hasValidCredentials=_hasValidCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cachedAccountInfoForSetupInfoHash:(id)arg1 ;
+(void)setCachedAccountInfoByContainerSetupHash:(id)arg1 ;
+(id)cachedAccountInfoByContainerSetupHash;
+(void)invalidateCachedAccountInfo;
-(void)setAsCachedAccountInfoForSetupInfoHash:(id)arg1 ;
-(id)init;
-(long long)accountStatus;
-(id)CKPropertiesDescription;
-(void)setIsFromCache:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(void)setAccountPartition:(long long)arg1 ;
-(long long)validationCounter;
-(id)description;
-(void)setHasValidCredentials:(BOOL)arg1 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(void)setValidationCounter:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupportsDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)hasValidCredentials;
-(long long)accountPartition;
-(void)setDeviceToDeviceEncryptionAvailability:(long long)arg1 ;
-(BOOL)isFromCache;
-(BOOL)isEqual:(id)arg1 ;
-(long long)deviceToDeviceEncryptionAvailability;
@end

