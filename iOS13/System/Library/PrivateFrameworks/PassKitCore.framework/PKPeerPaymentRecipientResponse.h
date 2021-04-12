/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentRecipient* _recipient;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentRecipient *)recipient;
@end

