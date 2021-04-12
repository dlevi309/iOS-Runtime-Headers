/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface WFColoredDotButton : UIButton {

	UIColor* _dotColor;
	UIView* _dotView;

}

@property (assign,nonatomic,__weak) UIView * dotView;              //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,copy) UIColor * dotColor;                     //@synthesize dotColor=_dotColor - In the implementation block
-(void)layoutSubviews;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setDotView:(UIView *)arg1 ;
-(UIView *)dotView;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
@end

