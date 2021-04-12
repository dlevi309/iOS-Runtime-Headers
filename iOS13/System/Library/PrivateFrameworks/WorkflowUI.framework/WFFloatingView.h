/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingView : UIView

@property (nonatomic,readonly) WFFloatingLayer * layer; 
@property (nonatomic,copy) WFGradient * gradient; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
+(Class)layerClass;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)applyConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2 ;
@end

