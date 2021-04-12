/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {

	unsigned long long _method;
	unsigned long long _digitalSignatureAlgorithm;

}

@property (assign,nonatomic) unsigned long long method;                                 //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) unsigned long long digitalSignatureAlgorithm;              //@synthesize digitalSignatureAlgorithm=_digitalSignatureAlgorithm - In the implementation block
@property (nonatomic,readonly) BOOL isCertificate; 
@property (nonatomic,readonly) BOOL isDigitalSignature; 
-(void)setDigitalSignatureAlgorithm:(unsigned long long)arg1 ;
-(id)initWithDigitalSignature:(unsigned long long)arg1 ;
-(unsigned long long)digitalSignatureAlgorithm;
-(id)initWithDigitalSignathure:(unsigned long long)arg1 ;
-(BOOL)isCertificate;
-(BOOL)isDigitalSignature;
-(unsigned long long)method;
-(id)description;
-(id)initWithMethod:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setMethod:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

