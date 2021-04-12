/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString, NSArray, NSError, SKPaymentTransaction, SKPayment, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSString* _uuid;
	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	long long _transactionState;

}
-(id)init;
@end

