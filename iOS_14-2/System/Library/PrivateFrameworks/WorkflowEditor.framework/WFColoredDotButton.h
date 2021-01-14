/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFDefaultStyleButton.h>

@class UIColor, UIView;

@interface WFColoredDotButton : WFDefaultStyleButton {

	UIColor* _dotColor;
	UIView* _dotView;

}

@property (assign,nonatomic,__weak) UIView * dotView;              //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,copy) UIColor * dotColor;                     //@synthesize dotColor=_dotColor - In the implementation block
-(UIView *)dotView;
-(void)layoutSubviews;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setDotView:(UIView *)arg1 ;
@end

