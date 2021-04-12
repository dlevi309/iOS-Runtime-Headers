/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;
@interface HAPRelayActivationClient : HMFObject {

	id<HAPRelayActivationClientDelegate> _delegate;

}

@property (__weak) id<HAPRelayActivationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)open;
-(void)close;
-(id<HAPRelayActivationClientDelegate>)delegate;
-(void)setDelegate:(id<HAPRelayActivationClientDelegate>)arg1 ;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

