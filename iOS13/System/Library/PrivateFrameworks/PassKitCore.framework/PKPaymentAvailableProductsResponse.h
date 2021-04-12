/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse {

	NSArray* _availableProducts;

}

@property (nonatomic,copy,readonly) NSArray * availableProducts; 
-(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(NSArray *)availableProducts;
-(id)_generateProducts;
@end

