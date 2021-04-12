/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIView;

@interface _NCContentUnavailableViewWithButton : UIView {

	UILabel* _titleLabel;
	UIView* _backgroundView;
	/*^block*/id _buttonHandler;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) id buttonHandler;                       //@synthesize buttonHandler=_buttonHandler - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIView *)backgroundView;
-(void)didMoveToWindow;
-(void)_updateVisualStyling;
-(void)_configureBackgroundView;
-(void)_buttonPressed:(id)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
-(void)_configureTitleLabelWithTitle:(id)arg1 ;
-(void)setButtonHandler:(id)arg1 ;
-(id)buttonHandler;
@end

