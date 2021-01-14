/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary, MPMediaQueryCriteria, NSArray, MPMediaPlaylist, MPMediaItemCollection, NSSet, NSDictionary, MPMediaQuerySectionInfo, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {

	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	long long _staticEntityType;

}

@property (nonatomic,readonly) MPMediaPlaylist * containingPlaylist; 
@property (nonatomic,readonly) MPMediaItemCollection * collectionByJoiningCollections; 
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,copy) NSSet * itemPropertiesToFetch; 
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch; 
@property (setter=_setOrderingProperties:,getter=_orderingProperties,nonatomic,copy) NSArray * orderingProperties; 
@property (setter=_setOrderingDirectionMappings:,getter=_orderingDirectionMappings,nonatomic,copy) NSDictionary * orderingDirectionMappings; 
@property (assign,nonatomic) BOOL sortItems; 
@property (assign,nonatomic) BOOL useSections; 
@property (assign,nonatomic) unsigned long long entityLimit; 
@property (nonatomic,readonly) BOOL _hasItems; 
@property (nonatomic,readonly) BOOL _hasCollections; 
@property (nonatomic,readonly) unsigned long long _countOfItems; 
@property (nonatomic,readonly) unsigned long long _countOfCollections; 
@property (nonatomic,readonly) BOOL _hasStaticEntities; 
@property (nonatomic,readonly) NSArray * itemPersistentIdentifiers; 
@property (nonatomic,readonly) NSArray * collectionPersistentIdentifiers; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * itemSectionInfo; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * collectionSectionInfo; 
@property (nonatomic,readonly) BOOL excludesEntitiesWithBlankNames; 
@property (assign,nonatomic) BOOL includeEntitiesWithBlankNames; 
@property (nonatomic,readonly) BOOL specifiesPlaylistItems; 
@property (assign,nonatomic) BOOL shouldIncludeNonLibraryEntities; 
@property (nonatomic,readonly) BOOL willGroupEntities; 
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) MPMediaItemCollection * _representativeCollection; 
@property (nonatomic,readonly) long long _representativeCollectionGroupingType; 
@property (getter=isPlaylistItemsQuery,nonatomic,readonly) BOOL playlistItemsQuery; 
@property (nonatomic,retain) NSSet * filterPredicates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * collections; 
@property (assign,nonatomic) long long groupingType; 
@property (nonatomic,readonly) NSArray * itemSections; 
@property (nonatomic,readonly) NSArray * collectionSections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)setFilteringDisabled:(BOOL)arg1 ;
+(id)composersQuery;
+(id)activeGeniusPlaylist;
+(id)albumsQuery;
+(id)videosQuery;
+(id)tvShowsQuery;
+(id)homeVideosQuery;
+(id)playlistsRecentlyAddedQuery;
+(id)audioPodcastsQuery;
+(BOOL)isFilteringDisabled;
+(id)movieRentalsQuery;
+(id)ITunesUAudioQuery;
+(id)currentDevicePurchasesPlaylist;
+(id)audiobooksQuery;
+(id)musicVideosQuery;
+(id)moviesQuery;
+(void)initFilteringDisabled;
+(id)geniusMixesQuery;
+(id)albumArtistsQuery;
+(id)artistsQuery;
+(id)podcastsQuery;
+(id)videoITunesUQuery;
+(id)playlistsQuery;
+(id)compilationsQuery;
+(id)playbackHistoryPlaylist;
+(id)genresQuery;
+(id)songsQuery;
+(id)ITunesUQuery;
+(id)audibleAudiobooksQuery;
+(id)videoPodcastsQuery;
-(void)setCriteria:(id)arg1 ;
-(id)init;
-(BOOL)ignoreSystemFilterPredicates;
-(BOOL)_isFilteringDisabled;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)initWithFilterPredicates:(id)arg1 ;
-(id)initWithFilterPredicates:(id)arg1 library:(id)arg2 ;
-(unsigned long long)entityLimit;
-(id)initWithCriteria:(id)arg1 library:(id)arg2 ;
-(id)initWithEntities:(id)arg1 entityType:(long long)arg2 ;
-(id)copyByRemovingStaticEntities;
-(long long)groupingType;
-(id)copyBySanitizingStaticEntities;
-(NSSet *)filterPredicates;
-(void)setFilterPredicates:(NSSet *)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(BOOL)_hasItems;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)setGroupingType:(long long)arg1 ;
-(void)setEntityLimit:(unsigned long long)arg1 ;
-(BOOL)shouldIncludeNonLibraryEntities;
-(void)setShouldIncludeNonLibraryEntities:(BOOL)arg1 ;
-(BOOL)includeEntitiesWithBlankNames;
-(NSSet *)itemPropertiesToFetch;
-(void)setIncludeEntitiesWithBlankNames:(BOOL)arg1 ;
-(void)setItemPropertiesToFetch:(NSSet *)arg1 ;
-(NSSet *)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(NSSet *)arg1 ;
-(BOOL)_hasCollections;
-(BOOL)_hasStaticEntities;
-(unsigned long long)_countOfCollections;
-(BOOL)useSections;
-(NSArray *)itemPersistentIdentifiers;
-(NSArray *)collectionPersistentIdentifiers;
-(MPMediaQuerySectionInfo *)itemSectionInfo;
-(MPMediaQuerySectionInfo *)collectionSectionInfo;
-(void)_setOrderingProperties:(id)arg1 ;
-(void)_setOrderingDirectionMappings:(id)arg1 ;
-(id)_orderingDirectionMappings;
-(void)setSortItems:(BOOL)arg1 ;
-(void)_getRepresentativeCollectionGrouping:(long long*)arg1 propertyPredicate:(id*)arg2 ;
-(MPMediaItemCollection *)_representativeCollection;
-(void)setUseSections:(BOOL)arg1 ;
-(long long)_representativeCollectionGroupingType;
-(BOOL)excludesEntitiesWithBlankNames;
-(BOOL)specifiesPlaylistItems;
-(unsigned long long)groupingThreshold;
-(BOOL)willGroupEntities;
-(NSArray *)itemSections;
-(NSArray *)collectionSections;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3 ;
-(id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 ;
-(id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 ;
-(void)_enumerateUnorderedItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPlaylistItemsQuery;
-(void)_enumerateCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setStaticEntities:(id)arg1 entityType:(long long)arg2 ;
-(unsigned long long)_playlistItemPersistentIDForItemPersistentID:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)predicateForProperty:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(NSArray *)items;
-(BOOL)ignoreRestrictionsPredicates;
-(NSString *)description;
-(BOOL)MPSD_hasDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(BOOL)MPSD_hasDownloadingEntities;
-(id)_orderingProperties;
-(unsigned long long)_countOfItems;
-(id)criteria;
-(unsigned long long)hash;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 forProperty:(id)arg2 ;
-(MPMediaPlaylist *)containingPlaylist;
-(void)setFilterPropertyPredicate:(id)arg1 ;
-(BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2 ;
-(MPMediaItemCollection *)collectionByJoiningCollections;
-(BOOL)sortItems;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSArray *)collections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

