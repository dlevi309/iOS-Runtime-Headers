/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)persistence;
-(SecIdentityRef)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)certificates;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
-(BOOL)_hasSWCACreatorAttribute;
-(id)password;
-(id)description;
-(BOOL)hasPassword;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
-(const CFURLCredentialRef)_CFURLCredential;
-(const CFURLCredentialRef)_cfurlcredential;
-(id)user;
-(unsigned long long)hash;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_removeSWCACreatorAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
@end

