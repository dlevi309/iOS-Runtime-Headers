/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, PKSecureElementCertificateSet;

@interface PKWrappedPayment : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;
	NSData* _transactionInstructionsSignature;
	PKSecureElementCertificateSet* _certificates;
	NSString* _merchantCountryCode;
	NSString* _kextBlacklistVersion;
	NSData* _enrollmentSignature;

}

@property (nonatomic,copy) NSString * transactionIdentifier;                          //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * transactionData;                                  //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,copy) NSData * transactionInstructionsSignature;                 //@synthesize transactionInstructionsSignature=_transactionInstructionsSignature - In the implementation block
@property (nonatomic,copy) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                            //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * kextBlacklistVersion;                           //@synthesize kextBlacklistVersion=_kextBlacklistVersion - In the implementation block
@property (nonatomic,copy) NSData * enrollmentSignature;                              //@synthesize enrollmentSignature=_enrollmentSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(PKSecureElementCertificateSet *)certificates;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setTransactionData:(NSData *)arg1 ;
-(void)setTransactionInstructionsSignature:(NSData *)arg1 ;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(void)setEnrollmentSignature:(NSData *)arg1 ;
-(NSData *)transactionInstructionsSignature;
-(NSString *)kextBlacklistVersion;
-(NSData *)enrollmentSignature;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)merchantCountryCode;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(void)setCertificates:(PKSecureElementCertificateSet *)arg1 ;
-(NSString *)transactionIdentifier;
-(NSData *)transactionData;
@end

