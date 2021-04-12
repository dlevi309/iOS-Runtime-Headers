/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest {

	NSString* _stepIdentifier;
	PKPaymentPass* _pass;
	PKVerificationChannel* _channel;

}

@property (nonatomic,copy) NSString * stepIdentifier;                      //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                         //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKVerificationChannel * channel;              //@synthesize channel=_channel - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 deviceData:(id)arg4 webService:(id)arg5 certChain:(id)arg6 devSigned:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)setChannel:(PKVerificationChannel *)arg1 ;
-(PKVerificationChannel *)channel;
-(PKPaymentPass *)pass;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
@end

