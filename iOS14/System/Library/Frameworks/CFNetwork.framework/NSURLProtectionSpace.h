/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLProtectionSpaceInternal, NSString;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}

@property (copy,readonly) NSString * realm; 
@property (readonly) BOOL receivesCredentialSecurely; 
@property (readonly) BOOL isProxy; 
@property (copy,readonly) NSString * host; 
@property (readonly) long long port; 
@property (copy,readonly) NSString * proxyType; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * authenticationMethod; 
+(BOOL)supportsSecureCoding;
-(NSString *)realm;
-(long long)port;
-(SecTrustRef)serverTrust;
-(NSString *)host;
-(id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(BOOL)isProxy;
-(id)init;
-(BOOL)receivesCredentialSecurely;
-(CFURLProtectionSpaceRef)_CFURLProtectionSpace;
-(NSString *)protocol;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(NSString *)authenticationMethod;
-(id)distinguishedNames;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)proxyType;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

