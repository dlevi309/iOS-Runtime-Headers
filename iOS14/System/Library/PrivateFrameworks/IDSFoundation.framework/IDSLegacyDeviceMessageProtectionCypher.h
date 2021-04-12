/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/ENCypher.h>

@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher> {

	IDSMPPublicLegacyIdentity* _publicIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * publicIdentity;              //@synthesize publicIdentity=_publicIdentity - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cypherWithEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPublicIdentity:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id*)arg2 ;
-(NSString *)identifier;
-(IDSMPPublicLegacyIdentity *)publicIdentity;
@end

