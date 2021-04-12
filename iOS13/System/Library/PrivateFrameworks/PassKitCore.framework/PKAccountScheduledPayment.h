/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount, PKAccountPaymentFundingSource;

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding> {

	PKCurrencyAmount* _currencyAmount;
	PKAccountPaymentFundingSource* _fundingSource;

}

@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                          //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;              //@synthesize fundingSource=_fundingSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2 ;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
@end

