/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@class MPStoreCompletionOfferResponse, NSArray, MPMediaQuery, MPMediaItemCollection, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {

	MPStoreCompletionOfferResponse* _storeOfferResponse;
	NSArray* _unmergedStoreMediaItems;
	MPMediaQuery* _localItemsQuery;
	MPMediaItemCollection* _localCollection;
	BOOL _hasHiddenRestrictedContent;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _collectionContentRating;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * itemsByRemovingStoreOffers; 
@property (nonatomic,readonly) NSArray * itemsByRemovingLocalItems; 
@property (nonatomic,readonly) BOOL isCollectionOfferPresentable; 
+(BOOL)supportsSecureCoding;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 ;
+(long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1 ;
+(id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1 ;
+(id)defaultPropertyValues;
-(long long)preferredStoreOfferVariant;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(BOOL)_checkIsUsableOffer;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4 ;
-(id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(NSArray *)itemsByRemovingStoreOffers;
-(long long)countOfItemsByRemovingLocalItems;
-(NSArray *)itemsByRemovingLocalItems;
-(BOOL)isCheaperToPurchaseIndividualItems;
-(BOOL)isCollectionOfferPresentable;
-(BOOL)_hasRestrictedContent;
-(BOOL)hasDownloadableStoreOfferItemsForVariant:(long long)arg1 ;
-(BOOL)hasPurchasableStoreOfferItemsForVariant:(long long)arg1 ;
-(void)_loadLocalCollection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)isDownloadable;
-(id)description;
-(unsigned long long)persistentID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)mediaLibrary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
@end

