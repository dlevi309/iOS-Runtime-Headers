/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject <NSCopying> {

	NSString* _applicationUsername;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	NSDictionary* _requestParameters;
	BOOL _simulatesAskToBuyInSandbox;
	BOOL _isStoreOriginated;
	SKPaymentDiscount* _paymentDiscount;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

