/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor, UIFont;

@interface PXMemoriesSpec : PXFeatureSpec {

	BOOL _feedShouldAllowHeaders;
	BOOL _alwaysShowFavoritesBadge;
	BOOL _shouldRemoveHighlightOnScroll;
	UIColor* _feedBackgroundColor;
	UIColor* _selectionHighlightColor;
	long long _feedHeroPosition;
	long long _feedAxis;
	unsigned long long _feedMemoriesPerRow;
	double _feedEntryHeaderHeight;
	double _firstFeedEntryHeaderHeight;
	double _distanceBetweenHeaderBaselineAndImageTop;
	double _feedInteritemSpacing;
	long long _idiom;
	double _feedHeroImageAspectRatio;
	double _feedAdditionalContentThreshold;
	UIFont* _tabTitleFont;
	UIColor* _tabTitleTextColor;
	double _tabTitleBaselineOffset;
	double _tabTopContentPadding;
	UIColor* _borderColor;
	double _borderWidth;
	double _orbPreviewSize;
	unsigned long long __style;
	double __displayScale;
	double __columnWidth;
	CGSize _favoriteBadgeSize;
	CGPoint _highlightedSectionHeaderOffset;
	CGPoint _borderOffset;
	UIEdgeInsets _feedEntryEdgeInsets;
	UIEdgeInsets _favoriteBadgeInset;

}

@property (nonatomic,readonly) unsigned long long _style;                                    //@synthesize _style=__style - In the implementation block
@property (nonatomic,readonly) double _displayScale;                                         //@synthesize _displayScale=__displayScale - In the implementation block
@property (nonatomic,readonly) double _columnWidth;                                          //@synthesize _columnWidth=__columnWidth - In the implementation block
@property (nonatomic,readonly) UIColor * feedBackgroundColor;                                //@synthesize feedBackgroundColor=_feedBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectionHighlightColor;                            //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (nonatomic,readonly) long long feedHeroPosition;                                   //@synthesize feedHeroPosition=_feedHeroPosition - In the implementation block
@property (nonatomic,readonly) long long feedAxis;                                           //@synthesize feedAxis=_feedAxis - In the implementation block
@property (nonatomic,readonly) unsigned long long feedMemoriesPerRow;                        //@synthesize feedMemoriesPerRow=_feedMemoriesPerRow - In the implementation block
@property (nonatomic,readonly) long long feedSectionLayoutAxis; 
@property (nonatomic,readonly) UIEdgeInsets feedEntryEdgeInsets;                             //@synthesize feedEntryEdgeInsets=_feedEntryEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets layoutInsets; 
@property (nonatomic,readonly) BOOL feedShouldAllowHeaders;                                  //@synthesize feedShouldAllowHeaders=_feedShouldAllowHeaders - In the implementation block
@property (nonatomic,readonly) double feedEntryHeaderHeight;                                 //@synthesize feedEntryHeaderHeight=_feedEntryHeaderHeight - In the implementation block
@property (nonatomic,readonly) double firstFeedEntryHeaderHeight;                            //@synthesize firstFeedEntryHeaderHeight=_firstFeedEntryHeaderHeight - In the implementation block
@property (nonatomic,readonly) double distanceBetweenHeaderBaselineAndImageTop;              //@synthesize distanceBetweenHeaderBaselineAndImageTop=_distanceBetweenHeaderBaselineAndImageTop - In the implementation block
@property (nonatomic,readonly) double feedHeroImagePaddingTop; 
@property (nonatomic,readonly) double feedHeroImagePaddingBottom; 
@property (nonatomic,readonly) double feedSecondaryImagePaddingBottom; 
@property (nonatomic,readonly) double feedInteritemSpacing;                                  //@synthesize feedInteritemSpacing=_feedInteritemSpacing - In the implementation block
@property (nonatomic,readonly) long long idiom;                                              //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,readonly) Class feedDataSourceManagerClass; 
@property (nonatomic,readonly) Class feedLayoutMetricsClass; 
@property (nonatomic,readonly) Class feedTransitionAnimationCoordinatorClass; 
@property (nonatomic,readonly) double feedHeroImageAspectRatio;                              //@synthesize feedHeroImageAspectRatio=_feedHeroImageAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowFavoritesBadge;                                //@synthesize alwaysShowFavoritesBadge=_alwaysShowFavoritesBadge - In the implementation block
@property (nonatomic,readonly) CGSize favoriteBadgeSize;                                     //@synthesize favoriteBadgeSize=_favoriteBadgeSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets favoriteBadgeInset;                              //@synthesize favoriteBadgeInset=_favoriteBadgeInset - In the implementation block
@property (nonatomic,readonly) CGPoint highlightedSectionHeaderOffset;                       //@synthesize highlightedSectionHeaderOffset=_highlightedSectionHeaderOffset - In the implementation block
@property (nonatomic,readonly) BOOL shouldRemoveHighlightOnScroll;                           //@synthesize shouldRemoveHighlightOnScroll=_shouldRemoveHighlightOnScroll - In the implementation block
@property (nonatomic,readonly) double bottomShadowPadding; 
@property (nonatomic,readonly) double feedAdditionalContentThreshold;                        //@synthesize feedAdditionalContentThreshold=_feedAdditionalContentThreshold - In the implementation block
@property (nonatomic,readonly) UIFont * tabTitleFont;                                        //@synthesize tabTitleFont=_tabTitleFont - In the implementation block
@property (nonatomic,readonly) UIColor * tabTitleTextColor;                                  //@synthesize tabTitleTextColor=_tabTitleTextColor - In the implementation block
@property (nonatomic,readonly) double tabTitleBaselineOffset;                                //@synthesize tabTitleBaselineOffset=_tabTitleBaselineOffset - In the implementation block
@property (nonatomic,readonly) double tabTopContentPadding;                                  //@synthesize tabTopContentPadding=_tabTopContentPadding - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                                        //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) CGPoint borderOffset;                                         //@synthesize borderOffset=_borderOffset - In the implementation block
@property (nonatomic,readonly) double borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,readonly) double orbPreviewSize;                                        //@synthesize orbPreviewSize=_orbPreviewSize - In the implementation block
-(unsigned long long)_style;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(UIColor *)selectionHighlightColor;
-(UIColor *)borderColor;
-(long long)feedAxis;
-(double)_displayScale;
-(UIColor *)feedBackgroundColor;
-(long long)idiom;
-(Class)feedDataSourceManagerClass;
-(Class)feedLayoutMetricsClass;
-(Class)feedTransitionAnimationCoordinatorClass;
-(id)newLayoutGeneratorWithMetrics:(id)arg1 ;
-(long long)feedSectionLayoutAxis;
-(double)feedHeroImagePaddingTop;
-(double)feedHeroImagePaddingBottom;
-(double)bottomShadowPadding;
-(double)feedSecondaryImagePaddingBottom;
-(id)feedCategoryLabelTextColor;
-(double)_feedInteritemSpacingForReferenceSize:(CGSize)arg1 ;
-(void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg1 ;
-(long long)feedHeroPosition;
-(unsigned long long)feedMemoriesPerRow;
-(UIEdgeInsets)feedEntryEdgeInsets;
-(BOOL)feedShouldAllowHeaders;
-(double)feedEntryHeaderHeight;
-(double)firstFeedEntryHeaderHeight;
-(double)distanceBetweenHeaderBaselineAndImageTop;
-(double)feedInteritemSpacing;
-(double)feedHeroImageAspectRatio;
-(BOOL)alwaysShowFavoritesBadge;
-(CGSize)favoriteBadgeSize;
-(UIEdgeInsets)favoriteBadgeInset;
-(CGPoint)highlightedSectionHeaderOffset;
-(BOOL)shouldRemoveHighlightOnScroll;
-(double)feedAdditionalContentThreshold;
-(UIFont *)tabTitleFont;
-(UIColor *)tabTitleTextColor;
-(double)tabTitleBaselineOffset;
-(double)tabTopContentPadding;
-(CGPoint)borderOffset;
-(double)orbPreviewSize;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(double)borderWidth;
-(UIEdgeInsets)layoutInsets;
-(double)_columnWidth;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
@end

