/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNewSearchResultsSection.h>

@class PHFetchResult, NSArray;

@interface PXNewSearchResultAssetsSection : PXNewSearchResultsSection {

	PHFetchResult* _curatedAssetFetchResult;
	NSArray* _allAssetResultUUIDs;
	NSArray* _allAssetResults;

}

@property (nonatomic,copy) PHFetchResult * curatedAssetFetchResult;              //@synthesize curatedAssetFetchResult=_curatedAssetFetchResult - In the implementation block
@property (nonatomic,copy) NSArray * allAssetResultUUIDs;                        //@synthesize allAssetResultUUIDs=_allAssetResultUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allAssetResults;                   //@synthesize allAssetResults=_allAssetResults - In the implementation block
-(id)title;
-(id)initWithCuratedAssetSearchResults:(id)arg1 curatedAssetSearchResultsFetchResult:(id)arg2 allAssetSearchResults:(id)arg3 ;
-(NSArray *)allAssetResultUUIDs;
-(id)assetForSearchResultIdentifier:(id)arg1 ;
-(id)searchResultForAsset:(id)arg1 ;
-(PHFetchResult *)curatedAssetFetchResult;
-(void)setCuratedAssetFetchResult:(PHFetchResult *)arg1 ;
-(void)setAllAssetResultUUIDs:(NSArray *)arg1 ;
-(NSArray *)allAssetResults;
@end

