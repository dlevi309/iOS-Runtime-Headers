/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingView : UIView

@property (nonatomic,readonly) WFFloatingLayer * layer; 
@property (nonatomic,copy) WFGradient * gradient; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
+(Class)layerClass;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isPressed;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)applyConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2 ;
@end

