/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class UIInterfaceAction, WFDialogButton;

@interface WFCompactDialogAction : NSObject {

	UIInterfaceAction* _interfaceAction;
	WFDialogButton* _dialogButton;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) WFDialogButton * dialogButton;                    //@synthesize dialogButton=_dialogButton - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) UIInterfaceAction * interfaceAction;              //@synthesize interfaceAction=_interfaceAction - In the implementation block
+(id)actionForButton:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)invokeHandler;
-(id)handler;
-(UIInterfaceAction *)interfaceAction;
-(WFDialogButton *)dialogButton;
@end

