/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)nextButton;
-(void)setMessage:(id)arg1 showButton:(BOOL)arg2 ;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
@end

