/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(TLKStackView *)stackView;
-(void)setCustomHighlight:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
-(BOOL)customHighlight;
-(void)layoutSubviews;
-(TLKLabel *)bottomLabel;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTopLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)topLabel;
-(void)setBottomLabel:(TLKLabel *)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
@end

