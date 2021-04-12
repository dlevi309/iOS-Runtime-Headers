/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
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
-(BOOL)key;
-(void)setKey:(BOOL)arg1 ;
-(WFListEditorUpdateItem *)updateItem;
-(WFVariableEditingContext *)variableContext;
-(void)setVariableContext:(WFVariableEditingContext *)arg1 ;
-(void)setUpdateItem:(WFListEditorUpdateItem *)arg1 ;
-(BOOL)nested;
-(void)setNested:(BOOL)arg1 ;
@end

