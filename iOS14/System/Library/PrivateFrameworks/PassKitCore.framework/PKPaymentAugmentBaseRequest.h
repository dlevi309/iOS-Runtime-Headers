/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKSecureElementApplet, NSString;

@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKSecureElementApplet* _applet;
	NSString* _merchantCountryCode;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKSecureElementApplet * applet;                         //@synthesize applet=_applet - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                           //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(PKSecureElementApplet *)applet;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)endpointName;
-(void)setApplet:(PKSecureElementApplet *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(PKPaymentPass *)pass;
-(NSString *)merchantCountryCode;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)bodyDictionary;
@end

