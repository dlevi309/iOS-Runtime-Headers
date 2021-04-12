/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (__weak,readonly) NSString * owningContentString; 
@property (__weak,readonly) NSArray * assetUUIDs; 
@property (__weak,readonly) NSArray * collectionResults; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PSIGroupResultDelegate>)delegate;
-(void)setDelegate:(id<PSIGroupResultDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(NSArray *)groups;
-(long long)categoryAtIndex:(long long)arg1 ;
-(const CFArrayRef)collectionIds;
-(void)setCollectionIds:(const CFArrayRef)arg1 ;
-(const CFArrayRef)assetIds;
-(void)setGroups:(NSArray *)arg1 ;
-(NSArray *)assetUUIDs;
-(unsigned long long)assetMatchCount;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
-(void)setTransientToken:(NSString *)arg1 ;
-(NSString *)transientToken;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSString *)owningContentString;
-(unsigned long long)groupCount;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(BOOL)hasDateFilterFromImplicitToken;
-(NSArray *)groupsMatchRanges;
-(NSArray *)groupsSearchTokens;
-(id)unitTestDescription;
-(NSArray *)collectionResults;
-(void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2 ;
-(id)fullSearchTextGroupSnapshot;
-(id)normalizedStringAtIndex:(long long)arg1 ;
-(id)groupRangesAtIndex:(long long)arg1 ;
-(unsigned long long)matchCount;
-(id)dateFilterGroupSnapshot;
-(BOOL)isDateFilterPartiallyFromFullSearchText;
-(void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)firstSearchTextGroupSnapshot;
-(NSMutableSet *)sceneGroupsIds;
-(short)dedupingSkippedCategory;
-(unsigned long long)collectionMatchCount;
-(void)setDedupingSkippedCategory:(short)arg1 ;
-(id)normalizedUnitTestDescription;
-(id)contentStringAtIndex:(long long)arg1 ;
-(id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 outAssetRange:(NSRange*)arg3 outCollectionRange:(NSRange*)arg4 outFetchOwningContentString:(BOOL*)arg5 ;
-(void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 count:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 assetCountLimit:(unsigned long long)arg3 collectionCountLimit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

