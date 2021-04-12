/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingButton : UIButton

@property (nonatomic,readonly) WFFloatingLayer * layer; 
@property (nonatomic,copy) WFGradient * gradient; 
+(Class)layerClass;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)applyConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2 ;
@end

