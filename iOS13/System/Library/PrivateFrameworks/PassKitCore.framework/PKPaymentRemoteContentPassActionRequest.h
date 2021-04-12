/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;

}

@property (nonatomic,retain) PKPaymentPass * pass;                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

