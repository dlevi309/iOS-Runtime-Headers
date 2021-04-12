/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)dataRepresentation;
-(NSString *)fingerprint;
-(SecCertificateRef)underlyingCertificate;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(NSArray *)commonNames;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(BOOL)isCertificateAuthority;

@end

