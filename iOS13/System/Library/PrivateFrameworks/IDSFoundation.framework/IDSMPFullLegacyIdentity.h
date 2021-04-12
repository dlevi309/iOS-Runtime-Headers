/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPFullIdentityRef fullIdentity; 
+(BOOL)supportsSecureCoding;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityWithError:(id*)arg1 ;
+(SecMPFullIdentityRef)_createFullIdentityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
+(SecMPPublicIdentityRef)_copyPublicIdentityFromFullIdentity:(SecMPFullIdentityRef)arg1 error:(id*)arg2 ;
+(id)identityWithError:(id*)arg1 ;
+(id)identityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicIdentityWithError:(id*)arg1 ;
-(id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(id)initWithFullIdentity:(SecMPFullIdentityRef)arg1 ;
-(SecMPFullIdentityRef)fullIdentity;
-(id)protectedHashOfMessageData:(id)arg1 error:(id*)arg2 ;
-(unsigned)dataProtectionClassWithError:(id*)arg1 ;
-(BOOL)updateIdentityToDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
-(BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
@end

