/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKLabel, UIView, TLKProminenceView, NSString;

@interface TLKStoreButton : UIButton {

	BOOL _isEmphasized;
	TLKLabel* _label;
	UIView* _backgroundView;
	TLKProminenceView* _highlightView;

}

@property (retain) TLKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) TLKProminenceView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
@property (assign) BOOL isEmphasized;                              //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(TLKProminenceView *)highlightView;
-(void)didMoveToWindow;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setHighlightView:(TLKProminenceView *)arg1 ;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
@end

