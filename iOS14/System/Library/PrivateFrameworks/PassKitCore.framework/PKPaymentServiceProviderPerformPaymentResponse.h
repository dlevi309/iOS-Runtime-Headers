/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse {

	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,retain,readonly) PKServiceProviderPurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
-(PKServiceProviderPurchase *)purchase;
-(id)initWithData:(id)arg1 ;
@end

