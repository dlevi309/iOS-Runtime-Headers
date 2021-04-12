/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIView *)backgroundView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didMoveToWindow;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_buttonPressed:(id)arg1 ;
-(void)_configureBackgroundView;
-(id)initWithTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
-(void)_updateVisualStyling;
-(void)_configureTitleLabelWithTitle:(id)arg1 ;
-(void)setButtonHandler:(id)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(id)buttonHandler;
@end

