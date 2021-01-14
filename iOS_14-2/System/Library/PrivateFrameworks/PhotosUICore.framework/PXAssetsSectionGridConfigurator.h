/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator {

	BOOL _aspectFitContent;
	long long _zoomStep;

}

@property (assign,nonatomic) long long zoomStep;                            //@synthesize zoomStep=_zoomStep - In the implementation block
@property (assign,nonatomic) BOOL aspectFitContent;                         //@synthesize aspectFitContent=_aspectFitContent - In the implementation block
@property (nonatomic,readonly) BOOL supportsAspectRatioToggle; 
-(long long)numberOfZoomStepsWithDataSource:(id)arg1 ;
-(void)setZoomStep:(long long)arg1 ;
-(void)_configureGridLayout:(id)arg1 inSectionLayout:(id)arg2 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(CGSize)arg4 ;
-(BOOL)_layoutIsAspectFit:(id)arg1 forSpec:(id)arg2 ;
-(long long)zoomStep;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(void)setAspectFitContent:(BOOL)arg1 ;
-(BOOL)aspectFitContent;
-(BOOL)supportsAspectRatioToggle;
-(double)_interItemSpacingForLayout:(id)arg1 forSpec:(id)arg2 ;
-(BOOL)_layoutHasIndividualItems:(id)arg1 forSpec:(id)arg2 ;
@end

