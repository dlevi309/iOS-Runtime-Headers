/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSString, NSArray, NSData, NSDateInterval;

@interface CRKConcreteCertificate : NSObject <CRKCertificate> {

	SecCertificateRef _underlyingCertificate;

}

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
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate;                              //@synthesize underlyingCertificate=_underlyingCertificate - In the implementation block
+(id)certificateWithData:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSData *)dataRepresentation;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(NSString *)fingerprint;
-(SecCertificateRef)underlyingCertificate;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(NSArray *)commonNames;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(BOOL)isCertificateAuthority;
@end

