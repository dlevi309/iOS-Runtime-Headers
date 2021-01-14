/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseIdentifier;

}

@property (nonatomic,copy) NSString * purchaseIdentifier;              //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPurchaseIdentifier:(id)arg1 ;
-(NSString *)purchaseIdentifier;
-(void)setPurchaseIdentifier:(NSString *)arg1 ;
@end

