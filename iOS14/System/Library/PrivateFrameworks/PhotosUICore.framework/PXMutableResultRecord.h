/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXResultRecord.h>

@class PHFetchResult, NSPredicate, NSSet;

@interface PXMutableResultRecord : PXResultRecord {

	PHFetchResult* _filteredFetchResult;
	NSPredicate* _inclusionPredicate;
	BOOL _filteredFetchResultIsValid;
	BOOL _inclusionPredicateIsValid;
	BOOL _reverseSortOrder;
	BOOL _wantsCuration;
	BOOL _preloadAssetTypeCounts;
	NSSet* _excludedOids;
	NSSet* _includedOids;
	NSSet* _curatedOids;
	PHFetchResult* _fetchResult;
	PHFetchResult* _curatedFetchResult;
	PHFetchResult* _keyAssetsFetchResult;
	long long _keyAssetIndex;

}

@property (nonatomic,readonly) NSSet * excludedOids;                             //@synthesize excludedOids=_excludedOids - In the implementation block
@property (nonatomic,readonly) NSSet * includedOids;                             //@synthesize includedOids=_includedOids - In the implementation block
@property (nonatomic,readonly) NSSet * curatedOids;                              //@synthesize curatedOids=_curatedOids - In the implementation block
@property (nonatomic,readonly) NSPredicate * inclusionPredicate; 
@property (nonatomic,readonly) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) BOOL reverseSortOrder;                            //@synthesize reverseSortOrder=_reverseSortOrder - In the implementation block
@property (nonatomic,retain) PHFetchResult * curatedFetchResult;                 //@synthesize curatedFetchResult=_curatedFetchResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * keyAssetsFetchResult;               //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (assign,nonatomic) long long keyAssetIndex;                            //@synthesize keyAssetIndex=_keyAssetIndex - In the implementation block
@property (assign,nonatomic) BOOL wantsCuration;                                 //@synthesize wantsCuration=_wantsCuration - In the implementation block
@property (nonatomic,readonly) BOOL isCurated; 
@property (nonatomic,readonly) PHFetchResult * filteredFetchResult; 
@property (nonatomic,readonly) PHFetchResult * exposedFetchResult; 
@property (assign,nonatomic) BOOL preloadAssetTypeCounts;                        //@synthesize preloadAssetTypeCounts=_preloadAssetTypeCounts - In the implementation block
-(BOOL)wantsCuration;
-(void)setKeyAssetIndex:(long long)arg1 ;
-(void)setWantsCuration:(BOOL)arg1 ;
-(PHFetchResult *)fetchResult;
-(BOOL)isCurated;
-(BOOL)reverseSortOrder;
-(id)init;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(void)_setIncludeOids:(id)arg1 ;
-(PHFetchResult *)keyAssetsFetchResult;
-(void)setCuratedFetchResult:(PHFetchResult *)arg1 ;
-(void)setKeyAssetsFetchResult:(PHFetchResult *)arg1 ;
-(NSSet *)includedOids;
-(NSPredicate *)inclusionPredicate;
-(void)_invalidateInclusionPredicate;
-(id)_exposedFetchResultBeforeFiltering;
-(void)excludeOids:(id)arg1 ;
-(void)_updateFilteredFetchResultIfNeeded;
-(void)_invalidateKeyAssetIndex;
-(PHFetchResult *)exposedFetchResult;
-(void)invalidateFetchResultAssetCache;
-(void)setPreloadAssetTypeCounts:(BOOL)arg1 ;
-(void)includeOids:(id)arg1 ;
-(NSSet *)excludedOids;
-(PHFetchResult *)curatedFetchResult;
-(void)setFetchResult:(id)arg1 reverseSortOrder:(BOOL)arg2 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)stopIncludingAllOids;
-(void)_invalidateFilteredFetchResult;
-(void)stopExcludingOids:(id)arg1 ;
-(long long)keyAssetIndex;
-(BOOL)preloadAssetTypeCounts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)curatedOids;
-(PHFetchResult *)filteredFetchResult;
@end

