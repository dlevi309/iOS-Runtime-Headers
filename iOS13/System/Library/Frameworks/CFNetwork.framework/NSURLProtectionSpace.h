/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isProxy;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)host;
-(long long)port;
-(NSString *)protocol;
-(NSString *)authenticationMethod;
-(SecTrustRef)serverTrust;
-(NSString *)proxyType;
-(NSString *)realm;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_internalInit;
-(id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(BOOL)receivesCredentialSecurely;
-(id)distinguishedNames;
-(CFURLProtectionSpaceRef)_CFURLProtectionSpace;
@end

