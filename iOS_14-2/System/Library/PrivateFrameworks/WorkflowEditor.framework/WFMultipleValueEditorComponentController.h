/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFMultipleValueEditorViewDelegate.h>

@class WFMultipleValueEditorView, WFMultipleValueEditingContext, NSString;

@interface WFMultipleValueEditorComponentController : CKStatefulViewComponentController <WFMultipleValueEditorViewDelegate> {

	WFMultipleValueEditorView* _viewForSizing;
	WFMultipleValueEditingContext* _editingContext;

}

@property (nonatomic,retain) WFMultipleValueEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(WFMultipleValueEditingContext *)editingContext;
-(void)setEditingContext:(WFMultipleValueEditingContext *)arg1 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)componentTreeWillAppear;
-(void)componentTreeDidDisappear;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forComponent:(id)arg2 ;
-(void)multipleValueEditorView:(id)arg1 needsConfirmationForDeletion:(id)arg2 ;
-(void)multipleValueEditorView:(id)arg1 didUpdateWithItem:(id)arg2 ;
@end

