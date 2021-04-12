/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject {

	MPMediaQuery* _localItemsQuery;
	long long _preferredStoreOfferVariant;
	MPStoreOfferMediaItemCollection* _offeredCollection;
	MPStoreOfferMediaItemCollection* _mergedCollection;

}

@property (nonatomic,readonly) long long preferredStoreOfferVariant;                                          //@synthesize preferredStoreOfferVariant=_preferredStoreOfferVariant - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * offeredCollection;                           //@synthesize offeredCollection=_offeredCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * mergedCollection;                            //@synthesize mergedCollection=_mergedCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection; 
@property (nonatomic,readonly) NSArray * localItems; 
-(long long)preferredStoreOfferVariant;
-(MPStoreOfferMediaItemCollection *)itemsWithCompletionsCollection;
-(MPStoreOfferMediaItemCollection *)mergedCollection;
-(id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3 ;
-(NSArray *)localItems;
-(MPStoreOfferMediaItemCollection *)offeredCollection;
@end

