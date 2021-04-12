/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXBrowserSelectionSnapshot.h>

@protocol PXDisplayAssetDataSource;
@class NSMutableArray, NSArray;

@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot {

	NSMutableArray* _assets;
	NSArray* _indexPaths;
	id<PXDisplayAssetDataSource> _dataSource;

}

@property (nonatomic,readonly) NSArray * indexPaths;                                 //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSArray * assets; 
-(NSArray *)assets;
-(long long)mediaType;
-(id<PXDisplayAssetDataSource>)dataSource;
-(long long)assetCount;
-(id)displayAssetAtIndex:(long long)arg1 ;
-(id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(id)assetReferenceAtIndex:(long long)arg1 ;
-(long long)indexOfAssetReference:(id)arg1 ;
-(long long)estimatedModelObjectsCount;
-(long long)estimatedAssetCount;
-(id)modelObjects;
-(NSArray *)indexPaths;
@end

