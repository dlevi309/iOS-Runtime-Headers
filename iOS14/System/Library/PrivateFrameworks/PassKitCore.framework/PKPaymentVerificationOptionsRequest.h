/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest {

	NSString* _stepIdentifier;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSString * stepIdentifier;              //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                 //@synthesize pass=_pass - In the implementation block
+(id)requestWithPass:(id)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentPass *)pass;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
@end

