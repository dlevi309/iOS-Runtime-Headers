/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PSIGroupResultDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, NSMutableSet, NSArray;

@interface PSIGroupResult : NSObject <NSCopying> {

	id<PSIGroupResultDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _owningContentString;
	NSMutableArray* _assetUUIDs;
	NSMutableArray* _collectionResults;
	BOOL _didFetchOwningContentString;
	NSMutableSet* _sceneGroupsIds;
	short _dedupingSkippedCategory;
	float _score;
	NSString* _transientToken;
	NSArray* _groups;
	const CFArrayRef _assetIds;
	const CFArrayRef _collectionIds;

}

@property (nonatomic,copy) NSArray * groups;                                              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) const CFArrayRef assetIds;                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) const CFArrayRef collectionIds;                              //@synthesize collectionIds=_collectionIds - In the implementation block
@property (assign,nonatomic) float score;                                                 //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) short dedupingSkippedCategory;                               //@synthesize dedupingSkippedCategory=_dedupingSkippedCategory - In the implementation block
@property (readonly) NSMutableSet * sceneGroupsIds; 
@property (assign,nonatomic,__weak) id<PSIGroupResultDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * groupsSearchTokens; 
@property (nonatomic,readonly) NSArray * contentStrings; 
@property (nonatomic,readonly) NSArray * lookupIdentifiers; 
@property (nonatomic,readonly) NSArray * groupsMatchRanges; 
@property (nonatomic,copy) NSString * transientToken;                                     //@synthesize transientToken=_transientToken - In the implementation block
@property (nonatomic,readonly) BOOL isDateFilterPartiallyFromFullSearchText; 
@property (nonatomic,readonly) BOOL hasDateFilterFromImplicitToken; 
@property (nonatomic,readonly) unsigned long long matchCount; 
@property (nonatomic,readonly) unsigned long long assetMatchCount; 
@property (nonatomic,readonly) unsigned long long collectionMatchCount; 
@property (nonatomic,readonly) BOOL containsFilterSearchTokens; 
@property (__weak,readonly) NSString * owningContentString; 
@property (__weak,readonly) NSArray * assetUUIDs; 
@property (__weak,readonly) NSArray * collectionResults; 
-(void)setCollectionIds:(const CFArrayRef)arg1 ;
-(unsigned long long)groupCount;
-(id)initWithQueue:(id)arg1 ;
-(const CFArrayRef)collectionIds;
-(unsigned long long)collectionMatchCount;
-(id<PSIGroupResultDelegate>)delegate;
-(NSArray *)collectionResults;
-(float)score;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSString *)owningContentString;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(BOOL)hasDateFilterFromImplicitToken;
-(NSArray *)groupsMatchRanges;
-(NSArray *)groupsSearchTokens;
-(long long)categoryAtIndex:(long long)arg1 ;
-(BOOL)containsFilterSearchTokens;
-(void)setDedupingSkippedCategory:(short)arg1 ;
-(id)unitTestDescription;
-(id)debugDescription;
-(void)setScore:(float)arg1 ;
-(id)normalizedUnitTestDescription;
-(id)contentStringAtIndex:(long long)arg1 ;
-(id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 outAssetRange:(NSRange*)arg3 outCollectionRange:(NSRange*)arg4 outFetchOwningContentString:(BOOL*)arg5 ;
-(void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 count:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 assetCountLimit:(unsigned long long)arg3 collectionCountLimit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setGroups:(NSArray *)arg1 ;
-(unsigned long long)matchCount;
-(id)lookupIdentifiersForSearchIndexCategories:(id)arg1 ;
-(void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2 ;
-(id)fullSearchTextGroupSnapshot;
-(id)normalizedStringAtIndex:(long long)arg1 ;
-(id)groupRangesAtIndex:(long long)arg1 ;
-(id)dateFilterGroupSnapshot;
-(BOOL)isDateFilterPartiallyFromFullSearchText;
-(NSArray *)groups;
-(void)setDelegate:(id<PSIGroupResultDelegate>)arg1 ;
-(id)description;
-(void)setTransientToken:(NSString *)arg1 ;
-(NSString *)transientToken;
-(NSArray *)assetUUIDs;
-(id)firstSearchTextGroupSnapshot;
-(NSMutableSet *)sceneGroupsIds;
-(short)dedupingSkippedCategory;
-(const CFArrayRef)assetIds;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
-(unsigned long long)assetMatchCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

