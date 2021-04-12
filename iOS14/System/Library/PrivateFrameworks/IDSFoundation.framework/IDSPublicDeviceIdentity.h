/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENDevicePublicKey.h>

@class IDSMPPublicLegacyIdentity, IDSMPPublicDeviceIdentity, IDSPublicAccountIdentity, NSString;

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey> {

	IDSMPPublicLegacyIdentity* _legacyIdentity;
	IDSMPPublicDeviceIdentity* _modernIdentity;
	IDSPublicAccountIdentity* _accountIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * legacyIdentity;              //@synthesize legacyIdentity=_legacyIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicDeviceIdentity * modernIdentity;              //@synthesize modernIdentity=_modernIdentity - In the implementation block
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountIdentity;              //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSPublicAccountIdentity *)accountIdentity;
-(id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(IDSMPPublicLegacyIdentity *)legacyIdentity;
-(IDSMPPublicDeviceIdentity *)modernIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

