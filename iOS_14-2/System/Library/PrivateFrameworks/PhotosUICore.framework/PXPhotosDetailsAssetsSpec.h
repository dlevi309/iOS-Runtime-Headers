/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXWidgetSpec;

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec {

	BOOL _shouldShowTitle;
	BOOL _enableBadges;
	long long _editorialNumberOfColumns;
	double _editorialInterTileSpacing;
	long long _gridContentMode;
	unsigned long long _detailsOptions;
	PXWidgetSpec* __widgetSpec;
	CGSize _gridInterItemSpacing;
	CGSize _gridItemSize;
	UIEdgeInsets _contentGuideInsets;
	UIEdgeInsets _gridContentInsets;

}

@property (nonatomic,readonly) PXWidgetSpec * _widgetSpec;                      //@synthesize _widgetSpec=__widgetSpec - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentGuideInsets;                 //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTitle;                            //@synthesize shouldShowTitle=_shouldShowTitle - In the implementation block
@property (nonatomic,readonly) long long editorialNumberOfColumns;              //@synthesize editorialNumberOfColumns=_editorialNumberOfColumns - In the implementation block
@property (nonatomic,readonly) double editorialInterTileSpacing;                //@synthesize editorialInterTileSpacing=_editorialInterTileSpacing - In the implementation block
@property (nonatomic,readonly) BOOL enableBadges;                               //@synthesize enableBadges=_enableBadges - In the implementation block
@property (nonatomic,readonly) CGSize gridInterItemSpacing;                     //@synthesize gridInterItemSpacing=_gridInterItemSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets gridContentInsets;                  //@synthesize gridContentInsets=_gridContentInsets - In the implementation block
@property (nonatomic,readonly) CGSize gridItemSize;                             //@synthesize gridItemSize=_gridItemSize - In the implementation block
@property (nonatomic,readonly) long long gridContentMode;                       //@synthesize gridContentMode=_gridContentMode - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsOptions;               //@synthesize detailsOptions=_detailsOptions - In the implementation block
+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)enableBadges;
-(UIEdgeInsets)contentGuideInsets;
-(CGSize)gridItemSize;
-(PXWidgetSpec *)_widgetSpec;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3 ;
-(unsigned long long)detailsOptions;
-(id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2 ;
-(double)defaultCornerRadius;
-(void)_computeSpecWithExtendedTraitCollection:(id)arg1 ;
-(void)_computeEditorialWithExtendedTraitCollection:(id)arg1 ;
-(BOOL)shouldShowTitle;
-(void)_computeGridWithExtendedTraitCollection:(id)arg1 ;
-(long long)editorialNumberOfColumns;
-(double)editorialInterTileSpacing;
-(CGSize)gridInterItemSpacing;
-(long long)gridContentMode;
-(UIEdgeInsets)gridContentInsets;
@end

