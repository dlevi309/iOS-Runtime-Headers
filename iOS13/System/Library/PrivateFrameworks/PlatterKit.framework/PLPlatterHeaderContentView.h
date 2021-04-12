/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/BSUIDateLabelDelegate.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol BSUIDateLabel;
@class UILabel, NSArray, UIButton, PLPlatterHeaderContentViewLayoutManager, MTVisualStylingProvider, NSString, NSDate, NSTimeZone, UIView, BSUIFontProvider, UIFont;

@interface PLPlatterHeaderContentView : UIView <BSUIDateLabelDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {

	UILabel*<BSUIDateLabel> _dateLabel;
	NSArray* _iconButtons;
	UIButton* _utilityButton;
	PLPlatterHeaderContentViewLayoutManager* _layoutManager;
	BOOL _hasUpdatedContent;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _dateAllDay;
	BOOL _heedsHorizontalLayoutMargins;
	BOOL _usesLargeTextLayout;
	NSString* _preferredContentSizeCategory;
	NSDate* _date;
	NSTimeZone* _timeZone;
	long long _dateFormatStyle;
	UIView* _utilityView;
	BSUIFontProvider* _fontProvider;
	UILabel* _titleLabel;
	double _utilityButtonHorizontalLayoutReference;

}

@property (getter=_titleLabel,nonatomic,readonly) UILabel * titleLabel; 
@property (getter=_dateLabel,nonatomic,readonly) UILabel * dateLabel; 
@property (getter=_titleLabelFont,nonatomic,readonly) UIFont * titleLabelFont; 
@property (getter=_dateLabelFont,nonatomic,readonly) UIFont * dateLabelFont; 
@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider; 
@property (assign,setter=_setUsesLargeTextLayout:,getter=_usesLargeTextLayout,nonatomic) BOOL usesLargeTextLayout; 
@property (assign,setter=_setUtilityButtonHorizontalLayoutReference:,getter=_utilityButtonHorizontalLayoutReference,nonatomic) double utilityButtonHorizontalLayoutReference; 
@property (getter=_iconDimension,nonatomic,readonly) double iconDimension; 
@property (getter=_iconLeadingPadding,nonatomic,readonly) double iconLeadingPadding; 
@property (getter=_iconTrailingPadding,nonatomic,readonly) double iconTrailingPadding; 
@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider;                                                                                //@synthesize fontProvider=_fontProvider - In the implementation block
@property (setter=_setTitleLabel:,getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;                                                                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,setter=_setUsesLargeTextLayout:,getter=_usesLargeTextLayout,nonatomic) BOOL usesLargeTextLayout;                                                                         //@synthesize usesLargeTextLayout=_usesLargeTextLayout - In the implementation block
@property (assign,setter=_setUtilityButtonHorizontalLayoutReference:,getter=_utilityButtonHorizontalLayoutReference,nonatomic) double utilityButtonHorizontalLayoutReference;              //@synthesize utilityButtonHorizontalLayoutReference=_utilityButtonHorizontalLayoutReference - In the implementation block
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date;                                                                                                                                                  //@synthesize date=_date - In the implementation block
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay;                                                                                                                          //@synthesize dateAllDay=_dateAllDay - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                                                                                                                          //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) long long dateFormatStyle;                                                                                                                                    //@synthesize dateFormatStyle=_dateFormatStyle - In the implementation block
@property (nonatomic,readonly) NSArray * iconButtons;                                                                                                                                      //@synthesize iconButtons=_iconButtons - In the implementation block
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (nonatomic,retain) UIView * utilityView;                                                                                                                                         //@synthesize utilityView=_utilityView - In the implementation block
@property (assign,nonatomic) BOOL heedsHorizontalLayoutMargins;                                                                                                                            //@synthesize heedsHorizontalLayoutMargins=_heedsHorizontalLayoutMargins - In the implementation block
@property (nonatomic,readonly) double contentBaseline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                                                                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
+(double)contentBaselineToBoundsBottomWithWidth:(double)arg1 scale:(double)arg2 ;
+(id)_titleLabelFontFromFontProvider:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)_layoutManager;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleLabel;
-(void)layoutMarginsDidChange;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_dateLabel;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(void)dateLabelDidChange:(id)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)_newTitleLabel;
-(id)_titleLabelFont;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setHeedsHorizontalLayoutMargins:(BOOL)arg1 ;
-(void)setUtilityView:(UIView *)arg1 ;
-(void)_layoutUtilityButtonWithScale:(double)arg1 ;
-(UIView *)utilityView;
-(id)_fontProvider;
-(double)_iconDimension;
-(double)_iconLeadingPadding;
-(id)_utilityButton;
-(BOOL)heedsHorizontalLayoutMargins;
-(double)contentBaseline;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)_setUtilityButtonHorizontalLayoutReference:(double)arg1 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)_recycleDateLabel;
-(BOOL)_usesLargeTextLayout;
-(double)_headerHeightForWidth:(double)arg1 ;
-(id)_newIconButton;
-(void)_configureIconButton:(id)arg1 withIcon:(id)arg2 ;
-(void)_configureIconButtonsForIcons:(id)arg1 ;
-(void)_updateTextAttributesForTitleLabel:(id)arg1 ;
-(id)_titleLabelPreferredFont;
-(id)_updateTitleAttributesForAttributedString:(id)arg1 ;
-(void)_configureTitleLabel:(id)arg1 ;
-(id)_lazyTitleLabel;
-(id)_attributedStringForTitle:(id)arg1 ;
-(double)_iconTrailingPadding;
-(id)_dateLabelPreferredFont;
-(void)_configureDateLabel;
-(void)_tearDownDateLabel;
-(void)_configureUtilityButtonIfNecessary;
-(void)_configureDateLabelIfNecessary;
-(void)_layoutIconButtonsWithScale:(double)arg1 ;
-(void)_layoutDateLabelWithScale:(double)arg1 ;
-(void)_layoutTitleLabelWithScale:(double)arg1 ;
-(void)_updateStylingForTitleLabel:(id)arg1 ;
-(void)_updateUtilityButtonVisualStyling;
-(void)_setUsesLargeTextLayout:(BOOL)arg1 ;
-(void)_updateTextAttributesForDateLabel;
-(void)_updateUtilityButtonFont;
-(id)_dateLabelFont;
-(id)visualStylingProvider;
-(void)setVisualStylingProvider:(id)arg1 ;
-(void)_setFontProvider:(id)arg1 ;
-(void)_setTitleLabel:(id)arg1 ;
-(double)_utilityButtonHorizontalLayoutReference;
-(void)_configureUtilityButton;
@end

