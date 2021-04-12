/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, NSString, NSData;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	NSString* _verificationCode;
	NSData* _verificationData;

}

@property (nonatomic,retain) PKPaymentPass * pass;                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
@property (nonatomic,copy) NSData * verificationData;                //@synthesize verificationData=_verificationData - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentPass *)pass;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)verificationCode;
-(void)setVerificationCode:(NSString *)arg1 ;
-(NSData *)verificationData;
-(void)setVerificationData:(NSData *)arg1 ;
@end

