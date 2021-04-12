/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKWrappedPayment, NSData, NSString;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKWrappedPayment* _wrappedPayment;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * endpointName; 
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;                      //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                 //@synthesize applicationData=_applicationData - In the implementation block
-(NSData *)applicationData;
-(id)bodyDictionary;
-(void)setApplicationData:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(NSString *)endpointName;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4 ;
@end

