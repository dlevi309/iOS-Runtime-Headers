/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@class UIButton;

@interface BFFLinkHandler : NSObject {

	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(UIButton *)button;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(id)handler;
@end

