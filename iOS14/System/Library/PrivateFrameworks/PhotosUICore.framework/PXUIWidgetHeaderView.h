/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXUIWidgetHeaderViewDelegate;
@class NSString, UIColor, UIFont, NSArray, UILabel, UIButton, UIVisualEffectView;

@interface PXUIWidgetHeaderView : UIView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX51 _needsUpdateFlags;
	SCD_Struct_PX59 _delegateRespondsTo;
	BOOL _allowUserInteractionWithSubtitle;
	BOOL _allowUserInteractionWithCaption;
	BOOL __hasContent;
	id<PXUIWidgetHeaderViewDelegate> _delegate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _caption;
	UIColor* _textColor;
	UIFont* _primaryFont;
	UIFont* _secondaryFont;
	long long _layoutStyle;
	double _minimumDistanceBetweenTopAndFirstBaseline;
	double _distanceBetweenTitleBaselineAndSubtitleBaseline;
	double _horizontalSpacingBetweenTitleAndSubtitle;
	double _minimumDistanceBetweenLastBaselineAndBottom;
	NSArray* __constraints;
	double __currentHeight;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	UIButton* __subtitleButton;
	UILabel* __captionLabel;
	UIButton* __captionButton;
	UIVisualEffectView* __visualEffectView;
	UIEdgeInsets _contentInsets;

}

@property (assign,setter=_setHasContent:,nonatomic) BOOL _hasContent;                             //@synthesize _hasContent=__hasContent - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * _constraints;                        //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setCurrentHeight:,nonatomic) double _currentHeight;                     //@synthesize _currentHeight=__currentHeight - In the implementation block
@property (nonatomic,readonly) UILabel * _titleLabel;                                             //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _subtitleLabel;                                          //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _subtitleButton;                                        //@synthesize _subtitleButton=__subtitleButton - In the implementation block
@property (nonatomic,readonly) UILabel * _captionLabel;                                           //@synthesize _captionLabel=__captionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _captionButton;                                         //@synthesize _captionButton=__captionButton - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * _visualEffectView;                            //@synthesize _visualEffectView=__visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIWidgetHeaderViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * caption;                                                    //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * primaryFont;                                                //@synthesize primaryFont=_primaryFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryFont;                                              //@synthesize secondaryFont=_secondaryFont - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithSubtitle;                               //@synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithCaption;                                //@synthesize allowUserInteractionWithCaption=_allowUserInteractionWithCaption - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                               //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;                    //@synthesize minimumDistanceBetweenTopAndFirstBaseline=_minimumDistanceBetweenTopAndFirstBaseline - In the implementation block
@property (assign,nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;              //@synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline - In the implementation block
@property (assign,nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;                     //@synthesize horizontalSpacingBetweenTitleAndSubtitle=_horizontalSpacingBetweenTitleAndSubtitle - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;                  //@synthesize minimumDistanceBetweenLastBaselineAndBottom=_minimumDistanceBetweenLastBaselineAndBottom - In the implementation block
-(void)_setConstraints:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(BOOL)_hasContent;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(UIColor *)textColor;
-(void)setAllowUserInteractionWithSubtitle:(BOOL)arg1 ;
-(void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1 ;
-(id<PXUIWidgetHeaderViewDelegate>)delegate;
-(void)_setHasContent:(BOOL)arg1 ;
-(void)_invalidateHasContent;
-(void)_updateHasContentIfNeeded;
-(UIEdgeInsets)contentInsets;
-(long long)layoutStyle;
-(NSString *)subtitle;
-(void)_invalidateTitle;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)_captionLabel;
-(void)_updateIfNeeded;
-(UIFont *)primaryFont;
-(UIFont *)secondaryFont;
-(UILabel *)_subtitleLabel;
-(void)_invalidateSubtitle;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setPrimaryFont:(UIFont *)arg1 ;
-(void)setSecondaryFont:(UIFont *)arg1 ;
-(void)setDelegate:(id<PXUIWidgetHeaderViewDelegate>)arg1 ;
-(double)horizontalSpacingBetweenTitleAndSubtitle;
-(void)setHorizontalSpacingBetweenTitleAndSubtitle:(double)arg1 ;
-(void)layoutSubviews;
-(NSArray *)_constraints;
-(BOOL)_hasSubtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAllowUserInteractionWithCaption:(BOOL)arg1 ;
-(void)setMinimumDistanceBetweenTopAndFirstBaseline:(double)arg1 ;
-(void)setMinimumDistanceBetweenLastBaselineAndBottom:(double)arg1 ;
-(id)_visualEffectViewCreateIfNeeded:(BOOL)arg1 ;
-(id)_titleLabelCreateIfNeeded:(BOOL)arg1 ;
-(id)_subtitleLabelCreateIfNeeded:(BOOL)arg1 ;
-(id)_subtitleButtonCreateIfNeeded:(BOOL)arg1 ;
-(id)_captionLabelCreateIfNeeded:(BOOL)arg1 ;
-(id)_captionButtonCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)_canComposeTitleWithSubtitle;
-(void)_handleSubtitleButton:(id)arg1 ;
-(void)_handleCaptionButton:(id)arg1 ;
-(void)_updateSubtitleIfNeeded;
-(void)_invalidateCaption;
-(void)_updateCaptionIfNeeded;
-(BOOL)allowUserInteractionWithCaption;
-(double)minimumDistanceBetweenTopAndFirstBaseline;
-(double)minimumDistanceBetweenLastBaselineAndBottom;
-(double)_currentHeight;
-(void)_setCurrentHeight:(double)arg1 ;
-(UIButton *)_subtitleButton;
-(UIButton *)_captionButton;
-(BOOL)_hasAccessibilityLargeText;
-(BOOL)_needsUpdate;
-(UIVisualEffectView *)_visualEffectView;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_updateTitleIfNeeded;
-(UILabel *)_titleLabel;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(double)distanceBetweenTitleBaselineAndSubtitleBaseline;
-(NSString *)title;
-(BOOL)allowUserInteractionWithSubtitle;
@end

