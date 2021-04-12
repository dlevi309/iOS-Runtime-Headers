/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIViewController.h>

@protocol WFComponentNavigationContext;
@class WFListEditorView;

@interface WFListEditorViewController : UIViewController {

	WFListEditorView* _editorView;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (nonatomic,retain) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) WFListEditorView * editorView;                                 //@synthesize editorView=_editorView - In the implementation block
+(Class)editorViewClass;
-(void)done;
-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(WFListEditorView *)editorView;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
@end

