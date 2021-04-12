/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFComponentNavigationContext.h>

@class WFListEditorView, NSString, UIViewController;

@interface WFListEditorViewController : UIViewController <WFComponentNavigationContext> {

	WFListEditorView* _editorView;

}

@property (nonatomic,readonly) WFListEditorView * editorView;                                         //@synthesize editorView=_editorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController; 
+(Class)editorViewClass;
-(void)done;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIViewController *)componentHostingViewController;
-(WFListEditorView *)editorView;
@end

