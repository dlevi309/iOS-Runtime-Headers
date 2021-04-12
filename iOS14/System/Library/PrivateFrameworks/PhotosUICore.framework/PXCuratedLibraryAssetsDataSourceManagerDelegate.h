/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate <NSObject>
@optional
-(id)curatedLibraryAssetsDataSourceManager:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
-(long long)curatedLibraryAssetsDataSourceManager:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
-(id)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
-(BOOL)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;

@end

