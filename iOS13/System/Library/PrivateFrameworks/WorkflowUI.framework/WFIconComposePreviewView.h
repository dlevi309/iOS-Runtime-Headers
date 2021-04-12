/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFWorkflowIconDrawer;

@interface WFIconComposePreviewView : UIView {

	WFWorkflowIconDrawer* _iconDrawer;

}

@property (nonatomic,retain) WFWorkflowIconDrawer * iconDrawer;              //@synthesize iconDrawer=_iconDrawer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(WFWorkflowIconDrawer *)iconDrawer;
-(void)setIconDrawer:(WFWorkflowIconDrawer *)arg1 ;
@end

