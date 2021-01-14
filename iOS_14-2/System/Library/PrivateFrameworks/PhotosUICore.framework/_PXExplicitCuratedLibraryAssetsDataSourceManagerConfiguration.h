/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerConfiguration.h>

@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {

	PXAssetsDataSourceManager* _yearsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _monthsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _daysAssetsDataSourceManager;
	PXAssetsDataSourceManager* _allPhotosAssetsDataSourceManager;

}
-(id)initWithYearsAssetsDataSourceManager:(id)arg1 monthsAssetsDataSourceManager:(id)arg2 daysAssetsDataSourceManager:(id)arg3 allPhotosAssetsDataSourceManager:(id)arg4 ;
-(id)configurationForZoomLevel:(long long)arg1 ;
@end

