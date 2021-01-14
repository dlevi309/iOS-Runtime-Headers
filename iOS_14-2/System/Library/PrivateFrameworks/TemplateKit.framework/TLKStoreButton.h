/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKRichText, TLKLabel, UIView, TLKProminenceView, UIFont, NSString;

@interface TLKStoreButton : UIButton {

	BOOL _useCompactMode;
	BOOL _isEmphasized;
	TLKRichText* _richTitle;
	TLKLabel* _label;
	UIView* _backgroundView;
	TLKProminenceView* _highlightView;

}

@property (retain) TLKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) TLKProminenceView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
@property (assign) BOOL isEmphasized;                              //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL useCompactMode;                  //@synthesize useCompactMode=_useCompactMode - In the implementation block
@property (nonatomic,copy) TLKRichText * richTitle;                //@synthesize richTitle=_richTitle - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,copy) NSString * title; 
-(CGSize)intrinsicContentSize;
-(void)setHighlightView:(TLKProminenceView *)arg1 ;
-(id)init;
-(TLKProminenceView *)highlightView;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIView *)backgroundView;
-(void)setTitle:(NSString *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setRichTitle:(TLKRichText *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(TLKRichText *)richTitle;
-(BOOL)isEmphasized;
-(void)setLabel:(TLKLabel *)arg1 ;
-(BOOL)useCompactMode;
-(void)setCornerRadius:(double)arg1 ;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(TLKLabel *)label;
-(NSString *)title;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
@end

