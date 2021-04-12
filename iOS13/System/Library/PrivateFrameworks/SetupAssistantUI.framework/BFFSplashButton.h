/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@class UIButton;

@interface BFFSplashButton : NSObject {

	UIButton* _button;
	long long _style;
	/*^block*/id _action;

}

@property (retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign) long long style;                //@synthesize style=_style - In the implementation block
@property (copy) id action;                        //@synthesize action=_action - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)action;
-(UIButton *)button;
-(void)setAction:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
@end

