/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class NSLayoutConstraint, UIButton;

@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView {

	NSLayoutConstraint* _buttonLeadingConstraint;
	/*^block*/id _buttonTapHandler;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;                                         //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonLeadingConstraint;              //@synthesize buttonLeadingConstraint=_buttonLeadingConstraint - In the implementation block
@property (nonatomic,copy) id buttonTapHandler;                                         //@synthesize buttonTapHandler=_buttonTapHandler - In the implementation block
-(UIButton *)button;
-(void)buttonTapped:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)awakeFromNib;
-(id)buttonTapHandler;
-(void)setButtonTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSLayoutConstraint *)buttonLeadingConstraint;
-(void)setButtonLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonTapHandler:(id)arg1 ;
@end

