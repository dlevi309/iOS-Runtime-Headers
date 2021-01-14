/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSearchResultsValueSorting.h>
#import <libobjc.A.dylib/PXSearchResultItem.h>

@protocol OS_dispatch_queue, PXSearchResultsValueDelegate;
@class NSString, NSDate, NSObject, NSAttributedString, PSIDate, NSArray, PHPerson, NSMutableDictionary, PLSearchResult, NSDictionary;

@interface PXSearchResultsValue : NSObject <PXSearchResultsValueSorting, PXSearchResultItem> {

	NSObject*<OS_dispatch_queue> _queue;
	double _score;
	unsigned long long _searchCategories;
	NSAttributedString* _attributedDisplayTitle;
	NSString* _displaySubtitle;
	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _collectionSubtitle;
	NSString* _transientToken;
	NSArray* _assetUUIDs;
	unsigned long long _collectionType;
	NSString* _collectionUUID;
	NSString* _collectionTitle;
	unsigned long long _approximateCount;
	PHPerson* _person;
	NSString* _selectedDisplayTitle;
	NSMutableDictionary* _uuidToAssetMap;
	id<PXSearchResultsValueDelegate> _delegate;
	PLSearchResult* _searchResult;
	NSDate* _date;
	NSString* _dateFilterString;

}

@property (setter=_setSelectedDisplayTitle:,retain) NSString * selectedDisplayTitle;              //@synthesize selectedDisplayTitle=_selectedDisplayTitle - In the implementation block
@property (readonly) NSMutableDictionary * uuidToAssetMap;                                        //@synthesize uuidToAssetMap=_uuidToAssetMap - In the implementation block
@property (assign,nonatomic,__weak) id<PXSearchResultsValueDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSearchResult:,retain) PLSearchResult * searchResult;                        //@synthesize searchResult=_searchResult - In the implementation block
@property (setter=_setApproximateCount:) unsigned long long approximateCount;                     //@synthesize approximateCount=_approximateCount - In the implementation block
@property (setter=_setAssetUUIDs:,retain) NSArray * assetUUIDs;                                   //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (setter=_setDate:,nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (setter=_setPerson:,nonatomic,retain) PHPerson * person;                                //@synthesize person=_person - In the implementation block
@property (setter=_setDateFilterString:,retain) NSString * dateFilterString;                      //@synthesize dateFilterString=_dateFilterString - In the implementation block
@property (copy,readonly) NSString * searchString; 
@property (nonatomic,readonly) NSArray * searchTokens; 
@property (nonatomic,copy) NSString * transientToken;                                             //@synthesize transientToken=_transientToken - In the implementation block
@property (copy,readonly) NSString * displayTitle; 
@property (copy,readonly) NSString * displaySubtitle; 
@property (readonly) unsigned long long collectionType;                                           //@synthesize collectionType=_collectionType - In the implementation block
@property (readonly) NSString * collectionUUID;                                                   //@synthesize collectionUUID=_collectionUUID - In the implementation block
@property (readonly) NSString * collectionTitle;                                                  //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (readonly) NSString * collectionSubtitle;                                               //@synthesize collectionSubtitle=_collectionSubtitle - In the implementation block
@property (copy,readonly) NSArray * assets; 
@property (readonly) unsigned long long searchCategories; 
@property (readonly) double score; 
@property (readonly) NSDictionary * debugDictionary; 
@property (nonatomic,readonly) BOOL isSingletonPersonResult; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPerson *)person;
-(NSArray *)assets;
-(long long)compare:(id)arg1 ;
-(PLSearchResult *)searchResult;
-(void)_setDate:(id)arg1 ;
-(id)init;
-(id<PXSearchResultsValueDelegate>)delegate;
-(double)score;
-(id)groupsMatchRanges;
-(NSArray *)searchTokens;
-(unsigned long long)categoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)isFinished;
-(NSString *)collectionTitle;
-(NSString *)displayTitle;
-(void)setDelegate:(id<PXSearchResultsValueDelegate>)arg1 ;
-(NSString *)description;
-(unsigned long long)itemType;
-(NSDictionary *)debugDictionary;
-(void)setTransientToken:(NSString *)arg1 ;
-(NSString *)transientToken;
-(NSArray *)assetUUIDs;
-(void)_setCollectionType:(unsigned long long)arg1 uuid:(id)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(NSString *)displaySubtitle;
-(BOOL)isAssetResult;
-(void)fetchRemainingUUIDs:(/*^block*/id)arg1 ;
-(void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1 ;
-(id)_startDateForAssetCollection:(id)arg1 ;
-(void)_setPerson:(id)arg1 ;
-(id)assetLocalIdentifiersForPreview;
-(void)_setAsset:(id)arg1 forUUID:(id)arg2 ;
-(void)enumerateSearchIndexCategoriesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)collectionSubtitle;
-(void)_setAssetUUIDs:(id)arg1 ;
-(void)_setApproximateCount:(unsigned long long)arg1 ;
-(NSString *)selectedDisplayTitle;
-(void)_setSelectedDisplayTitle:(id)arg1 ;
-(NSMutableDictionary *)uuidToAssetMap;
-(void)_setSearchResult:(id)arg1 ;
-(NSString *)dateFilterString;
-(void)_setDateFilterString:(id)arg1 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(unsigned long long)approximateCount;
-(void)fetchAllUUIDs:(/*^block*/id)arg1 ;
-(id)displayTitleWithDefaultAttributes:(id)arg1 dimmedAttributes:(id)arg2 selectedDisplayTitle:(id*)arg3 ;
-(NSString *)collectionUUID;
-(unsigned long long)searchCategories;
-(BOOL)isSingletonPersonResult;
-(unsigned long long)collectionType;
-(unsigned long long)numberOfAssets;
-(NSDate *)date;
-(NSString *)searchString;
@end

