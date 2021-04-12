/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFParameterEditorHostingCellContext.h>

@class UIColor, MTVisualStylingProvider;

@interface WFWidgetParameterEditorHostingCellContext : WFParameterEditorHostingCellContext {

	UIColor* _overridingBackgroundColor;
	MTVisualStylingProvider* _fillProvider;

}

@property (nonatomic,retain) UIColor * overridingBackgroundColor;                 //@synthesize overridingBackgroundColor=_overridingBackgroundColor - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillProvider;              //@synthesize fillProvider=_fillProvider - In the implementation block
-(void)setFillProvider:(MTVisualStylingProvider *)arg1 ;
-(UIColor *)overridingBackgroundColor;
-(void)setOverridingBackgroundColor:(UIColor *)arg1 ;
-(MTVisualStylingProvider *)fillProvider;
@end

