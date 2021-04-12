/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                                                                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(id)_titleLabelFontFromFontProvider:(id)arg1 ;
+(double)contentBaselineToBoundsBottomWithWidth:(double)arg1 scale:(double)arg2 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)visualStylingProvider;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)_dateLabelFont;
-(NSTimeZone *)timeZone;
-(void)setVisualStylingProvider:(id)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(id)_fontProvider;
-(NSArray *)requiredVisualStyleCategories;
-(void)layoutMarginsDidChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_utilityButton;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(NSArray *)icons;
-(void)setIcons:(NSArray *)arg1 ;
-(id)_newTitleLabel;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_layoutUtilityButtonWithScale:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)_layoutManager;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_titleLabelFont;
-(long long)dateFormatStyle;
-(id)_dateLabel;
-(NSDate *)date;
-(id)_titleLabel;
-(double)contentBaseline;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)_setTitleLabel:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;
-(void)_setFontProvider:(id)arg1 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(double)_iconDimension;
-(double)_iconLeadingPadding;
-(BOOL)heedsHorizontalLayoutMargins;
-(UIView *)utilityView;
-(void)_setUtilityButtonHorizontalLayoutReference:(double)arg1 ;
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
-(void)setUtilityView:(UIView *)arg1 ;
-(void)setHeedsHorizontalLayoutMargins:(BOOL)arg1 ;
-(double)_utilityButtonHorizontalLayoutReference;
-(void)_configureUtilityButton;
@end

