/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor, UIFont, PXExtendedImageConfiguration, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec {

	UIColor* _dividerColor;
	UIColor* _titleColor;
	UIColor* _subtitleColor;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	double _minimumHeaderContentHeight;
	double _titleHorizontalInset;
	double _titleSubtitleHorizontalSpacing;
	double _dividerBaselineToTextBaselineSpacing;
	double _chevronSpacing;
	double _chevronAlpha;
	PXExtendedImageConfiguration* _chevronImageConfiguration;
	double _gradientAlpha;
	double _gradientOverhang;
	PXCuratedLibrarySectionHeaderLayoutSpec* _curatedLibraryHeaderSpec;
	CGSize _chevronSize;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) UIColor * dividerColor;                                                          //@synthesize dividerColor=_dividerColor - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                                                            //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIColor * subtitleColor;                                                         //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (nonatomic,readonly) UIFont * titleFont;                                                              //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,readonly) UIFont * subtitleFont;                                                           //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,readonly) double minimumHeaderContentHeight;                                               //@synthesize minimumHeaderContentHeight=_minimumHeaderContentHeight - In the implementation block
@property (nonatomic,readonly) double titleHorizontalInset;                                                     //@synthesize titleHorizontalInset=_titleHorizontalInset - In the implementation block
@property (nonatomic,readonly) double titleSubtitleHorizontalSpacing;                                           //@synthesize titleSubtitleHorizontalSpacing=_titleSubtitleHorizontalSpacing - In the implementation block
@property (nonatomic,readonly) double dividerBaselineToTextBaselineSpacing;                                     //@synthesize dividerBaselineToTextBaselineSpacing=_dividerBaselineToTextBaselineSpacing - In the implementation block
@property (nonatomic,readonly) double chevronSpacing;                                                           //@synthesize chevronSpacing=_chevronSpacing - In the implementation block
@property (nonatomic,readonly) CGSize chevronSize;                                                              //@synthesize chevronSize=_chevronSize - In the implementation block
@property (nonatomic,readonly) double chevronAlpha;                                                             //@synthesize chevronAlpha=_chevronAlpha - In the implementation block
@property (nonatomic,readonly) PXExtendedImageConfiguration * chevronImageConfiguration;                        //@synthesize chevronImageConfiguration=_chevronImageConfiguration - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                                            //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double gradientAlpha;                                                            //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (nonatomic,readonly) double gradientOverhang;                                                         //@synthesize gradientOverhang=_gradientOverhang - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * curatedLibraryHeaderSpec;              //@synthesize curatedLibraryHeaderSpec=_curatedLibraryHeaderSpec - In the implementation block
-(CGSize)chevronSize;
-(double)minimumHeaderContentHeight;
-(UIColor *)titleColor;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)curatedLibraryHeaderSpec;
-(UIColor *)dividerColor;
-(double)chevronAlpha;
-(UIFont *)titleFont;
-(double)chevronSpacing;
-(UIFont *)subtitleFont;
-(double)gradientOverhang;
-(UIColor *)subtitleColor;
-(PXExtendedImageConfiguration *)chevronImageConfiguration;
-(UIEdgeInsets)padding;
-(double)titleSubtitleHorizontalSpacing;
-(double)dividerBaselineToTextBaselineSpacing;
-(double)gradientAlpha;
-(double)titleHorizontalInset;
@end

