/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPPublicIdentityRef publicIdentity; 
+(BOOL)supportsSecureCoding;
+(SecMPPublicIdentityRef)_createPublicIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPublicIdentity:(SecMPPublicIdentityRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(SecMPPublicIdentityRef)publicIdentity;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

