/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@class TUIAssistantButtonBarView, UIView;

@interface TUISystemInputAssistantLayoutViewSet : NSObject {

	TUIAssistantButtonBarView* _leftButtonBar;
	TUIAssistantButtonBarView* _rightButtonBar;
	TUIAssistantButtonBarView* _unifiedButtonBar;
	UIView* _centerView;

}

@property (nonatomic,retain) TUIAssistantButtonBarView * leftButtonBar;                 //@synthesize leftButtonBar=_leftButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * rightButtonBar;                //@synthesize rightButtonBar=_rightButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * unifiedButtonBar;              //@synthesize unifiedButtonBar=_unifiedButtonBar - In the implementation block
@property (nonatomic,retain) UIView * centerView;                                       //@synthesize centerView=_centerView - In the implementation block
-(void)setCenterView:(UIView *)arg1 ;
-(UIView *)centerView;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)rightButtonBar;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
@end

