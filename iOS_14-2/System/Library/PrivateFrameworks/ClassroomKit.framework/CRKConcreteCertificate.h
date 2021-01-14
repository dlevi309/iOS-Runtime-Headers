/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSArray, NSString, NSData, NSDateInterval;

@interface CRKConcreteCertificate : NSObject <CRKCertificate> {

	SecCertificateRef _underlyingCertificate;

}

@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) NSDateInterval * validityDateInterval; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate;                              //@synthesize underlyingCertificate=_underlyingCertificate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)certificateWithData:(id)arg1 ;
-(NSString *)fingerprint;
-(NSData *)dataRepresentation;
-(NSString *)description;
-(long long)keySizeInBits;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(void)dealloc;
-(unsigned)hashingAlgorithm;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(NSArray *)commonNames;
-(SecCertificateRef)underlyingCertificate;
-(BOOL)isCertificateAuthority;
@end

