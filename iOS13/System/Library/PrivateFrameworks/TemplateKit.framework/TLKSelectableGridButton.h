/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKLabel, TLKStackView;

@interface TLKSelectableGridButton : UIButton {

	BOOL _customHighlight;
	TLKLabel* _topLabel;
	TLKLabel* _bottomLabel;
	TLKStackView* _stackView;

}

@property (nonatomic,retain) TLKLabel * topLabel;                   //@synthesize topLabel=_topLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * bottomLabel;                //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (nonatomic,retain) TLKStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) BOOL customHighlight; 
+(id)selectableGridButton;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(TLKStackView *)stackView;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setStackView:(TLKStackView *)arg1 ;
-(TLKLabel *)topLabel;
-(void)setTopLabel:(TLKLabel *)arg1 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setBottomLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)bottomLabel;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setCustomHighlight:(BOOL)arg1 ;
-(BOOL)customHighlight;
@end

