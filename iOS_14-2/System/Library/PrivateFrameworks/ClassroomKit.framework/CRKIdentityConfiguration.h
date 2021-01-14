/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _createsCertificateAuthority;
	BOOL _addsClientAuthAndServerAuthEKUs;
	unsigned _hashingAlgorithm;
	NSString* _commonName;
	long long _keySizeInBits;
	NSString* _emailAddress;

}

@property (nonatomic,copy,readonly) NSString * commonName;                      //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (assign,nonatomic) long long keySizeInBits;                           //@synthesize keySizeInBits=_keySizeInBits - In the implementation block
@property (assign,nonatomic) BOOL createsCertificateAuthority;                  //@synthesize createsCertificateAuthority=_createsCertificateAuthority - In the implementation block
@property (assign,nonatomic) unsigned hashingAlgorithm;                         //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL addsClientAuthAndServerAuthEKUs;              //@synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                             //@synthesize emailAddress=_emailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)defaultKeySizeInBits;
+(BOOL)defaultCreatesCertificateAuthority;
+(unsigned)defaultHashingAlgorithm;
+(id)configurationWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)init;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)commonName;
-(id)initWithCoder:(id)arg1 ;
-(long long)keySizeInBits;
-(void)setKeySizeInBits:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)hashingAlgorithm;
-(id)initWithCommonName:(id)arg1 ;
-(BOOL)createsCertificateAuthority;
-(BOOL)addsClientAuthAndServerAuthEKUs;
-(void)setCreatesCertificateAuthority:(BOOL)arg1 ;
-(void)setHashingAlgorithm:(unsigned)arg1 ;
-(void)setAddsClientAuthAndServerAuthEKUs:(BOOL)arg1 ;
@end

