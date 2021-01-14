/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIViewController.h>

@protocol WFComponentNavigationContext;
@class WFMultipleValueEditorView;

@interface WFMultipleValueEditorViewController : UIViewController {

	WFMultipleValueEditorView* _editorView;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (nonatomic,retain) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) WFMultipleValueEditorView * editorView;                        //@synthesize editorView=_editorView - In the implementation block
+(Class)editorViewClass;
-(void)done;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(WFMultipleValueEditorView *)editorView;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
@end

