/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAssociatedAccountInformation;

@interface PKPeerPaymentAssociatedAccountActionResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentAssociatedAccountInformation* _associatedAccountInformation;

}

@property (nonatomic,readonly) PKPeerPaymentAssociatedAccountInformation * associatedAccountInformation;              //@synthesize associatedAccountInformation=_associatedAccountInformation - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentAssociatedAccountInformation *)associatedAccountInformation;
@end

