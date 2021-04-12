/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

