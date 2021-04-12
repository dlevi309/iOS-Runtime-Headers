/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse {

	PKServiceProviderPurchase* _updatedPurchase;

}

@property (nonatomic,retain,readonly) PKServiceProviderPurchase * updatedPurchase;              //@synthesize updatedPurchase=_updatedPurchase - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKServiceProviderPurchase *)updatedPurchase;
@end

