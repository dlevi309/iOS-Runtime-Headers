/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

