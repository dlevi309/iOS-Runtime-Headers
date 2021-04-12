/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSArray, MPMediaQuery, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {

	unsigned long long _containedMediaTypes;
	BOOL _initializedContainedMediaTypes;
	NSArray* _items;
	unsigned long long _itemsCount;
	MPMediaQuery* _itemsQuery;
	MPMediaItem* _representativeItem;

}

@property (nonatomic,readonly) long long groupingType; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long mediaTypes; 
+(BOOL)supportsSecureCoding;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1 ;
+(id)collectionWithItems:(id)arg1 ;
+(id)sortTitlePropertyForGroupingType:(long long)arg1 ;
+(id)representativePersistentIDPropertyForGroupingType:(long long)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)init;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(id)multiverseIdentifier;
-(long long)groupingType;
-(id)itemsQuery;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(unsigned long long)count;
-(NSArray *)items;
-(id)_artworkCatalogRepresentativeItem;
-(id)albumArtistArtworkCatalog;
-(id)artistArtworkCatalog;
-(id)initWithItemsQuery:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)MPSD_hasDownloadableItem;
-(BOOL)MPSD_hasDownloadingItem;
-(MPMediaItem *)representativeItem;
-(unsigned long long)mediaTypes;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)artworkCatalog;
-(BOOL)isEqual:(id)arg1 ;
@end

