/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

	NSURLCredentialInternal* _internal;

}

@property (readonly) unsigned long long persistence; 
+(BOOL)supportsSecureCoding;
+(id)credentialWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
+(id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
+(id)credentialForTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)password;
-(id)certificates;
-(SecIdentityRef)identity;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
-(const CFURLCredentialRef)_cfurlcredential;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
-(const CFURLCredentialRef)_CFURLCredential;
-(BOOL)hasPassword;
-(unsigned long long)persistence;
-(BOOL)_hasSWCACreatorAttribute;
-(void)_removeSWCACreatorAttribute;
@end

