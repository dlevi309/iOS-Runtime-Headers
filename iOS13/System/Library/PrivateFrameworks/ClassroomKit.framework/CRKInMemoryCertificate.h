/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSArray, NSString, NSData, NSDateInterval, CRKIdentityConfiguration;

@interface CRKInMemoryCertificate : NSObject <CRKCertificate> {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) NSDateInterval * validityDateInterval; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(NSString *)fingerprint;
-(SecCertificateRef)underlyingCertificate;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(NSArray *)commonNames;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(BOOL)isCertificateAuthority;
@end

