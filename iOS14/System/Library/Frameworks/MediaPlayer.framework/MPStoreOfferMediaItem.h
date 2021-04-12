/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPNondurableMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {

	NSDictionary* _lookupCollectionPropertyValues;
	NSNumber* _itemID;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;
	MPStoreOfferMediaItemArtworkDescriptor* _offerArtworkDescriptor;
	long long _offerArtworkDescriptorOnceToken;
	id _pid;
	id _discNumber;
	id _trackNumber;
	id _title;

}
+(BOOL)supportsSecureCoding;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
+(BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1 ;
+(BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1 ;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2 ;
+(id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1 ;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)itemLookupKeyForMediaProperty:(id)arg1 ;
+(id)offerLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1 ;
+(id)assetLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)preferredAssetDictionaryInOfferDictionary:(id)arg1 ;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)arg1 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3 ;
+(id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)defaultPropertyValues;
-(long long)preferredStoreOfferVariant;
-(id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3 ;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)offerArtworkDescriptor;
-(id)_lookupOfferDictionaries;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isDownloadable;
-(id)description;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)discNumber;
-(unsigned long long)persistentID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)screenshotArtworkCatalog;
-(id)mediaLibrary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
@end

