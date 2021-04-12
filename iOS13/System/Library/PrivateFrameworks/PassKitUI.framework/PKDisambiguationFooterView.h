/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {

	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIButton* _secondaryActionButton;
	double _topPadding;
	double _secondaryActionTopPadding;
	double _bottomPadding;

}

@property (nonatomic,retain,readonly) UILabel * descriptionLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIButton * secondaryActionButton; 
@property (assign,nonatomic) double topPadding;                                      //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double secondaryActionTopPadding;                       //@synthesize secondaryActionTopPadding=_secondaryActionTopPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                   //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)descriptionLabel;
-(double)bottomPadding;
-(double)topPadding;
-(UIButton *)actionButton;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(UIButton *)secondaryActionButton;
-(void)sizeToFitForTableView:(id)arg1 ;
-(double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(double)arg1 ;
-(double)secondaryActionTopPadding;
@end

