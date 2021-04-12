/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class NSData, NSString;

@interface MSOID : NSObject {

	NSData* _OIDBytes;
	NSString* _OIDString;
	heim_oid* _Asn1OID;

}

@property (readonly) heim_oid* Asn1OID;                              //@synthesize Asn1OID=_Asn1OID - In the implementation block
@property (readonly) const ccdigest_info* ccdigest; 
@property (readonly) NSData * OIDBytes;                              //@synthesize OIDBytes=_OIDBytes - In the implementation block
@property (readonly) NSString * OIDString;                           //@synthesize OIDString=_OIDString - In the implementation block
@property (readonly) const CFStringRef secKeyAlgorithm; 
+(id)OIDWithString:(id)arg1 error:(id*)arg2 ;
+(id)OIDWithString:(id)arg1 ;
+(id)OIDWithData:(id)arg1 ;
+(id)OIDWithData:(id)arg1 error:(id*)arg2 ;
+(id)digestOIDWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
+(id)signatureAlgorithmOIDWithSecKeyAlgorithm:(CFStringRef)arg1 error:(id*)arg2 ;
+(id)OIDWithAsn1OID:(heim_oid*)arg1 error:(id*)arg2 ;
+(id)RSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
+(id)ECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(id)initDigestOIDWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
-(id)initSignatureOIDWithSecKeyAlgorithm:(CFStringRef)arg1 error:(id*)arg2 ;
-(id)initWithAsn1OID:(heim_oid*)arg1 error:(id*)arg2 ;
-(id)initRSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
-(id)initECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAsn1OidFromOIDString:(id)arg1 error:(id*)arg2 ;
-(NSString *)OIDString;
-(NSData *)OIDBytes;
-(const CFStringRef)secKeyAlgorithm;
-(const ccdigest_info*)ccdigest;
-(heim_oid*)Asn1OID;
@end

