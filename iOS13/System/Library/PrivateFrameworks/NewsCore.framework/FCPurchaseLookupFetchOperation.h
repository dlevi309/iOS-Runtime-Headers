/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@class NSArray, FCPurchaseLookupRecordSource;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation {

	NSArray* _purchaseIDs;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;

}

@property (nonatomic,retain) NSArray * purchaseIDs;                                                  //@synthesize purchaseIDs=_purchaseIDs - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;              //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
-(id)init;
-(void)performOperation;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2 ;
-(NSArray *)purchaseIDs;
-(id)_prefixedPurchasedIDs:(id)arg1 ;
-(id)processFetchedResults:(id)arg1 ;
-(void)setPurchaseIDs:(NSArray *)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
@end

