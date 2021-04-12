/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@class UIButton;

@interface BFFLinkHandler : NSObject {

	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(UIButton *)button;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
@end

