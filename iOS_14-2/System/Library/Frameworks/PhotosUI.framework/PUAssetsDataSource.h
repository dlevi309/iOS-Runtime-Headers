/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTilingDataSource.h>

@class NSIndexPath;

@interface PUAssetsDataSource : PUTilingDataSource

@property (nonatomic,readonly) BOOL containsMultipleAssets; 
@property (nonatomic,readonly) NSIndexPath * firstItemIndexPath; 
@property (nonatomic,readonly) NSIndexPath * lastItemIndexPath; 
+(id)emptyDataSource;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2 ;
-(long long)numberOfAssetsWithMaximum:(long long)arg1 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(NSIndexPath *)lastItemIndexPath;
-(id)containedAssetsDataSourceAtIndexPath:(id)arg1 ;
-(id)startingAssetReference;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(NSIndexPath *)firstItemIndexPath;
-(BOOL)containsMultipleAssets;
-(BOOL)isEmpty;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg1 ;
-(id)assetReferenceForAssetReference:(id)arg1 ;
-(BOOL)couldAssetReferenceAppear:(id)arg1 ;
@end

