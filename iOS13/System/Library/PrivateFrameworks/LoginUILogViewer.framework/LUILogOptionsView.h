/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIButton;

@interface LUILogOptionsView : UIView {

	UIStackView* _buttonStackView;
	UIButton* _tenMinutesLogButton;
	UIButton* _halfHourButton;
	UIButton* _hourButton;
	UIButton* _lastDayButton;
	UIButton* _streamButton;

}

@property (nonatomic,retain) UIStackView * buttonStackView;               //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (nonatomic,retain) UIButton * tenMinutesLogButton;              //@synthesize tenMinutesLogButton=_tenMinutesLogButton - In the implementation block
@property (nonatomic,retain) UIButton * halfHourButton;                   //@synthesize halfHourButton=_halfHourButton - In the implementation block
@property (nonatomic,retain) UIButton * hourButton;                       //@synthesize hourButton=_hourButton - In the implementation block
@property (nonatomic,retain) UIButton * lastDayButton;                    //@synthesize lastDayButton=_lastDayButton - In the implementation block
@property (nonatomic,retain) UIButton * streamButton;                     //@synthesize streamButton=_streamButton - In the implementation block
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(id)_createButtonStackView;
-(id)_createButtonWithTitle:(id)arg1 ;
-(UIButton *)tenMinutesLogButton;
-(void)setTenMinutesLogButton:(UIButton *)arg1 ;
-(UIButton *)halfHourButton;
-(void)setHalfHourButton:(UIButton *)arg1 ;
-(UIButton *)hourButton;
-(void)setHourButton:(UIButton *)arg1 ;
-(UIButton *)lastDayButton;
-(void)setLastDayButton:(UIButton *)arg1 ;
-(UIButton *)streamButton;
-(void)setStreamButton:(UIButton *)arg1 ;
@end

