/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@protocol PXPhotosSectionHeaderViewDelegate;
@class UILabel, UIImageView, PXCuratedLibraryOverlayButton, UIVisualEffectView, UIView, NSString, UIImage, NSArray, NSDate, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface PXPhotosSectionHeaderView : UICollectionReusableView <PXGReusableView> {

	UILabel* _titleLabel;
	UILabel* _locationsLabel;
	UILabel* _separatorLabel;
	UILabel* _dateLabel;
	UIImageView* _disclosureIconView;
	PXCuratedLibraryOverlayButton* _actionButton;
	BOOL _highlightViewVisible;
	BOOL _inLayoutTransition;
	BOOL _performingBatchDateDependentUpdate;
	BOOL _dateDependentPropertiesDidChange;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _backgroundImageView;
	UIView* _highlightView;
	BOOL _useYearOnlyForDefaultTitle;
	BOOL _wantsBackground;
	BOOL _showsActionButton;
	BOOL _allowsPhotosDetailsInteraction;
	NSString* _backdropViewGroupName;
	id<PXPhotosSectionHeaderViewDelegate> _delegate;
	long long _style;
	unsigned long long _backgroundStyle;
	UIImage* _backgroundImage;
	double _backgroundImageOverhang;
	double _backgroundImageAlpha;
	long long _sectionIndex;
	NSString* _sectionTitle;
	NSArray* _sectionLocations;
	NSDate* _sectionStartDate;
	NSDate* _sectionEndDate;
	NSString* _actionButtonTitle;
	PXCuratedLibrarySectionHeaderLayoutSpec* _buttonSpec;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _highlightInsets;

}

@property (nonatomic,copy) id<NSCopying> userData; 
@property (assign,nonatomic) CGRect clippingRect; 
@property (assign,nonatomic,__weak) id<PXPhotosSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsBackground;                                               //@synthesize wantsBackground=_wantsBackground - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) double backgroundImageOverhang;                                     //@synthesize backgroundImageOverhang=_backgroundImageOverhang - In the implementation block
@property (assign,nonatomic) double backgroundImageAlpha;                                        //@synthesize backgroundImageAlpha=_backgroundImageAlpha - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                             //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets highlightInsets;                                       //@synthesize highlightInsets=_highlightInsets - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                              //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) NSString * synthesizedSectionTitle; 
@property (nonatomic,retain) NSArray * sectionLocations;                                         //@synthesize sectionLocations=_sectionLocations - In the implementation block
@property (nonatomic,readonly) NSDate * sectionStartDate;                                        //@synthesize sectionStartDate=_sectionStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * sectionEndDate;                                          //@synthesize sectionEndDate=_sectionEndDate - In the implementation block
@property (assign,nonatomic) BOOL showsActionButton;                                             //@synthesize showsActionButton=_showsActionButton - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle;                                         //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * buttonSpec;               //@synthesize buttonSpec=_buttonSpec - In the implementation block
@property (assign,nonatomic) BOOL allowsPhotosDetailsInteraction;                                //@synthesize allowsPhotosDetailsInteraction=_allowsPhotosDetailsInteraction - In the implementation block
@property (assign,nonatomic) BOOL useYearOnlyForDefaultTitle; 
@property (nonatomic,copy) NSString * backdropViewGroupName;                                     //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (nonatomic,readonly) double baselineToBottomSpacing; 
+(BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg1 ;
+(BOOL)_hasAccessibilityLargeText;
+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg1 ;
-(void)becomeReusable;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)buttonSpec;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(id<PXPhotosSectionHeaderViewDelegate>)delegate;
-(unsigned long long)backgroundStyle;
-(UIEdgeInsets)contentInsets;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setButtonSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setBackgroundImageOverhang:(double)arg1 ;
-(void)setBackgroundImageAlpha:(double)arg1 ;
-(void)_updateDateLabel;
-(void)setWantsBackground:(BOOL)arg1 ;
-(void)setWantsBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)synthesizedSectionTitle;
-(BOOL)_usingDateAsTitle;
-(BOOL)useYearOnlyForDefaultTitle;
-(double)baselineToBottomSpacing;
-(void)_updateLabelsForTextStyle;
-(void)_handleSignificantDateChange:(id)arg1 ;
-(void)_hideHighlightView;
-(void)_updateDateDependentLabels;
-(void)_updateDisclosureIcon;
-(void)_updateLocationsLabelVisibility;
-(id)_dateRangeCompactFormatter;
-(id)_dateRangeLongFormatter;
-(id)_dateRangeYearFormatter;
-(void)_dateRangeFormatterChanged:(id)arg1 ;
-(void)_layoutSubviewsForCurentStyle;
-(BOOL)allowLocationTapForTouch:(id)arg1 ;
-(void)_setHighlightViewVisible:(BOOL)arg1 ;
-(void)_updateHighlightView;
-(double)backgroundImageOverhang;
-(double)backgroundImageAlpha;
-(UIEdgeInsets)highlightInsets;
-(NSArray *)sectionLocations;
-(NSDate *)sectionStartDate;
-(NSDate *)sectionEndDate;
-(BOOL)showsActionButton;
-(BOOL)allowsPhotosDetailsInteraction;
-(id<NSCopying>)userData;
-(BOOL)wantsBackground;
-(void)setShowsActionButton:(BOOL)arg1 ;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(void)prepareForReuse;
-(void)setAllowsPhotosDetailsInteraction:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)didEndDisplaying;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleActionButton:(id)arg1 ;
-(void)setDelegate:(id<PXPhotosSectionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_updateActionButton;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_updateBackdropViewGroupName;
-(void)_updateTitleLabel;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(id<NSCopying>)arg1 ;
-(NSString *)backdropViewGroupName;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(UIImage *)backgroundImage;
-(void)setHighlightInsets:(UIEdgeInsets)arg1 ;
-(void)setSectionLocations:(NSArray *)arg1 ;
-(void)performBatchUpdateOfDateDependentPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)setSectionStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUseYearOnlyForDefaultTitle:(BOOL)arg1 ;
-(long long)style;
-(BOOL)_disableRasterizeInAnimations;
@end

