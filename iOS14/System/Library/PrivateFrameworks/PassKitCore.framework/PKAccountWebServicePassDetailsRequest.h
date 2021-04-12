/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	PKPaymentDeviceMetadata* _deviceMetadata;

}

@property (nonatomic,copy) NSString * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

