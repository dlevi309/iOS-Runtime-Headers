/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject {

	PXAssetsSectionLayoutSpec* _assetsSectionLayoutSpec;
	UIEdgeInsets _containerInsets;

}

@property (nonatomic,readonly) PXAssetsSectionLayoutSpec * assetsSectionLayoutSpec; 
@property (nonatomic,readonly) UIEdgeInsets containerInsets;                                     //@synthesize containerInsets=_containerInsets - In the implementation block
-(long long)numberOfZoomStepsWithDataSource:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)init;
-(PXAssetsSectionLayoutSpec *)assetsSectionLayoutSpec;
-(long long)initialZoomStep;
-(CGRect)containerFrameForAssetSectionLayout:(id)arg1 ;
-(UIEdgeInsets)containerInsets;
-(id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(CGSize)arg4 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(BOOL)supportsAspectRatioToggle;
@end

