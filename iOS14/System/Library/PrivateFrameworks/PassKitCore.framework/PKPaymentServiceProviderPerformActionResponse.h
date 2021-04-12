/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse {

	PKServiceProviderPurchase* _updatedPurchase;

}

@property (nonatomic,retain,readonly) PKServiceProviderPurchase * updatedPurchase;              //@synthesize updatedPurchase=_updatedPurchase - In the implementation block
-(PKServiceProviderPurchase *)updatedPurchase;
-(id)initWithData:(id)arg1 ;
@end

