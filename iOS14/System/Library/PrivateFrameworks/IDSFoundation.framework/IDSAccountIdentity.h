/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountKey.h>

@class IDSMPFullAccountIdentityCluster, IDSMPFullAccountIdentity, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject <ENAccountKey> {

	IDSMPFullAccountIdentityCluster* _identityCluster;

}

@property (nonatomic,readonly) IDSMPFullAccountIdentityCluster * identityCluster;              //@synthesize identityCluster=_identityCluster - In the implementation block
@property (nonatomic,readonly) IDSMPFullAccountIdentity * accountIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentityAdmin * adminIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentitySigning * signingIdentity; 
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountPublicKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSMPFullAccountIdentity *)accountIdentity;
-(IDSMPFullServiceIdentitySigning *)signingIdentity;
-(id)initWithFullCluster:(id)arg1 ;
-(IDSMPFullAccountIdentityCluster *)identityCluster;
-(IDSPublicAccountIdentity *)accountPublicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IDSMPFullServiceIdentityAdmin *)adminIdentity;
@end

