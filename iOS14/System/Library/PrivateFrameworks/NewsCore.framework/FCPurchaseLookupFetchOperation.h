/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performOperation;
-(id)init;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(id)_prefixedPurchasedIDs:(id)arg1 ;
-(id)processFetchedResults:(id)arg1 ;
-(id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2 ;
-(void)setPurchaseIDs:(NSArray *)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
-(NSArray *)purchaseIDs;
@end

