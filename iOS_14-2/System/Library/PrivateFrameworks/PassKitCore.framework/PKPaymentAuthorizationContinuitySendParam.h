/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam {

	PKRemotePaymentRequest* _remotePaymentRequest;

}

@property (nonatomic,retain) PKRemotePaymentRequest * remotePaymentRequest;              //@synthesize remotePaymentRequest=_remotePaymentRequest - In the implementation block
+(id)paramWithRemotePaymentRequest:(id)arg1 ;
-(void)setRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 ;
-(PKRemotePaymentRequest *)remotePaymentRequest;
@end

