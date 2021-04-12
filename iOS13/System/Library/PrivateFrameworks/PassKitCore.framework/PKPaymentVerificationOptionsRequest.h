/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
@end

