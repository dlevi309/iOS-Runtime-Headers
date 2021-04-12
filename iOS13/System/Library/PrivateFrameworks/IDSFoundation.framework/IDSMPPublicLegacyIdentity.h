/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPPublicIdentityRef publicIdentity; 
+(BOOL)supportsSecureCoding;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPPublicIdentityRef)_createPublicIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(id)initWithPublicIdentity:(SecMPPublicIdentityRef)arg1 ;
-(SecMPPublicIdentityRef)publicIdentity;
@end

