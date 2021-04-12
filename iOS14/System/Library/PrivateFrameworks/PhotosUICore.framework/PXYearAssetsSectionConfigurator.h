/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryCardSectionConfigurator.h>

@class PXYearAssetsSkimmingSectionHeaderLayoutSpec, PXYearAssetsSectionHeaderLayoutSpec;

@interface PXYearAssetsSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {

	PXYearAssetsSkimmingSectionHeaderLayoutSpec* _skimmingHeaderSpec;
	PXYearAssetsSectionHeaderLayoutSpec* _normalHeaderSpec;

}
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg1 ;
@end

