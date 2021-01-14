/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFIconView.h>

@class WFWorkflowIconDrawer;

@interface WFIconComposePreviewView : WFIconView {

	WFWorkflowIconDrawer* _iconDrawer;

}

@property (nonatomic,retain) WFWorkflowIconDrawer * iconDrawer;              //@synthesize iconDrawer=_iconDrawer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)redrawIcon;
-(WFWorkflowIconDrawer *)iconDrawer;
-(void)setIconDrawer:(WFWorkflowIconDrawer *)arg1 ;
@end

