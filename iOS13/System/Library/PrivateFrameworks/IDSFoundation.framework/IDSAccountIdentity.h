/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSMPFullAccountIdentity *)accountIdentity;
-(IDSMPFullServiceIdentityAdmin *)adminIdentity;
-(IDSMPFullServiceIdentitySigning *)signingIdentity;
-(id)initWithFullCluster:(id)arg1 ;
-(IDSMPFullAccountIdentityCluster *)identityCluster;
-(IDSPublicAccountIdentity *)accountPublicKey;
@end

