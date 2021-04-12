/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

