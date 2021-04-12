/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam {

	PKPeerPaymentTransactionMetadata* _peerPaymentTransactionMetadata;

}

@property (nonatomic,retain) PKPeerPaymentTransactionMetadata * peerPaymentTransactionMetadata;              //@synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata - In the implementation block
+(id)paramWithPeerPaymentTransactionMetadata:(id)arg1 ;
-(id)description;
-(PKPeerPaymentTransactionMetadata *)peerPaymentTransactionMetadata;
-(void)setPeerPaymentTransactionMetadata:(PKPeerPaymentTransactionMetadata *)arg1 ;
@end

