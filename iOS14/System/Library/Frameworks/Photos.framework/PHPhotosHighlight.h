/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSString, NSDate, NSManagedObjectID;

@interface PHPhotosHighlight : PHAssetCollection {

	unsigned long long _assetsCount;
	BOOL _curated;
	BOOL _enriched;
	BOOL _recent;
	unsigned short _kind;
	unsigned short _type;
	unsigned short _category;
	unsigned short _visibilityState;
	unsigned short _enrichmentState;
	short _highlightVersion;
	short _enrichmentVersion;
	unsigned long long _extendedCount;
	unsigned long long _summaryCount;
	NSString* _verboseSmartDescription;
	long long _startTimeZoneOffset;
	long long _endTimeZoneOffset;
	double _promotionScore;
	unsigned long long _mood;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	unsigned long long _dayGroupAssetsCount;
	unsigned long long _dayGroupExtendedAssetsCount;
	unsigned long long _dayGroupSummaryAssetsCount;
	NSString* _subtitle;
	NSManagedObjectID* _parentPhotosHighlight;
	NSManagedObjectID* _keyAsset;
	NSManagedObjectID* _dayGroupKeyAsset;
	NSManagedObjectID* _monthKeyAsset;
	NSManagedObjectID* _yearKeyAsset;

}

@property (assign,getter=isEnriched,nonatomic) BOOL enriched;                               //@synthesize enriched=_enriched - In the implementation block
@property (assign,getter=isRecent,nonatomic) BOOL recent;                                   //@synthesize recent=_recent - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate;                                       //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,retain) NSDate * localEndDate;                                         //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupAssetsCount;                      //@synthesize dayGroupAssetsCount=_dayGroupAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupExtendedAssetsCount;              //@synthesize dayGroupExtendedAssetsCount=_dayGroupExtendedAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupSummaryAssetsCount;               //@synthesize dayGroupSummaryAssetsCount=_dayGroupSummaryAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned short enrichmentState;                              //@synthesize enrichmentState=_enrichmentState - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) short highlightVersion;                                      //@synthesize highlightVersion=_highlightVersion - In the implementation block
@property (nonatomic,readonly) short enrichmentVersion;                                     //@synthesize enrichmentVersion=_enrichmentVersion - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * parentPhotosHighlight;                   //@synthesize parentPhotosHighlight=_parentPhotosHighlight - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * keyAsset;                                //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * dayGroupKeyAsset;                        //@synthesize dayGroupKeyAsset=_dayGroupKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * monthKeyAsset;                           //@synthesize monthKeyAsset=_monthKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * yearKeyAsset;                            //@synthesize yearKeyAsset=_yearKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * keyAssetForKind; 
@property (nonatomic,readonly) unsigned short preferredCurationType; 
@property (nonatomic,readonly) NSString * dateDescription; 
@property (nonatomic,readonly) NSString * smartDescription; 
@property (nonatomic,readonly) NSString * verboseSmartDescription;                          //@synthesize verboseSmartDescription=_verboseSmartDescription - In the implementation block
@property (nonatomic,readonly) unsigned short kind;                                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned short visibilityState;                              //@synthesize visibilityState=_visibilityState - In the implementation block
@property (getter=isCurated,nonatomic,readonly) BOOL curated;                               //@synthesize curated=_curated - In the implementation block
@property (nonatomic,readonly) long long startTimeZoneOffset;                               //@synthesize startTimeZoneOffset=_startTimeZoneOffset - In the implementation block
@property (nonatomic,readonly) long long endTimeZoneOffset;                                 //@synthesize endTimeZoneOffset=_endTimeZoneOffset - In the implementation block
@property (nonatomic,readonly) double promotionScore;                                       //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,readonly) unsigned long long mood;                                     //@synthesize mood=_mood - In the implementation block
@property (nonatomic,readonly) unsigned long long extendedCount;                            //@synthesize extendedCount=_extendedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryCount;                             //@synthesize summaryCount=_summaryCount - In the implementation block
+(id)dateRangeTitleGenerator;
+(id)entityKeyMap;
+(id)fetchParentHighlightForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchParentHighlightsForHighlights:(id)arg1 options:(id)arg2 ;
+(id)fetchChildHighlightsForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchParentDayGroupHighlightForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchChildDayGroupHighlightsForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg1 options:(id)arg2 ;
+(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(BOOL)updateHighlightTitles;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)identifierCode;
+(id)fetchType;
+(BOOL)cleanupEmptyHighlights;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(BOOL)processUnprocessedMomentLocations;
+(id)managedEntityName;
+(BOOL)processRecentHighlights;
-(unsigned long long)mood;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(NSDate *)localStartDate;
-(BOOL)isCurated;
-(NSString *)dateDescription;
-(NSDate *)localEndDate;
-(long long)assetCollectionSubtype;
-(long long)endTimeZoneOffset;
-(NSManagedObjectID *)keyAsset;
-(BOOL)isEnriched;
-(unsigned long long)extendedCount;
-(unsigned long long)summaryCount;
-(unsigned long long)countForCurationType:(unsigned short)arg1 ;
-(id)dateDescriptionWithOptions:(unsigned long long)arg1 ;
-(unsigned short)preferredCurationType;
-(void)setEnriched:(BOOL)arg1 ;
-(void)setRecent:(BOOL)arg1 ;
-(unsigned long long)dayGroupAssetsCount;
-(unsigned long long)dayGroupExtendedAssetsCount;
-(short)highlightVersion;
-(unsigned long long)dayGroupSummaryAssetsCount;
-(NSManagedObjectID *)parentPhotosHighlight;
-(NSManagedObjectID *)dayGroupKeyAsset;
-(NSManagedObjectID *)monthKeyAsset;
-(NSManagedObjectID *)yearKeyAsset;
-(NSString *)subtitle;
-(unsigned short)category;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(unsigned short)kind;
-(id)localizedSubtitle;
-(long long)startTimeZoneOffset;
-(NSString *)smartDescription;
-(NSString *)verboseSmartDescription;
-(double)promotionScore;
-(unsigned short)enrichmentState;
-(short)enrichmentVersion;
-(id)description;
-(unsigned short)visibilityState;
-(unsigned short)type;
-(BOOL)canShowAvalancheStacks;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isRecent;
-(NSManagedObjectID *)keyAssetForKind;
-(id)title;
@end

