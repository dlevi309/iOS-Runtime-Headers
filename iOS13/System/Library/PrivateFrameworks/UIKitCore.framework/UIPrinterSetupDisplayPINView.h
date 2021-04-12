/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface UIPrinterSetupDisplayPINView : UIView {

	UILabel* _titleLabel;
	UIButton* _nextButton;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMessage:(id)arg1 showButton:(BOOL)arg2 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
@end

