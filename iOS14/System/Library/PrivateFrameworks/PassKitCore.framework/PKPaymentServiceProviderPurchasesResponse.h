/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse {

	NSArray* _purchases;

}

@property (nonatomic,copy,readonly) NSArray * purchases;              //@synthesize purchases=_purchases - In the implementation block
-(NSArray *)purchases;
-(id)initWithData:(id)arg1 ;
@end

