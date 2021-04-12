/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFWorkflowIconDrawer, UIColor;

@interface WFGlyphView : UIView {

	WFWorkflowIconDrawer* _iconDrawer;
	UIEdgeInsets _glyphInsets;

}

@property (nonatomic,readonly) WFWorkflowIconDrawer * iconDrawer;              //@synthesize iconDrawer=_iconDrawer - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter; 
@property (assign,nonatomic) UIEdgeInsets glyphInsets;                         //@synthesize glyphInsets=_glyphInsets - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(unsigned short)glyphCharacter;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
-(UIEdgeInsets)glyphInsets;
-(void)setGlyphInsets:(UIEdgeInsets)arg1 ;
-(WFWorkflowIconDrawer *)iconDrawer;
@end

