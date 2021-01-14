/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSArray, NSString, NSData, NSDateInterval, CRKIdentityConfiguration;

@interface CRKInMemoryCertificate : NSObject <NSSecureCoding, CRKCertificate> {

	NSDateInterval* _validityDateInterval;
	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,retain) NSDateInterval * validityDateInterval;                                  //@synthesize validityDateInterval=_validityDateInterval - In the implementation block
@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)certificateWithData:(id)arg1 ;
-(NSString *)fingerprint;
-(NSData *)dataRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(long long)keySizeInBits;
-(unsigned)hashingAlgorithm;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(NSArray *)commonNames;
-(SecCertificateRef)underlyingCertificate;
-(BOOL)isCertificateAuthority;
-(id)initWithConfiguration:(id)arg1 validityDateInterval:(id)arg2 ;
-(void)setValidityDateInterval:(NSDateInterval *)arg1 ;
@end

