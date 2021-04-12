/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXSearchQuery, NSArray, PHFetchResult, NSSet;

@interface PXSearchQueryResult : NSObject {

	PXSearchQuery* _searchQuery;
	NSArray* _searchResults;
	NSArray* _searchAssetResults;
	PHFetchResult* _curatedAssetsFetchResult;
	NSArray* _searchSuggestions;
	NSSet* _sceneIdentifiers;
	NSArray* _reloadItemIdentifiers;

}

@property (nonatomic,copy,readonly) PXSearchQuery * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchResults;                               //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchAssetResults;                          //@synthesize searchAssetResults=_searchAssetResults - In the implementation block
@property (nonatomic,copy,readonly) PHFetchResult * curatedAssetsFetchResult;              //@synthesize curatedAssetsFetchResult=_curatedAssetsFetchResult - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchSuggestions;                           //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sceneIdentifiers;                              //@synthesize sceneIdentifiers=_sceneIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reloadItemIdentifiers;                       //@synthesize reloadItemIdentifiers=_reloadItemIdentifiers - In the implementation block
-(id)initWithSearchQuery:(id)arg1 searchResults:(id)arg2 searchAssetResults:(id)arg3 curatedAssetsFetchResult:(id)arg4 searchSuggestions:(id)arg5 sceneIdentifiers:(id)arg6 reloadItemIdentifiers:(id)arg7 ;
-(id)initEmptySearchQueryResultForQuery:(id)arg1 ;
-(PHFetchResult *)curatedAssetsFetchResult;
-(NSArray *)reloadItemIdentifiers;
-(NSSet *)sceneIdentifiers;
-(PXSearchQuery *)searchQuery;
-(NSArray *)searchSuggestions;
-(NSArray *)searchResults;
-(NSArray *)searchAssetResults;
@end

