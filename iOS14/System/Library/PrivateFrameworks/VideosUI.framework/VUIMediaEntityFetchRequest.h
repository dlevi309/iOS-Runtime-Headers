/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSPredicate, NSArray, NSString, NSDictionary;

@interface VUIMediaEntityFetchRequest : NSObject <NSCopying> {

	NSSet* _mediaEntityTypes;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSSet* _properties;
	NSString* _groupingKeyPath;
	/*^block*/id _groupingSortComparator;
	NSDictionary* _options;
	NSString* _identifier;
	NSRange _range;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSSet * mediaEntityTypes;                  //@synthesize mediaEntityTypes=_mediaEntityTypes - In the implementation block
@property (nonatomic,readonly) BOOL _isItemsFetch; 
@property (nonatomic,readonly) BOOL _isCollectionsFetch; 
@property (nonatomic,readonly) BOOL _isShowsFetch; 
@property (nonatomic,readonly) BOOL _isSeasonsFetch; 
@property (nonatomic,copy) NSPredicate * predicate;                   //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                 //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSSet * properties;                        //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) NSRange range;                           //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * groupingKeyPath;                //@synthesize groupingKeyPath=_groupingKeyPath - In the implementation block
@property (nonatomic,copy) id groupingSortComparator;                 //@synthesize groupingSortComparator=_groupingSortComparator - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
+(id)showsFetchRequest;
+(id)moviesFetchRequest;
+(id)homeVideosFetchRequest;
+(id)movieRentalsFetchRequest;
+(id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg1 mediaEntityKind:(id)arg2 ;
+(id)_finalizedSortDescriptorFromSortDescriptor:(id)arg1 mediaEntityKind:(id)arg2 ;
+(id)_identifierPredicateWithIdentifier:(id)arg1 ;
+(id)_minimalPropertiesFetchRequestWithType:(id)arg1 ;
+(id)_minimalMoviesPropertiesFetchRequest;
+(id)_minimalMovieRentalsPropertiesFetchRequest;
+(id)_minimalShowsPropertiesFetchRequest;
+(id)_seasonsFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)_episodesFetchRequestWithSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 ;
+(id)_addedDateSortDescriptor;
+(id)_addedToDateSortDescriptor;
+(id)_anyHDRColorCapabilityPredicate;
+(id)_any4KResolutionPredicate;
+(id)_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 ;
+(id)_isLocalPredicate;
+(id)_isInPredicateWithAdamId:(id)arg1 ;
+(id)_isEqualPredicateWithAdamId:(id)arg1 ;
+(id)_includeSortIndexesOptions;
+(id)_titleSortDescriptor;
+(id)_showIdentifierPredicateWithIdentifier:(id)arg1 ;
+(id)_seasonNumberSortDescriptor;
+(id)_seasonIdentifierPredicateWithIdentifier:(id)arg1 ;
+(id)_episodeNumberSortDescriptor;
+(id)_resolutionPredicateWithResolution:(id)arg1 ;
+(id)_HLSResolutionPredicateWithResolution:(id)arg1 ;
+(id)mediaEntityFetchRequestWithIdentifier:(id)arg1 ;
+(id)seasonsFetchRequest;
+(id)seasonsFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)seasonsFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)episodesFetchRequest;
+(id)episodesFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)_releaseYearSortDescriptor;
+(id)_releaseDateSortDescriptor;
+(id)_showTitleSortDescriptor;
-(void)setRange:(NSRange)arg1 ;
-(NSSet *)properties;
-(NSPredicate *)predicate;
-(id)init;
-(NSRange)range;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSArray *)sortDescriptors;
-(id)description;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(void)setProperties:(NSSet *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMediaEntityTypes:(id)arg1 ;
-(void)addRecentlyAddedSortDescriptorWithLimit:(unsigned long long)arg1 ;
-(void)setGroupingKeyPath:(NSString *)arg1 ;
-(void)addHDRColorCapabilityOr4KResolutionPredicate;
-(void)addIsLocalOrHasExpiredDownloadPredicate;
-(void)addIsLocalPredicate;
-(void)addAdamIdPredicate:(id)arg1 ;
-(void)_didUpdateRequestProperties;
-(NSSet *)mediaEntityTypes;
-(NSString *)groupingKeyPath;
-(id)groupingSortComparator;
-(BOOL)_isItemsFetch;
-(BOOL)_shouldGenerateSortIndexes;
-(id)initWithMediaEntityType:(id)arg1 ;
-(void)setGroupingSortComparator:(id)arg1 ;
-(BOOL)_isCollectionsFetch;
-(BOOL)_isShowsFetch;
-(BOOL)_isSeasonsFetch;
-(id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg1 ;
-(BOOL)_shouldGenerateGroupingSortIndexes;
-(id)_manualSortDescriptorsWithMediaEntityKind:(id)arg1 propertiesRequiredForSort:(id*)arg2 ;
-(void)setMediaEntityTypes:(NSSet *)arg1 ;
-(void)_addPredicate:(id)arg1 ;
-(void)addSortIndexesOption;
-(void)addGroupingSortIndexesOption;
-(void)addHDRColorCapabilityPredicate;
-(void)add4KResolutionPredicate;
-(void)addDownloadStatePredicateForStates:(unsigned long long)arg1 ;
-(void)addAdamIdsPredicate:(id)arg1 ;
@end

