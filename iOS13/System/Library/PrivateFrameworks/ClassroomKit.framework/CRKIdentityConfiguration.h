/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,copy,readonly) NSString * commonName;                      //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (assign,nonatomic) long long keySizeInBits;                           //@synthesize keySizeInBits=_keySizeInBits - In the implementation block
@property (assign,nonatomic) BOOL createsCertificateAuthority;                  //@synthesize createsCertificateAuthority=_createsCertificateAuthority - In the implementation block
@property (assign,nonatomic) unsigned hashingAlgorithm;                         //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL addsClientAuthAndServerAuthEKUs;              //@synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)defaultKeySizeInBits;
+(BOOL)defaultCreatesCertificateAuthority;
+(unsigned)defaultHashingAlgorithm;
+(id)configurationWithData:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSString *)commonName;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(BOOL)createsCertificateAuthority;
-(BOOL)addsClientAuthAndServerAuthEKUs;
-(id)initWithCommonName:(id)arg1 ;
-(void)setKeySizeInBits:(long long)arg1 ;
-(void)setCreatesCertificateAuthority:(BOOL)arg1 ;
-(void)setHashingAlgorithm:(unsigned)arg1 ;
-(void)setAddsClientAuthAndServerAuthEKUs:(BOOL)arg1 ;
@end

