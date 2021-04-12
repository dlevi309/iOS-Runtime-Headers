/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSDictionary;

@interface PKPaymentCredentialAccountAttesationRequest : PKPaymentWebServiceRequest {

	NSDictionary* _requestBody;

}
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithCredential:(id)arg1 attesationRequest:(id)arg2 ;
-(id)requestBodyWithAttesationRequest:(id)arg1 ;
@end

