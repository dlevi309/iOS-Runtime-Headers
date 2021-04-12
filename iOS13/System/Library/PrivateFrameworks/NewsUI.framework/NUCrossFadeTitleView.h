/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NUTitleViewUpdate *)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(NUCrossFadeViewAnimator *)animator;
-(CGRect)visibleFrame;
-(UIImageView *)titleImageView;
-(void)setUpdate:(NUTitleViewUpdate *)arg1 ;
-(id)initWithStyler:(id)arg1 ;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(id<NUTitleViewStyler>)styler;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(NUTextAndGlyphView *)textAndGlyphView;
-(unsigned long long)displayValueType;
-(id)viewForValueType:(unsigned long long)arg1 ;
-(void)setDisplayValueType:(unsigned long long)arg1 ;
-(id)applyStylesToValueFromTitleViewUpdate:(id)arg1 ;
-(void)updateTitleViewWithUpdate:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(unsigned long long)arg2 ;
-(id)_applyStylesToText:(id)arg1 styleType:(unsigned long long)arg2 ;
@end

