/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class UIView, UIImageView, NSMutableDictionary, NSStringDrawingContext, MTVisualStylingProvider, UILabel, NSString, BSUIFontProvider, BSUIEmojiLabelView, UIImage, NSArray;

@interface PLSummaryContentView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {

	UIEdgeInsets _contentInsets;
	UIView* _contentView;
	UIImageView* _thumbnailImageView;
	NSMutableDictionary* _widthToFontToStringToMeasuredNumLines;
	NSStringDrawingContext* _drawingContext;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _adjustsFontForContentSizeCategory;
	UILabel* _secondaryLabel;
	NSString* _preferredContentSizeCategory;
	UIView* _accessoryView;
	BSUIFontProvider* _fontProvider;
	UILabel* _primaryLabel;
	UILabel* _primarySubtitleLabel;
	BSUIEmojiLabelView* _summaryLabel;

}

@property (setter=_setPrimaryLabel:,getter=_primaryLabel,nonatomic,retain) UILabel * primaryLabel;                                      //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (setter=_setPrimarySubtitleLabel:,getter=_primarySubtitleLabel,nonatomic,retain) UILabel * primarySubtitleLabel;              //@synthesize primarySubtitleLabel=_primarySubtitleLabel - In the implementation block
@property (getter=_secondaryLabel,nonatomic,readonly) UILabel * secondaryLabel;                                                         //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (setter=_setSummaryLabel:,getter=_summaryLabel,nonatomic,retain) BSUIEmojiLabelView * summaryLabel;                           //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView;                                                                                    //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
@property (nonatomic,retain) BSUIFontProvider * fontProvider;                                                                           //@synthesize fontProvider=_fontProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                    //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                                     //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
-(id)init;
-(NSString *)debugDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)_contentInsets;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(id)_primaryLabel;
-(id)_secondaryLabel;
-(id)_summaryLabel;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(NSString *)summaryText;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_fontProvider;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)setFontProvider:(BSUIFontProvider *)arg1 ;
-(UIEdgeInsets)_contentInsetsForShortLook;
-(id)_lazyPrimaryLabel;
-(id)_lazySecondaryTextSupportingView;
-(id)_lazySummaryLabel;
-(unsigned long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3 ;
-(double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(id)_lazyPrimarySubtitleLabel;
-(double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
-(unsigned long long)_secondaryTextNumberOfLines;
-(double)_secondaryTextBaselineOffsetForCurrentStyle;
-(double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1 ;
-(double)_summaryTextBaselineOffsetForCurrentStyle;
-(double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(void)_invalidateNumberOfLinesCache;
-(unsigned long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(CGSize)arg3 ;
-(unsigned long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1 ;
-(unsigned long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1 ;
-(unsigned long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1 ;
-(unsigned long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1 ;
-(unsigned long long)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(CGRect)_primaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_primarySubtitleLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_secondaryTextViewBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_summaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 ;
-(void)_updateTextAttributesForLabel:(id)arg1 ;
-(void)_updateTextAttributesForPrimaryLabel:(id)arg1 ;
-(id)_newPrimaryLabel;
-(void)_updateStyleForPrimaryLabel:(id)arg1 ;
-(void)_clearCacheForFont:(id)arg1 ;
-(id)_lazySecondaryLabel;
-(void)_setSecondaryTextNumberOfLines:(unsigned long long)arg1 ;
-(void)_configureTextSupportingView:(id)arg1 ;
-(void)_updateFontForSecondaryTextSupportingView:(id)arg1 ;
-(id)_newSecondaryLabel;
-(void)_updateStyleForSecondaryTextSupportingView:(id)arg1 ;
-(id)_secondaryTextSupportingView;
-(void)_updateTextAttributesForSummaryLabel:(id)arg1 ;
-(id)_newSummaryLabel;
-(void)_updateStyleForSummaryLabel:(id)arg1 ;
-(id)_lazyThumbnailImageView;
-(CGRect)_frameForThumbnailInRect:(CGRect)arg1 ;
-(UIEdgeInsets)_contentInsetsForLongLook;
-(id)_primarySubtitleLabel;
-(BSUIFontProvider *)fontProvider;
-(void)_setPrimaryLabel:(id)arg1 ;
-(void)_setPrimarySubtitleLabel:(id)arg1 ;
-(void)_setSummaryLabel:(id)arg1 ;
@end

