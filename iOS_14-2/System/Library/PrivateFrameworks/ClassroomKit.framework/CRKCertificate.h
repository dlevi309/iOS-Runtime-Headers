/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray, NSString, NSData, NSDateInterval;


@protocol CRKCertificate <CRKKeychainItem>
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) NSDateInterval * validityDateInterval; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
@required
-(NSString *)fingerprint;
-(NSData *)dataRepresentation;
-(long long)keySizeInBits;
-(unsigned)hashingAlgorithm;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(NSArray *)commonNames;
-(SecCertificateRef)underlyingCertificate;
-(BOOL)isCertificateAuthority;

@end

