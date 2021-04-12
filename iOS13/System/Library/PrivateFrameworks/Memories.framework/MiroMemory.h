/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class MiroBlueprint, NSURL, NSDate, NSString, PHAsset, PHAssetCollection, NSArray, NSDictionary, NSSet, NSObject, MiroPickList, NSMutableDictionary, PHFetchResult;

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasBuildingPosterImageBegun;
	BOOL _storedPosterExists;
	BOOL _isPregenerating;
	MiroBlueprint* _blueprint;
	MiroBlueprint* _customBlueprint;
	NSURL* _localPersistentFile;
	long long _durationRange;
	double _customDuration;
	long long _savedMaxDurationRange;
	long long _schema;
	NSDate* _viewedDate;
	NSString* _localizedTitle;
	NSString* _localizedSubTitle;
	NSString* _keyAssetID;
	PHAsset* _keyAsset;
	PHAssetCollection* _assetCollection;
	NSArray* _posters;
	NSArray* _requestedKeywords;
	NSString* _requestedMoodID;
	NSDictionary* _requestedMusicGenreDistribution;
	NSString* _keywordedSongID;
	NSString* _initalKeyAssetIdentifier;
	NSSet* _manuallyAddedAssetIDs;
	NSSet* _manuallyRemovedAssetIDs;
	NSDictionary* _freezeRanges;
	NSSet* _suggestions;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSArray* _autoPickedAssetIDs;
	NSDictionary* _assetsRanges;
	MiroPickList* _pickList;
	long long _pickedItemCount;
	double _savedDuration;
	double _maximumPossibleMemoryDuration;
	double _duration;
	NSMutableDictionary* _blueprints;
	NSDictionary* _loadedFreezeRanges;
	NSArray* _featuredPeople;
	long long _allAssetCount;
	Buckets _buckets;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> saveQueue;                      //@synthesize saveQueue=_saveQueue - In the implementation block
@property (retain) NSString * keyAssetID;                                                 //@synthesize keyAssetID=_keyAssetID - In the implementation block
@property (nonatomic,retain) NSArray * autoPickedAssetIDs;                                //@synthesize autoPickedAssetIDs=_autoPickedAssetIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * assetsRanges;                                 //@synthesize assetsRanges=_assetsRanges - In the implementation block
@property (nonatomic,retain) MiroPickList * pickList;                                     //@synthesize pickList=_pickList - In the implementation block
@property (assign,nonatomic) long long pickedItemCount;                                   //@synthesize pickedItemCount=_pickedItemCount - In the implementation block
@property (assign,nonatomic) double savedDuration;                                        //@synthesize savedDuration=_savedDuration - In the implementation block
@property (assign,nonatomic) double maximumPossibleMemoryDuration;                        //@synthesize maximumPossibleMemoryDuration=_maximumPossibleMemoryDuration - In the implementation block
@property (assign,nonatomic) Buckets buckets;                                             //@synthesize buckets=_buckets - In the implementation block
@property (assign,nonatomic) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) MiroBlueprint * customBlueprint;                             //@synthesize customBlueprint=_customBlueprint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blueprints;                            //@synthesize blueprints=_blueprints - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedFreezeRanges;                           //@synthesize loadedFreezeRanges=_loadedFreezeRanges - In the implementation block
@property (nonatomic,retain) NSArray * featuredPeople;                                    //@synthesize featuredPeople=_featuredPeople - In the implementation block
@property (nonatomic,retain) NSURL * localPersistentFile;                                 //@synthesize localPersistentFile=_localPersistentFile - In the implementation block
@property (assign,nonatomic) long long allAssetCount;                                     //@synthesize allAssetCount=_allAssetCount - In the implementation block
@property (assign,nonatomic) long long schema;                                            //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) NSDate * viewedDate;                                         //@synthesize viewedDate=_viewedDate - In the implementation block
@property (retain) NSString * localizedTitle;                                             //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (retain) NSString * localizedSubTitle;                                          //@synthesize localizedSubTitle=_localizedSubTitle - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * displaySubtitle; 
@property (assign,nonatomic) double customDuration;                                       //@synthesize customDuration=_customDuration - In the implementation block
@property (assign,nonatomic) long long durationRange;                                     //@synthesize durationRange=_durationRange - In the implementation block
@property (nonatomic,readonly) long long maxDurationRange;                                //@synthesize savedMaxDurationRange=_savedMaxDurationRange - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                          //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;                         //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) double minimumPossibleMemoryDuration; 
@property (nonatomic,retain) MiroBlueprint * blueprint;                                   //@synthesize blueprint=_blueprint - In the implementation block
@property (assign,nonatomic) BOOL hasBuildingPosterImageBegun;                            //@synthesize hasBuildingPosterImageBegun=_hasBuildingPosterImageBegun - In the implementation block
@property (assign,nonatomic) BOOL storedPosterExists;                                     //@synthesize storedPosterExists=_storedPosterExists - In the implementation block
@property (nonatomic,retain) NSArray * posters;                                           //@synthesize posters=_posters - In the implementation block
@property (assign,nonatomic) BOOL isPregenerating;                                        //@synthesize isPregenerating=_isPregenerating - In the implementation block
@property (nonatomic,readonly) BOOL needsTitleCard; 
@property (nonatomic,retain) NSArray * requestedKeywords;                                 //@synthesize requestedKeywords=_requestedKeywords - In the implementation block
@property (nonatomic,retain) NSString * requestedMoodID;                                  //@synthesize requestedMoodID=_requestedMoodID - In the implementation block
@property (nonatomic,retain) NSDictionary * requestedMusicGenreDistribution;              //@synthesize requestedMusicGenreDistribution=_requestedMusicGenreDistribution - In the implementation block
@property (nonatomic,retain) NSString * keywordedSongID;                                  //@synthesize keywordedSongID=_keywordedSongID - In the implementation block
@property (nonatomic,retain) NSString * initalKeyAssetIdentifier;                         //@synthesize initalKeyAssetIdentifier=_initalKeyAssetIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * manuallyAddedAssetIDs;                               //@synthesize manuallyAddedAssetIDs=_manuallyAddedAssetIDs - In the implementation block
@property (nonatomic,retain) NSSet * manuallyRemovedAssetIDs;                             //@synthesize manuallyRemovedAssetIDs=_manuallyRemovedAssetIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * freezeRanges;                                 //@synthesize freezeRanges=_freezeRanges - In the implementation block
@property (nonatomic,retain) NSSet * suggestions;                                         //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) PHFetchResult * allAssets; 
@property (nonatomic,readonly) NSArray * moodIDs; 
@property (nonatomic,retain) NSString * moodID; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_displayableUuidWithUuid:(id)arg1 ;
+(id)_saveURL;
+(id)memoryWithPHAssetCollection:(id)arg1 ;
+(id)memoryWithPHAssetCollection:(id)arg1 keyAsset:(id)arg2 ;
+(id)_miroMoodIDForPHMemoryMood:(unsigned long long)arg1 ;
+(id)_assetCollectionUniqueLocalIdentifier:(id)arg1 ;
+(id)fileURLWithUuid:(id)arg1 ;
+(id)grabTestKeywords;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dataRepresentation;
-(double)duration;
-(NSString *)displayName;
-(long long)schema;
-(BOOL)isPending;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(Buckets)buckets;
-(BOOL)isPersistable;
-(void)setSchema:(long long)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)persist;
-(void)_saveMetadata;
-(void)setBuckets:(Buckets)arg1 ;
-(long long)durationRange;
-(void)setDurationRange:(long long)arg1 ;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(MiroBlueprint *)blueprint;
-(NSMutableDictionary *)blueprints;
-(PHAssetCollection *)assetCollection;
-(NSString *)displaySubtitle;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHFetchResult *)allAssets;
-(double)customDuration;
-(BOOL)wasManuallyAdded:(id)arg1 ;
-(BOOL)wasManuallyRemoved:(id)arg1 ;
-(MiroPickList *)pickList;
-(id)pickedLocallyAvailableScenes;
-(void)clearFreezeDataForPregenerate;
-(id)pickedAssets;
-(NSDate *)viewedDate;
-(void)setIsPregenerating:(BOOL)arg1 ;
-(NSString *)moodID;
-(void)setMoodID:(NSString *)arg1 ;
-(void)setCustomDuration:(double)arg1 ;
-(double)maximumPossibleMemoryDuration;
-(NSString *)localizedSubTitle;
-(void)setLocalizedSubTitle:(NSString *)arg1 ;
-(void)setViewedDate:(NSDate *)arg1 ;
-(void)persistWithoutFreeze;
-(id)allAssetsAsArray;
-(NSArray *)requestedKeywords;
-(void)unPersist;
-(BOOL)memoryFeaturesPeople;
-(NSArray *)featuredPeople;
-(NSDictionary *)loadedFreezeRanges;
-(NSURL *)localPersistentFile;
-(BOOL)needsTitleCard;
-(long long)pickedItemCount;
-(void)setCustomBlueprint:(MiroBlueprint *)arg1 ;
-(MiroBlueprint *)customBlueprint;
-(void)setBlueprints:(NSMutableDictionary *)arg1 ;
-(id)allAssetsIncludingAllMomentsAssets:(BOOL)arg1 ;
-(id)currentVideoFreezeRangeForAssetID:(id)arg1 index:(int)arg2 ;
-(void)setSaveQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_persistentRangesChanged:(id)arg1 ;
-(NSArray *)autoPickedAssetIDs;
-(void)setAutoPickedAssetIDs:(NSArray *)arg1 ;
-(NSSet *)manuallyAddedAssetIDs;
-(void)setManuallyAddedAssetIDs:(NSSet *)arg1 ;
-(NSSet *)manuallyRemovedAssetIDs;
-(void)setManuallyRemovedAssetIDs:(NSSet *)arg1 ;
-(NSString *)keyAssetID;
-(void)setKeyAssetID:(NSString *)arg1 ;
-(void)setLoadedFreezeRanges:(NSDictionary *)arg1 ;
-(void)_initAllAssetMetadata;
-(void)setRequestedKeywords:(NSArray *)arg1 ;
-(void)setRequestedMusicGenreDistribution:(NSDictionary *)arg1 ;
-(void)setRequestedMoodID:(NSString *)arg1 ;
-(NSDictionary *)requestedMusicGenreDistribution;
-(NSString *)requestedMoodID;
-(long long)maxDurationRange;
-(id)freezeRangesToEncode;
-(void)_writeMetadata:(id)arg1 ;
-(NSString *)initalKeyAssetIdentifier;
-(void)setInitalKeyAssetIdentifier:(NSString *)arg1 ;
-(void)setPickList:(MiroPickList *)arg1 ;
-(NSObject*<OS_dispatch_queue>)saveQueue;
-(void)_deleteMetadata;
-(void)setLocalPersistentFile:(NSURL *)arg1 ;
-(void)setRanges:(id)arg1 replaceType:(unsigned long long)arg2 forAssetID:(id)arg3 ;
-(id)rangesWithType:(unsigned long long)arg1 forAssetID:(id)arg2 ;
-(void)addSuggestionForAssetID:(id)arg1 freezeInfo:(id)arg2 assets:(id)arg3 ;
-(double)savedDuration;
-(BOOL)isPregenerating;
-(double)minimumPossibleMemoryDuration;
-(id)blueprintForMoodID:(id)arg1 ;
-(id)_newBlueprintWithMoodID:(id)arg1 ;
-(void)adornIrisUsableToAssets:(id)arg1 ;
-(void)setFreezeRanges:(NSDictionary *)arg1 ;
-(void)setPickedItemCount:(long long)arg1 ;
-(void)_updateAddedRemovedLists;
-(NSDictionary *)assetsRanges;
-(NSDictionary *)freezeRanges;
-(void)invalidateCustomDuration;
-(void)invalidateDuration;
-(long long)rawDurationRange;
-(NSArray *)moodIDs;
-(void)setDisplaySubtitle:(NSString *)arg1 ;
-(void)manuallyModify:(id)arg1 changeInSegmentCount:(long long)arg2 ;
-(void)manuallyAdd:(id)arg1 remove:(id)arg2 ;
-(void)reportCollectionTypeForAggD:(BOOL)arg1 ;
-(BOOL)memoryTypeDisablesCropping;
-(BOOL)assetHasFaces:(id)arg1 ;
-(id)featuredPersonsInMemoryAsFaceRangesInAsset:(id)arg1 ;
-(id)trimRangesForAsset:(id)arg1 ;
-(BOOL)hasBuildingPosterImageBegun;
-(void)setHasBuildingPosterImageBegun:(BOOL)arg1 ;
-(BOOL)storedPosterExists;
-(void)setStoredPosterExists:(BOOL)arg1 ;
-(NSArray *)posters;
-(void)setPosters:(NSArray *)arg1 ;
-(NSString *)keywordedSongID;
-(void)setKeywordedSongID:(NSString *)arg1 ;
-(void)setAssetsRanges:(NSDictionary *)arg1 ;
-(void)setSavedDuration:(double)arg1 ;
-(void)setMaximumPossibleMemoryDuration:(double)arg1 ;
-(long long)allAssetCount;
-(void)setAllAssetCount:(long long)arg1 ;
-(BOOL)memoryFeaturesPersonInAsset:(id)arg1 ;
-(id)memoryClassificationKeys;
-(double)titleCardDuration;
-(BOOL)memoryClassificationBased;
-(void)setFeaturedPeople:(NSArray *)arg1 ;
@end

