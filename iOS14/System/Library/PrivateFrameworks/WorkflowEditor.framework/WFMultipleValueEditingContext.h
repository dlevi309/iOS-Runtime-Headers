/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class WFVariableEditingContext, WFListEditorUpdateItem;

@interface WFMultipleValueEditingContext : NSObject {

	WFVariableEditingContext* _variableContext;
	WFListEditorUpdateItem* _updateItem;

}

@property (nonatomic,retain) WFVariableEditingContext * variableContext;              //@synthesize variableContext=_variableContext - In the implementation block
@property (nonatomic,retain) WFListEditorUpdateItem * updateItem;                     //@synthesize updateItem=_updateItem - In the implementation block
-(WFListEditorUpdateItem *)updateItem;
-(WFVariableEditingContext *)variableContext;
-(void)setVariableContext:(WFVariableEditingContext *)arg1 ;
-(void)setUpdateItem:(WFListEditorUpdateItem *)arg1 ;
@end

