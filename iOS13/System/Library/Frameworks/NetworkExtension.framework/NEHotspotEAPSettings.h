/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData;

@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _tlsClientCertificateRequired;
	NSArray* _supportedEAPTypes;
	NSString* _username;
	NSString* _outerIdentity;
	long long _ttlsInnerAuthenticationType;
	NSString* _password;
	NSArray* _trustedServerNames;
	long long _preferredTLSVersion;
	NSArray* _clientTrustChainReference;
	NSData* _identityReference;
	NSArray* _trustedServerCertificateReferences;

}

@property (copy) NSArray * clientTrustChainReference;                                             //@synthesize clientTrustChainReference=_clientTrustChainReference - In the implementation block
@property (copy) NSData * identityReference;                                                      //@synthesize identityReference=_identityReference - In the implementation block
@property (copy) NSArray * trustedServerCertificateReferences;                                    //@synthesize trustedServerCertificateReferences=_trustedServerCertificateReferences - In the implementation block
@property (copy) NSArray * supportedEAPTypes;                                                     //@synthesize supportedEAPTypes=_supportedEAPTypes - In the implementation block
@property (copy) NSString * username;                                                             //@synthesize username=_username - In the implementation block
@property (copy) NSString * outerIdentity;                                                        //@synthesize outerIdentity=_outerIdentity - In the implementation block
@property (assign) long long ttlsInnerAuthenticationType;                                         //@synthesize ttlsInnerAuthenticationType=_ttlsInnerAuthenticationType - In the implementation block
@property (copy) NSString * password;                                                             //@synthesize password=_password - In the implementation block
@property (copy) NSArray * trustedServerNames;                                                    //@synthesize trustedServerNames=_trustedServerNames - In the implementation block
@property (getter=isTLSClientCertificateRequired) BOOL tlsClientCertificateRequired;              //@synthesize tlsClientCertificateRequired=_tlsClientCertificateRequired - In the implementation block
@property (assign) long long preferredTLSVersion;                                                 //@synthesize preferredTLSVersion=_preferredTLSVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)setIdentity:(SecIdentityRef)arg1 ;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSData *)identityReference;
-(NSArray *)supportedEAPTypes;
-(NSString *)outerIdentity;
-(NSArray *)trustedServerNames;
-(BOOL)isTLSClientCertificateRequired;
-(long long)preferredTLSVersion;
-(void)setSupportedEAPTypes:(NSArray *)arg1 ;
-(void)setOuterIdentity:(NSString *)arg1 ;
-(void)setTtlsInnerAuthenticationType:(long long)arg1 ;
-(void)setClientTrustChainReference:(NSArray *)arg1 ;
-(void)setTrustedServerNames:(NSArray *)arg1 ;
-(void)setTrustedServerCertificateReferences:(NSArray *)arg1 ;
-(void)setTlsClientCertificateRequired:(BOOL)arg1 ;
-(void)setPreferredTLSVersion:(long long)arg1 ;
-(long long)ttlsInnerAuthenticationType;
-(NSArray *)clientTrustChainReference;
-(NSArray *)trustedServerCertificateReferences;
-(BOOL)setTrustedServerCertificates:(id)arg1 ;
@end

