/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, NSCache, PXExtendedTraitCollection, PXLayoutMetricInterpolator, UIColor;

@interface PXFeatureSpec : NSObject {

	BOOL _shouldInsetAllPhotoDetailsContent;
	BOOL __shouldUseMiniMargins;
	unsigned long long _options;
	long long _sizeClass;
	long long _sizeSubclass;
	long long _layoutOrientation;
	long long _layoutDirection;
	long long _userInterfaceIdiom;
	long long _userInterfaceFeature;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	long long _contentSizeCategory;
	double _displayScale;
	long long _windowOrientation;
	NSArray* _collectionTileImageOverlaySpecs;
	NSArray* _collectionTileImageOverlaySpecsHighlighted;
	NSCache* __viewSpecCache;
	PXExtendedTraitCollection* __extendedTraitCollection;
	PXLayoutMetricInterpolator* __horizontalContentGuideInsetsInterpolator;
	CGSize _layoutReferenceSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _layoutMargins;

}

@property (nonatomic,readonly) double spacingBetweenYearCards; 
@property (nonatomic,readonly) double spacingBetweenMonthCards; 
@property (nonatomic,readonly) UIEdgeInsets curatedLibraryEdgeToEdgeContentDefaultPadding; 
@property (nonatomic,readonly) NSCache * _viewSpecCache;                                                            //@synthesize _viewSpecCache=__viewSpecCache - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * _extendedTraitCollection;                                //@synthesize _extendedTraitCollection=__extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) PXLayoutMetricInterpolator * _horizontalContentGuideInsetsInterpolator;              //@synthesize _horizontalContentGuideInsetsInterpolator=__horizontalContentGuideInsetsInterpolator - In the implementation block
@property (nonatomic,readonly) BOOL _shouldUseMiniMargins;                                                          //@synthesize _shouldUseMiniMargins=__shouldUseMiniMargins - In the implementation block
@property (nonatomic,readonly) long long localizedLeadingTextAlignment; 
@property (nonatomic,readonly) unsigned long long options;                                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long sizeClass;                                                                 //@synthesize sizeClass=_sizeClass - In the implementation block
@property (nonatomic,readonly) long long sizeSubclass;                                                              //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
@property (nonatomic,readonly) long long layoutOrientation;                                                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,readonly) long long layoutDirection;                                                           //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,readonly) CGSize layoutReferenceSize;                                                          //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (nonatomic,readonly) long long userInterfaceIdiom;                                                        //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) long long userInterfaceFeature;                                                      //@synthesize userInterfaceFeature=_userInterfaceFeature - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                                                        //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long userInterfaceLevel;                                                        //@synthesize userInterfaceLevel=_userInterfaceLevel - In the implementation block
@property (nonatomic,readonly) long long contentSizeCategory;                                                       //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets;                                                         //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets layoutMargins;                                                          //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) double displayScale;                                                                 //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,readonly) long long windowOrientation;                                                         //@synthesize windowOrientation=_windowOrientation - In the implementation block
@property (nonatomic,readonly) UIColor * defaultBackgroundColor; 
@property (nonatomic,readonly) double defaultCornerRadius; 
@property (nonatomic,readonly) double defaultDarkenSourceOverAmount; 
@property (nonatomic,readonly) UIColor * defaultPlaceholderColor; 
@property (nonatomic,readonly) UIColor * defaultPlacesPlaceholderColor; 
@property (nonatomic,readonly) NSArray * collectionTileImageOverlaySpecs;                                           //@synthesize collectionTileImageOverlaySpecs=_collectionTileImageOverlaySpecs - In the implementation block
@property (nonatomic,readonly) NSArray * collectionTileImageOverlaySpecsHighlighted;                                //@synthesize collectionTileImageOverlaySpecsHighlighted=_collectionTileImageOverlaySpecsHighlighted - In the implementation block
@property (nonatomic,readonly) double collectionTileImageCornerRadius; 
@property (nonatomic,readonly) BOOL shouldInsetAllPhotoDetailsContent;                                              //@synthesize shouldInsetAllPhotoDetailsContent=_shouldInsetAllPhotoDetailsContent - In the implementation block
-(UIEdgeInsets)safeAreaInsets;
-(long long)userInterfaceIdiom;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(long long)layoutOrientation;
-(double)displayScale;
-(long long)userInterfaceStyle;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)options;
-(double)spacingBetweenYearCards;
-(CGSize)layoutReferenceSize;
-(UIEdgeInsets)layoutMargins;
-(long long)userInterfaceFeature;
-(long long)userInterfaceLevel;
-(long long)contentSizeCategory;
-(long long)sizeClass;
-(double)spacingBetweenMonthCards;
-(id)viewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(NSCache *)_viewSpecCache;
-(UIEdgeInsets)contentGuideInsetsForScrollAxis:(long long)arg1 ;
-(void)configureViewSpec:(id)arg1 ;
-(long long)sizeSubclass;
-(UIEdgeInsets)_fullscreenContentInsetsForWidth:(double)arg1 ;
-(id)fullscreenMiroViewSpec;
-(id)fullscreenMiroViewSpecWithBoundingSize:(CGSize)arg1 ;
-(UIColor *)defaultPlaceholderColor;
-(UIColor *)defaultPlacesPlaceholderColor;
-(double)defaultDarkenSourceOverAmount;
-(id)collectionTileImageOverlayColor;
-(double)defaultCornerRadius;
-(id)collectionTileImageOverlayColorHighlighted;
-(double)collectionTileImageCornerRadius;
-(long long)localizedLeadingTextAlignment;
-(long long)_capitalizationStyleFromTextAttributes:(id)arg1 defaultCapitalizationStyle:(long long)arg2 ;
-(NSArray *)collectionTileImageOverlaySpecs;
-(id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 ;
-(NSArray *)collectionTileImageOverlaySpecsHighlighted;
-(BOOL)shouldInsetAllPhotoDetailsContent;
-(PXLayoutMetricInterpolator *)_horizontalContentGuideInsetsInterpolator;
-(BOOL)_shouldUseMiniMargins;
-(UIColor *)defaultBackgroundColor;
-(PXExtendedTraitCollection *)_extendedTraitCollection;
-(UIEdgeInsets)curatedLibraryEdgeToEdgeContentDefaultPadding;
-(long long)windowOrientation;
-(long long)layoutDirection;
@end

