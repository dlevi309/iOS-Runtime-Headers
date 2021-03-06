/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKWrappedPayment, NSData, NSString;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKWrappedPayment* _wrappedPayment;
	NSData* _applicationData;
	long long _cryptogramType;

}

@property (nonatomic,readonly) NSString * endpointName; 
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;                      //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                 //@synthesize applicationData=_applicationData - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                               //@synthesize cryptogramType=_cryptogramType - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)endpointName;
-(long long)cryptogramType;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(void)setCryptogramType:(long long)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(NSData *)applicationData;
-(PKPaymentPass *)pass;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)bodyDictionary;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4 ;
@end

