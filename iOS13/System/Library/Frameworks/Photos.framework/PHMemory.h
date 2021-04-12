/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSString, NSData, NSDictionary, NSDate, PHMemoryFeature, NSSet, NSArray;

@interface PHMemory : PHAssetCollection {

	NSString* _title;
	NSString* _localizedSubtitle;
	NSData* _photosGraphData;
	long long _photosGraphVersion;
	NSDictionary* _transientMemoryProperties;
	NSDate* _creationDate;
	unsigned long long _category;
	unsigned long long _subcategory;
	unsigned long long _notificationState;
	BOOL _rejected;
	BOOL _favorite;
	BOOL _pending;
	BOOL _userCreated;
	NSDictionary* _movieAssetState;
	NSData* _movieData;
	double _score;
	NSDate* _lastViewedDate;
	NSDate* _lastMoviePlayedDate;
	NSString* _titleFontName;
	NSData* _assetListPredicate;
	PHMemoryFeature* _blacklistedFeature;
	long long _syncedPlayCount;
	long long _syncedShareCount;
	long long _syncedViewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;
	BOOL _didLoadTitleCategory;
	long long _titleCategory;
	NSDictionary* _photosGraphProperties;

}

@property (nonatomic,readonly) unsigned long long category;                        //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long subcategory;                     //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationState;               //@synthesize notificationState=_notificationState - In the implementation block
@property (getter=isRejected,nonatomic,readonly) BOOL rejected;                    //@synthesize rejected=_rejected - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite;                    //@synthesize favorite=_favorite - In the implementation block
@property (getter=isPending,nonatomic,readonly) BOOL pending;                      //@synthesize pending=_pending - In the implementation block
@property (getter=isUserCreated,nonatomic,readonly) BOOL userCreated;              //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * movieData;                                 //@synthesize movieData=_movieData - In the implementation block
@property (nonatomic,readonly) long long photosGraphVersion;                       //@synthesize photosGraphVersion=_photosGraphVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * photosGraphProperties;               //@synthesize photosGraphProperties=_photosGraphProperties - In the implementation block
@property (nonatomic,readonly) double score;                                       //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDate * lastViewedDate;                            //@synthesize lastViewedDate=_lastViewedDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastMoviePlayedDate;                       //@synthesize lastMoviePlayedDate=_lastMoviePlayedDate - In the implementation block
@property (nonatomic,readonly) NSSet * featuredPeopleIdentifiers; 
@property (nonatomic,readonly) NSData * assetListPredicate;                        //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (nonatomic,readonly) BOOL isContiguous; 
@property (nonatomic,readonly) NSArray * blacklistableFeatures; 
@property (nonatomic,readonly) PHMemoryFeature * blacklistedFeature;               //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (nonatomic,readonly) long long playCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,readonly) long long viewCount; 
@property (nonatomic,readonly) BOOL isMustSee; 
@property (nonatomic,readonly) BOOL isStellar; 
@property (nonatomic,readonly) BOOL isGreat; 
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution; 
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)titleFontNameFromMovieData:(id)arg1 ;
+(void)generateMemoriesWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)fetchBlacklistedMemoriesWithOptions:(id)arg1 ;
+(id)movieDataWithTitleFontName:(id)arg1 ;
+(id)assetListPredicateFromQueryHintObjects:(id)arg1 ;
+(id)stringForCategory:(unsigned long long)arg1 ;
+(id)stringForSubcategory:(unsigned long long)arg1 ;
+(id)fetchBestRecentMemoryWithOptions:(id)arg1 ;
+(unsigned long long)_contextualScoreForMemory:(id)arg1 ;
+(id)transientMemoryWithInfo:(id)arg1 photoLibrary:(id)arg2 ;
+(id)memoryInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)memoryTreeLevelWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg1 ;
-(id)description;
-(id)query;
-(unsigned long long)category;
-(double)score;
-(id)creationDate;
-(NSString *)subtitle;
-(BOOL)isPending;
-(BOOL)isContiguous;
-(BOOL)isTransient;
-(id)localizedSubtitle;
-(BOOL)isFavorite;
-(NSDate *)lastViewedDate;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(unsigned long long)subcategory;
-(long long)photosGraphVersion;
-(BOOL)isRejected;
-(BOOL)isUserCreated;
-(NSData *)movieData;
-(NSData *)assetListPredicate;
-(unsigned long long)notificationState;
-(PHMemoryFeature *)blacklistedFeature;
-(long long)playCount;
-(long long)shareCount;
-(long long)viewCount;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)titleCategory;
-(BOOL)canContainAssets;
-(id)titleFontName;
-(unsigned long long)titleFontNameHash;
-(id)movieStateDataForAsset:(id)arg1 ;
-(NSSet *)featuredPeopleIdentifiers;
-(NSArray *)blacklistableFeatures;
-(BOOL)hasBlacklistableFeature;
-(id)defaultSortDescriptor;
-(id)predicateForAllAssetsWithLibrary:(id)arg1 ;
-(id)predicateForAllMomentsFromRepresentativeAssets;
-(id)_representativeAndCuratedAssetIDs;
-(id)_curatedAssetIDsWithLibrary:(id)arg1 ;
-(id)_extendedCuratedAssetIDsWithLibrary:(id)arg1 ;
-(unsigned long long)suggestedMood;
-(id)moodKeywords;
-(id)meaningLabels;
-(NSDictionary *)musicGenreDistribution;
-(id)presentationHints;
-(BOOL)isMustSee;
-(BOOL)isStellar;
-(BOOL)isGreat;
-(NSDictionary *)photosGraphProperties;
-(NSDate *)lastMoviePlayedDate;
-(id)queryForExtendedCuratedAssetsWithOptions:(id)arg1 ;
-(id)queryForCuratedAssetsWithOptions:(id)arg1 ;
-(id)queryForKeyAssetWithOptions:(id)arg1 ;
-(id)transientRepresentativeAndCuratedAssetIDs;
-(id)rejectionCause;
-(id)transientMemoryStartDate;
-(void)setupTransientMemory;
@end

