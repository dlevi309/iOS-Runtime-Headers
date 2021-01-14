/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUTitleViewStyler;
@class UIImageView, UILabel, NUTextAndGlyphView, NUCrossFadeViewAnimator, NUTitleViewUpdate;

@interface NUCrossFadeTitleView : UIView {

	id<NUTitleViewStyler> _styler;
	UIImageView* _titleImageView;
	UILabel* _titleLabel;
	NUTextAndGlyphView* _textAndGlyphView;
	unsigned long long _displayValueType;
	NUCrossFadeViewAnimator* _animator;
	NUTitleViewUpdate* _update;

}

@property (nonatomic,readonly) UIImageView * titleImageView;                       //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NUTextAndGlyphView * textAndGlyphView;              //@synthesize textAndGlyphView=_textAndGlyphView - In the implementation block
@property (assign,nonatomic) unsigned long long displayValueType;                  //@synthesize displayValueType=_displayValueType - In the implementation block
@property (nonatomic,readonly) NUCrossFadeViewAnimator * animator;                 //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) NUTitleViewUpdate * update;                           //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) id<NUTitleViewStyler> styler;                         //@synthesize styler=_styler - In the implementation block
@property (nonatomic,readonly) CGRect visibleFrame; 
-(UILabel *)titleLabel;
-(id<NUTitleViewStyler>)styler;
-(CGRect)visibleFrame;
-(NUCrossFadeViewAnimator *)animator;
-(id)_applyStylesToText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(id)initWithStyler:(id)arg1 ;
-(void)setUpdate:(NUTitleViewUpdate *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForValueType:(unsigned long long)arg1 ;
-(id)applyStylesToValueFromTitleViewUpdate:(id)arg1 ;
-(void)setDisplayValueType:(unsigned long long)arg1 ;
-(NUTitleViewUpdate *)update;
-(void)layoutSubviews;
-(id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(unsigned long long)arg2 ;
-(NUTextAndGlyphView *)textAndGlyphView;
-(id)initWithCoder:(id)arg1 ;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(unsigned long long)displayValueType;
-(void)updateTitleViewWithUpdate:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIImageView *)titleImageView;
@end

