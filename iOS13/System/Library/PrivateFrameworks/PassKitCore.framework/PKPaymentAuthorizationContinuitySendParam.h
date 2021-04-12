/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

