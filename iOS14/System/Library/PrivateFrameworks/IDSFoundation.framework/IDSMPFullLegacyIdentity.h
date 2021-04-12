/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPFullIdentityRef fullIdentity; 
+(BOOL)supportsSecureCoding;
+(SecMPPublicIdentityRef)_copyPublicIdentityFromFullIdentity:(SecMPFullIdentityRef)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityWithError:(id*)arg1 ;
+(id)identityWithError:(id*)arg1 ;
+(SecMPFullIdentityRef)_createFullIdentityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
+(id)identityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
-(id)publicIdentityWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)initWithFullIdentity:(SecMPFullIdentityRef)arg1 ;
-(unsigned)dataProtectionClassWithError:(id*)arg1 ;
-(SecMPFullIdentityRef)fullIdentity;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateIdentityToDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)protectedHashOfMessageData:(id)arg1 error:(id*)arg2 ;
@end

