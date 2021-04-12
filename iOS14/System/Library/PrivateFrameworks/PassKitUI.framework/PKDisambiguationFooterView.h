/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)topPadding;
-(double)bottomPadding;
-(void)layoutSubviews;
-(UIButton *)actionButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(UIButton *)secondaryActionButton;
-(void)setBottomPadding:(double)arg1 ;
-(void)sizeToFitForTableView:(id)arg1 ;
-(double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(double)arg1 ;
-(double)secondaryActionTopPadding;
-(UILabel *)descriptionLabel;
-(void)dealloc;
@end

