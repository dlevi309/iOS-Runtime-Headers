/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/

#import <AppStoreFoundation/AppStoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSNumber;

@interface ASFIAPItem : NSObject <NSCopying> {

	NSDate* _originalPurchaseDate;
	NSString* _originalTransactionID;
	NSDate* _purchaseDate;
	NSString* _productID;
	NSNumber* _quantity;
	NSString* _transactionID;

}

@property (copy) NSDate * originalPurchaseDate;                 //@synthesize originalPurchaseDate=_originalPurchaseDate - In the implementation block
@property (copy) NSString * originalTransactionID;              //@synthesize originalTransactionID=_originalTransactionID - In the implementation block
@property (copy) NSDate * purchaseDate;                         //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (copy) NSString * productID;                          //@synthesize productID=_productID - In the implementation block
@property (copy) NSNumber * quantity;                           //@synthesize quantity=_quantity - In the implementation block
@property (copy) NSString * transactionID;                      //@synthesize transactionID=_transactionID - In the implementation block
-(NSNumber *)quantity;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSDate *)purchaseDate;
-(NSString *)productID;
-(void)setProductID:(NSString *)arg1 ;
-(void)setQuantity:(NSNumber *)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)transactionID;
-(NSDate *)originalPurchaseDate;
-(void)setOriginalPurchaseDate:(NSDate *)arg1 ;
-(NSString *)originalTransactionID;
-(void)setOriginalTransactionID:(NSString *)arg1 ;
@end

