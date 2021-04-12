/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXDayAssetsSectionHeaderLayoutSpec, PXAssetsSectionBodyAllPhotosGridLayoutSpec, PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator {

	PXDayAssetsSectionHeaderLayoutSpec* _floatingHeaderSpec;
	PXAssetsSectionBodyAllPhotosGridLayoutSpec* _allPhotosGridBodySpec;
	PXDayAssetsSectionBodyLayoutSpec* _daysBodySpec;

}
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)_bodySpecForBodyStyle:(long long)arg1 zoomLevel:(long long)arg2 ;
-(void)_configureSelectAllButtonOfSectionLayout:(id)arg1 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(CGSize)arg4 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(void)_getHeaderAndBodyStylesForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 zoomLevel:(long long)arg3 headerStyle:(long long*)arg4 bodyStyle:(long long*)arg5 ;
@end

