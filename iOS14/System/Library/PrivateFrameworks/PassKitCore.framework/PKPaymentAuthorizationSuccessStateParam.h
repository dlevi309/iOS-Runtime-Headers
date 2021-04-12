/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam {

	PKPeerPaymentTransactionMetadata* _peerPaymentTransactionMetadata;

}

@property (nonatomic,retain) PKPeerPaymentTransactionMetadata * peerPaymentTransactionMetadata;              //@synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata - In the implementation block
+(id)paramWithPeerPaymentTransactionMetadata:(id)arg1 ;
-(PKPeerPaymentTransactionMetadata *)peerPaymentTransactionMetadata;
-(void)setPeerPaymentTransactionMetadata:(PKPeerPaymentTransactionMetadata *)arg1 ;
-(id)description;
@end

