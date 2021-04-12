/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)method;
-(void)setMethod:(unsigned long long)arg1 ;
-(id)initWithMethod:(unsigned long long)arg1 ;
-(BOOL)isCertificate;
-(void)setDigitalSignatureAlgorithm:(unsigned long long)arg1 ;
-(id)initWithDigitalSignature:(unsigned long long)arg1 ;
-(unsigned long long)digitalSignatureAlgorithm;
-(id)initWithDigitalSignathure:(unsigned long long)arg1 ;
-(BOOL)isDigitalSignature;
@end

