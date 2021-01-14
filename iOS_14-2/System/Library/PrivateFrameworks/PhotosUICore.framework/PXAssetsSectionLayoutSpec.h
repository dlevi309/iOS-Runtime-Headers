/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXYearAssetsSectionConfigurator, PXMonthCardSectionConfigurator, PXMonthChapterSectionConfigurator, PXDayAssetsSectionConfigurator, PXAssetsSectionGridConfigurator, NSShadow, PXZoomablePhotosLayoutSpec;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {

	PXYearAssetsSectionConfigurator* _yearSectionConfigurator;
	PXMonthCardSectionConfigurator* _monthSectionConfigurator;
	PXMonthChapterSectionConfigurator* _monthsChapterConfigurator;
	PXDayAssetsSectionConfigurator* _daySectionConfigurator;
	PXAssetsSectionGridConfigurator* _gridConfigurator;
	NSShadow* _shadow;
	BOOL _userInterfaceStyleAllowsShadow;
	BOOL _disableConfigurators;
	PXZoomablePhotosLayoutSpec* _zoomableSpec;
	double _shadowCornerRadius;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) BOOL supportsGridAspectRatioToggle; 
@property (nonatomic,readonly) PXZoomablePhotosLayoutSpec * zoomableSpec;              //@synthesize zoomableSpec=_zoomableSpec - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) double shadowCornerRadius;                              //@synthesize shadowCornerRadius=_shadowCornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL userInterfaceStyleAllowsShadow;                    //@synthesize userInterfaceStyleAllowsShadow=_userInterfaceStyleAllowsShadow - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                   //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) BOOL disableConfigurators;                              //@synthesize disableConfigurators=_disableConfigurators - In the implementation block
-(NSShadow *)shadow;
-(double)shadowCornerRadius;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)arg1 ;
-(BOOL)supportsGridAspectRatioToggle;
-(id)gridConfigurator;
-(BOOL)disableConfigurators;
-(BOOL)userInterfaceStyleAllowsShadow;
-(id)sectionConfiguratorForAssetCollection:(id)arg1 inZoomLevel:(long long)arg2 ;
-(long long)numberOfGridZoomStepsWithDataSource:(id)arg1 ;
-(PXZoomablePhotosLayoutSpec *)zoomableSpec;
-(id)_configuratorForZoomLevel:(long long)arg1 ;
-(UIEdgeInsets)padding;
@end

