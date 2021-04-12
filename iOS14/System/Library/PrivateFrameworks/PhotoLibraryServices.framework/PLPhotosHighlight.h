/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLPhotosHighlightData.h>

@class NSString, NSDate, NSSet, NSArray, PLManagedAsset;

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData>

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * verboseSmartDescription; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSDate * localStartDate; 
@property (nonatomic,retain,readonly) NSDate * localEndDate; 
@property (assign,nonatomic) BOOL isCurated; 
@property (assign,nonatomic) unsigned short visibilityState; 
@property (assign,nonatomic) unsigned short kind; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short category; 
@property (assign,nonatomic) int startTimeZoneOffset; 
@property (assign,nonatomic) int endTimeZoneOffset; 
@property (assign,nonatomic) double promotionScore; 
@property (assign,nonatomic) unsigned short enrichmentState; 
@property (assign,nonatomic) unsigned long long mood; 
@property (assign,nonatomic) int assetsCount; 
@property (assign,nonatomic) int extendedCount; 
@property (assign,nonatomic) int summaryCount; 
@property (assign,nonatomic) int dayGroupAssetsCount; 
@property (assign,nonatomic) int dayGroupExtendedAssetsCount; 
@property (assign,nonatomic) int dayGroupSummaryAssetsCount; 
@property (nonatomic,retain) NSSet * childPhotosHighlights; 
@property (nonatomic,retain) PLPhotosHighlight * parentPhotosHighlight; 
@property (nonatomic,retain) NSSet * childDayGroupPhotosHighlights; 
@property (nonatomic,retain) PLPhotosHighlight * parentDayGroupPhotosHighlight; 
@property (assign,nonatomic) short highlightVersion; 
@property (assign,nonatomic) short enrichmentVersion; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * summaryAssets; 
@property (nonatomic,retain) NSSet * extendedAssets; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) NSSet * moments; 
@property (nonatomic,retain) PLManagedAsset * monthKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * monthFirstAsset; 
@property (nonatomic,retain) PLManagedAsset * yearKeyAsset; 
@property (nonatomic,retain) NSSet * dayGroupAssets; 
@property (nonatomic,retain) NSSet * dayGroupExtendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupSummaryAssets; 
@property (nonatomic,retain) PLManagedAsset * dayGroupKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * keyAssetForKind; 
@property (nonatomic,retain,readonly) NSArray * momentsSortedByTime; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) BOOL isPromoted; 
@property (nonatomic,readonly) BOOL isRecent; 
+(id)entityName;
+(id)fetchRequest;
+(id)sortByTimeSortDescriptors;
+(id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
+(id)predicateForInvalidHighlightsOfAllKinds;
+(id)predicateForInvalidDayGroupHighlights;
+(id)baseSearchIndexPredicate;
+(id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
+(id)_kindDescription:(unsigned short)arg1 ;
+(id)_predicateForHighlightsOfKind:(unsigned short)arg1 ;
+(id)insertNewPhotosHighlightInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)predicateForEmptyHighlightsOfKind:(unsigned short)arg1 ;
+(id)predicateForInvalidDayHighlights;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 ;
+(id)predicateForAllAssetsInPhotosHighlight:(id)arg1 ;
+(id)predicateForInvalidMonthOrYearHighlights;
+(id)allPhotosHighlightsInManagedObjectContext:(id)arg1 predicate:(id)arg2 keyPathsForPrefetching:(id)arg3 error:(id*)arg4 ;
-(void)awakeFromInsert;
-(void)refreshAssets;
-(id)diagnosticInformation;
-(void)delete;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4 ;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)setKeyAssetForKind:(PLManagedAsset *)arg1 ;
-(void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3 ;
-(void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2 ;
-(NSString *)debugDescription;
-(void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3 ;
-(NSArray *)momentsSortedByTime;
-(void)_appendHomeToCollection:(id)arg1 ;
-(void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2 ;
-(NSString *)description;
-(void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(id)bestAsset;
-(void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5 ;
-(BOOL)isPromoted;
-(void)removeAssetData:(id)arg1 ;
-(int)searchAssetsCountForKind;
-(BOOL)isRecent;
-(void)_appendWorkText:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2 ;
-(unsigned long long)numberOfAssetsInExtended;
-(void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2 ;
-(BOOL)supportsDiagnosticInformation;
-(void)refreshCuratedAssetsForCurationType:(unsigned short)arg1 ;
-(void)bumpHighlightVersion;
-(PLManagedAsset *)keyAssetForKind;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(void)_appendHolidays:(id)arg1 toCollection:(id)arg2 ;
@end

