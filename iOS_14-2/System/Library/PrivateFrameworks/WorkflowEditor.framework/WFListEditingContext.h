/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class WFVariableEditingContext, WFListEditorUpdateItem;

@interface WFListEditingContext : NSObject {

	BOOL _key;
	BOOL _nested;
	WFVariableEditingContext* _variableContext;
	WFListEditorUpdateItem* _updateItem;

}

@property (nonatomic,retain) WFVariableEditingContext * variableContext;              //@synthesize variableContext=_variableContext - In the implementation block
@property (nonatomic,retain) WFListEditorUpdateItem * updateItem;                     //@synthesize updateItem=_updateItem - In the implementation block
@property (assign,nonatomic) BOOL key;                                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL nested;                                             //@synthesize nested=_nested - In the implementation block
-(BOOL)nested;
-(BOOL)key;
-(void)setKey:(BOOL)arg1 ;
-(WFListEditorUpdateItem *)updateItem;
-(void)setNested:(BOOL)arg1 ;
-(WFVariableEditingContext *)variableContext;
-(void)setVariableContext:(WFVariableEditingContext *)arg1 ;
-(void)setUpdateItem:(WFListEditorUpdateItem *)arg1 ;
@end

