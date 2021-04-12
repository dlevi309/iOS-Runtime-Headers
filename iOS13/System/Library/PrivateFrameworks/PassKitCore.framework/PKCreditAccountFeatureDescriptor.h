/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor {

	unsigned long long _paymentFundingSourceTypes;
	unsigned long long _paymentPresets;
	unsigned long long _paymentFrequencies;
	NSArray* _supportedFileFormatsForTransactionData;
	NSString* _paymentTermsIdentifier;
	NSString* _fundingSourceTermsIdentifier;

}

@property (assign,nonatomic) unsigned long long paymentFundingSourceTypes;                //@synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long paymentPresets;                           //@synthesize paymentPresets=_paymentPresets - In the implementation block
@property (assign,nonatomic) unsigned long long paymentFrequencies;                       //@synthesize paymentFrequencies=_paymentFrequencies - In the implementation block
@property (nonatomic,copy) NSArray * supportedFileFormatsForTransactionData;              //@synthesize supportedFileFormatsForTransactionData=_supportedFileFormatsForTransactionData - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;                             //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fundingSourceTermsIdentifier;                       //@synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)paymentFundingSourceTypes;
-(NSString *)paymentTermsIdentifier;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(NSString *)fundingSourceTermsIdentifier;
-(void)setFundingSourceTermsIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg1 ;
-(void)setPaymentFundingSourceTypes:(unsigned long long)arg1 ;
-(unsigned long long)paymentPresets;
-(void)setPaymentPresets:(unsigned long long)arg1 ;
-(unsigned long long)paymentFrequencies;
-(void)setPaymentFrequencies:(unsigned long long)arg1 ;
-(NSArray *)supportedFileFormatsForTransactionData;
-(void)setSupportedFileFormatsForTransactionData:(NSArray *)arg1 ;
@end

