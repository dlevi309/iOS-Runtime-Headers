/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _secureElementIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                  //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                   //@synthesize currencyCode=_currencyCode - In the implementation block
+(id)serverSupportedLanguages;
-(NSString *)currencyCode;
-(NSString *)secureElementIdentifier;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSDecimalNumber *)amount;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 ;
@end

