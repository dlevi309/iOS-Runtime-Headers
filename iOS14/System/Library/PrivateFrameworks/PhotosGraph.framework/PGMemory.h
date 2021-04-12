/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMemoryProtocol.h>
#import <libobjc.A.dylib/PGMemoryCore.h>

@class NSDate, NSArray, PHAssetCollection, PHAsset, NSString, CLLocation, NSSet, NSMutableSet, PGMemoryDebug, NSDictionary;

@interface PGMemory : NSObject <PGMemoryProtocol, PGMemoryCore> {

	NSDate* _creationDate;
	PHAssetCollection* _assetCollection;
	NSArray* _curatedAssets;
	NSArray* _extendedCuratedAssets;
	PHAsset* _curatedKeyAsset;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	double _score;
	long long _sourceType;
	unsigned long long _duration;
	unsigned long long _category;
	unsigned long long _subcategory;
	unsigned long long _originalSubcategory;
	unsigned long long _matchedTypes;
	NSDate* _matchedLocalDate;
	CLLocation* _matchedLocation;
	NSSet* _matchedPeople;
	NSString* _matchedEventName;
	NSSet* _features;
	NSMutableSet* _persistedFeatures;
	unsigned long long _aggregatedVersions;
	PGMemoryDebug* _debug;
	long long _notificationQuality;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;
	NSArray* _blacklistableFeatures;
	NSString* _rejectionCause;
	NSDictionary* _musicGenreDistribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSArray * curatedAssets;                               //@synthesize curatedAssets=_curatedAssets - In the implementation block
@property (nonatomic,retain) NSArray * extendedCuratedAssets;                       //@synthesize extendedCuratedAssets=_extendedCuratedAssets - In the implementation block
@property (nonatomic,retain) PHAsset * curatedKeyAsset;                             //@synthesize curatedKeyAsset=_curatedKeyAsset - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate;                               //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,retain) NSDate * localEndDate;                                 //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,retain) NSDate * universalStartDate;                           //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDate;                             //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) double score;                                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long sourceType;                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long category;                           //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long subcategory;                        //@synthesize subcategory=_subcategory - In the implementation block
@property (assign,nonatomic) unsigned long long originalSubcategory;                //@synthesize originalSubcategory=_originalSubcategory - In the implementation block
@property (assign,nonatomic) unsigned long long matchedTypes;                       //@synthesize matchedTypes=_matchedTypes - In the implementation block
@property (nonatomic,retain) NSDate * matchedLocalDate;                             //@synthesize matchedLocalDate=_matchedLocalDate - In the implementation block
@property (nonatomic,retain) CLLocation * matchedLocation;                          //@synthesize matchedLocation=_matchedLocation - In the implementation block
@property (nonatomic,retain) NSSet * matchedPeople;                                 //@synthesize matchedPeople=_matchedPeople - In the implementation block
@property (nonatomic,retain) NSString * matchedEventName;                           //@synthesize matchedEventName=_matchedEventName - In the implementation block
@property (nonatomic,retain) NSMutableSet * persistedFeatures;                      //@synthesize persistedFeatures=_persistedFeatures - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short curationAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short memoriesAlgorithmsVersion; 
@property (nonatomic,retain) NSDictionary * numberOfAssetsByMomentIDs;              //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (nonatomic,retain) NSArray * blacklistableFeatures;                       //@synthesize blacklistableFeatures=_blacklistableFeatures - In the implementation block
@property (assign,nonatomic) NSString * rejectionCause;                             //@synthesize rejectionCause=_rejectionCause - In the implementation block
@property (assign,nonatomic) long long titleCategory;                               //@synthesize titleCategory=_titleCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long aggregatedVersions;               //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,retain) NSSet * momentIDs;                                     //@synthesize momentIDs=_momentIDs - In the implementation block
@property (nonatomic,retain) PGMemoryDebug * debug;                                 //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) long long notificationQuality;                         //@synthesize notificationQuality=_notificationQuality - In the implementation block
@property (nonatomic,copy) NSDictionary * musicGenreDistribution;                   //@synthesize musicGenreDistribution=_musicGenreDistribution - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                 //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,retain) NSSet * features;                                      //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) NSArray * meaningLabels; 
@property (nonatomic,readonly) NSArray * moodKeywords; 
@property (nonatomic,readonly) unsigned long long suggestedMood; 
+(id)stringForSourceType:(long long)arg1 ;
+(id)mustSeeMemoryCriteria;
+(id)stellarMemoryCriteria;
+(id)greatMemoryCriteria;
+(id)otherMemoryCriteria;
-(NSArray *)meaningLabels;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(NSDate *)universalEndDate;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(long long)sourceType;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSSet *)features;
-(NSDate *)universalStartDate;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(double)score;
-(BOOL)isGreat;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDebug:(PGMemoryDebug *)arg1 ;
-(void)setScore:(double)arg1 ;
-(unsigned long long)category;
-(void)setSourceType:(long long)arg1 ;
-(NSArray *)blacklistableFeatures;
-(unsigned long long)suggestedMood;
-(NSArray *)moodKeywords;
-(unsigned long long)subcategory;
-(void)setExtendedCuratedAssets:(NSArray *)arg1 ;
-(void)setCuratedAssets:(NSArray *)arg1 ;
-(NSDictionary *)musicGenreDistribution;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setSubcategory:(unsigned long long)arg1 ;
-(void)setCurationAlgorithmsVersion:(unsigned short)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(unsigned short)memoriesAlgorithmsVersion;
-(PHAssetCollection *)assetCollection;
-(NSArray *)extendedCuratedAssets;
-(NSArray *)curatedAssets;
-(long long)titleCategory;
-(unsigned short)relatedAlgorithmsVersion;
-(void)setSubtitle:(NSString *)arg1 ;
-(PGMemoryDebug *)debug;
-(void)setMemoriesAlgorithmsVersion:(unsigned short)arg1 ;
-(unsigned short)curationAlgorithmsVersion;
-(id)initWithAssetCollection:(id)arg1 ;
-(unsigned long long)duration;
-(BOOL)isMustSee;
-(NSString *)rejectionCause;
-(NSString *)title;
-(BOOL)isStellar;
-(unsigned short)graphSchemaVersion;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(void)setTitleCategory:(long long)arg1 ;
-(unsigned long long)aggregatedVersions;
-(NSSet *)momentIDs;
-(void)setMomentIDs:(NSSet *)arg1 ;
-(double)phMemoryScore;
-(double)_scoreForMemoryCriteria:(id)arg1 ;
-(id)_localIdentifiersInAssetCollection:(id)arg1 ;
-(void)setMatchedPeople:(NSSet *)arg1 ;
-(void)setMatchedLocalDate:(NSDate *)arg1 ;
-(void)setMatchedLocation:(CLLocation *)arg1 ;
-(void)setMatchedEventName:(NSString *)arg1 ;
-(void)addPersistedFeature:(id)arg1 ;
-(PHAsset *)curatedKeyAsset;
-(void)setCuratedKeyAsset:(PHAsset *)arg1 ;
-(unsigned long long)originalSubcategory;
-(void)setOriginalSubcategory:(unsigned long long)arg1 ;
-(unsigned long long)matchedTypes;
-(void)setMatchedTypes:(unsigned long long)arg1 ;
-(NSDate *)matchedLocalDate;
-(CLLocation *)matchedLocation;
-(NSSet *)matchedPeople;
-(NSString *)matchedEventName;
-(NSMutableSet *)persistedFeatures;
-(void)setPersistedFeatures:(NSMutableSet *)arg1 ;
-(long long)notificationQuality;
-(void)setNotificationQuality:(long long)arg1 ;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(void)setNumberOfAssetsByMomentIDs:(NSDictionary *)arg1 ;
-(void)setBlacklistableFeatures:(NSArray *)arg1 ;
-(void)setRejectionCause:(NSString *)arg1 ;
-(void)setMusicGenreDistribution:(NSDictionary *)arg1 ;
@end

