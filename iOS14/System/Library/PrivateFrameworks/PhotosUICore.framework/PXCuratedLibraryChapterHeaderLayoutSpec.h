/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class UIFont, UIColor, PXExtendedImageConfiguration;

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec {

	BOOL _shouldFloat;
	BOOL _shouldAbbreviateMonth;
	UIFont* _titleFont;
	double _titleHeight;
	UIColor* _titleEmphasizedColor;
	UIColor* _floatingTitleEmphasizedColor;
	UIColor* _titleDeemphasizedColor;
	UIColor* _floatingTitleDeemphasizedColor;
	PXExtendedImageConfiguration* _chevronImageConfiguration;
	double _spacingBetweenTitleAndChevron;
	double _spacingBetweenTitleTopAndPreviousCardBottom;
	double _spacingBetweenTitleBottomAndNextCardTop;
	double _floatingDistanceFromSafeAreaTop;
	double _floatingAppearanceCrossfadeStartDistance;
	double _floatingAppearanceCrossfadeDistance;
	double _floatingAppearanceCrossfadeDuration;
	double _floatingFadeOutDistance;
	CGSize _contentInset;

}

@property (nonatomic,readonly) CGSize contentInset;                                                   //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) UIFont * titleFont;                                                    //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,readonly) double titleHeight;                                                    //@synthesize titleHeight=_titleHeight - In the implementation block
@property (nonatomic,readonly) UIColor * titleEmphasizedColor;                                        //@synthesize titleEmphasizedColor=_titleEmphasizedColor - In the implementation block
@property (nonatomic,readonly) UIColor * floatingTitleEmphasizedColor;                                //@synthesize floatingTitleEmphasizedColor=_floatingTitleEmphasizedColor - In the implementation block
@property (nonatomic,readonly) UIColor * titleDeemphasizedColor;                                      //@synthesize titleDeemphasizedColor=_titleDeemphasizedColor - In the implementation block
@property (nonatomic,readonly) UIColor * floatingTitleDeemphasizedColor;                              //@synthesize floatingTitleDeemphasizedColor=_floatingTitleDeemphasizedColor - In the implementation block
@property (nonatomic,readonly) PXExtendedImageConfiguration * chevronImageConfiguration;              //@synthesize chevronImageConfiguration=_chevronImageConfiguration - In the implementation block
@property (nonatomic,readonly) double spacingBetweenTitleAndChevron;                                  //@synthesize spacingBetweenTitleAndChevron=_spacingBetweenTitleAndChevron - In the implementation block
@property (nonatomic,readonly) double spacingBetweenTitleTopAndPreviousCardBottom;                    //@synthesize spacingBetweenTitleTopAndPreviousCardBottom=_spacingBetweenTitleTopAndPreviousCardBottom - In the implementation block
@property (nonatomic,readonly) double spacingBetweenTitleBottomAndNextCardTop;                        //@synthesize spacingBetweenTitleBottomAndNextCardTop=_spacingBetweenTitleBottomAndNextCardTop - In the implementation block
@property (nonatomic,readonly) BOOL shouldFloat;                                                      //@synthesize shouldFloat=_shouldFloat - In the implementation block
@property (nonatomic,readonly) BOOL shouldAbbreviateMonth;                                            //@synthesize shouldAbbreviateMonth=_shouldAbbreviateMonth - In the implementation block
@property (nonatomic,readonly) double floatingDistanceFromSafeAreaTop;                                //@synthesize floatingDistanceFromSafeAreaTop=_floatingDistanceFromSafeAreaTop - In the implementation block
@property (nonatomic,readonly) double floatingAppearanceCrossfadeStartDistance;                       //@synthesize floatingAppearanceCrossfadeStartDistance=_floatingAppearanceCrossfadeStartDistance - In the implementation block
@property (nonatomic,readonly) double floatingAppearanceCrossfadeDistance;                            //@synthesize floatingAppearanceCrossfadeDistance=_floatingAppearanceCrossfadeDistance - In the implementation block
@property (nonatomic,readonly) double floatingAppearanceCrossfadeDuration;                            //@synthesize floatingAppearanceCrossfadeDuration=_floatingAppearanceCrossfadeDuration - In the implementation block
@property (nonatomic,readonly) double floatingFadeOutDistance;                                        //@synthesize floatingFadeOutDistance=_floatingFadeOutDistance - In the implementation block
-(double)floatingAppearanceCrossfadeDuration;
-(double)titleHeight;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(CGSize)contentInset;
-(double)floatingFadeOutDistance;
-(UIColor *)floatingTitleEmphasizedColor;
-(UIFont *)titleFont;
-(double)floatingAppearanceCrossfadeDistance;
-(double)floatingDistanceFromSafeAreaTop;
-(UIColor *)floatingTitleDeemphasizedColor;
-(double)floatingAppearanceCrossfadeStartDistance;
-(UIColor *)titleEmphasizedColor;
-(double)spacingBetweenTitleBottomAndNextCardTop;
-(PXExtendedImageConfiguration *)chevronImageConfiguration;
-(BOOL)shouldAbbreviateMonth;
-(BOOL)shouldFloat;
-(UIColor *)titleDeemphasizedColor;
-(double)spacingBetweenTitleTopAndPreviousCardBottom;
-(double)spacingBetweenTitleAndChevron;
@end

