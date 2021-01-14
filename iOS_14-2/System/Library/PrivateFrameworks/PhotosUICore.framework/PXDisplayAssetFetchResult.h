/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAssetFetchResult <PXSectionedFetchResult>
@property (nonatomic,readonly) id<PXDisplayAsset> firstObject; 
@property (nonatomic,readonly) id<PXDisplayAsset> lastObject; 
@required
-(id)thumbnailAssetAtIndex:(unsigned long long)arg1;
-(id)objectsAtIndexes:(id)arg1;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
-(id<PXDisplayAsset>)lastObject;
-(id<PXDisplayAsset>)firstObject;
-(BOOL)containsObject:(id)arg1;
-(id)objectAtIndex:(unsigned long long)arg1;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;

@end

