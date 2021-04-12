/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIButton.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingButton : UIButton

@property (nonatomic,readonly) WFFloatingLayer * layer; 
@property (nonatomic,copy) WFGradient * gradient; 
+(Class)layerClass;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)applyConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2 ;
@end

