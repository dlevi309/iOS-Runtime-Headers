/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFIconView.h>

@class WFWorkflowIconDrawer, UIColor;

@interface WFGlyphView : WFIconView {

	BOOL _outline;
	WFWorkflowIconDrawer* _iconDrawer;
	UIEdgeInsets _glyphInsets;

}

@property (nonatomic,readonly) WFWorkflowIconDrawer * iconDrawer;              //@synthesize iconDrawer=_iconDrawer - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter; 
@property (assign,nonatomic) UIEdgeInsets glyphInsets;                         //@synthesize glyphInsets=_glyphInsets - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor; 
@property (assign,nonatomic) BOOL outline;                                     //@synthesize outline=_outline - In the implementation block
-(BOOL)outline;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned short)glyphCharacter;
-(void)setOutline:(BOOL)arg1 ;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
-(void)redrawIcon;
-(UIEdgeInsets)glyphInsets;
-(void)setGlyphInsets:(UIEdgeInsets)arg1 ;
-(WFWorkflowIconDrawer *)iconDrawer;
@end

