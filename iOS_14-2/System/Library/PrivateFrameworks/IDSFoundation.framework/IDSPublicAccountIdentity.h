/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountPublicKey.h>

@class IDSMPPublicAccountIdentity, IDSMPPublicServiceIdentityAdmin, IDSMPPublicServiceIdentitySigning, NSString;

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey> {

	IDSMPPublicAccountIdentity* _accountIdentity;
	IDSMPPublicServiceIdentityAdmin* _adminIdentity;
	IDSMPPublicServiceIdentitySigning* _signingIdentity;

}

@property (nonatomic,readonly) IDSMPPublicAccountIdentity * accountIdentity;                     //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentityAdmin * adminIdentity;                  //@synthesize adminIdentity=_adminIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentitySigning * signingIdentity;              //@synthesize signingIdentity=_signingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSMPPublicAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3 ;
-(IDSMPPublicServiceIdentitySigning *)signingIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IDSMPPublicServiceIdentityAdmin *)adminIdentity;
@end

