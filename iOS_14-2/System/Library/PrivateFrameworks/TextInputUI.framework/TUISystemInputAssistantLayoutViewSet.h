/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(UIView *)centerView;
-(TUIAssistantButtonBarView *)rightButtonBar;
@end

