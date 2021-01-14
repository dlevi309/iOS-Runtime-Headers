/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class WFMultipleValueEditorViewCell;

@interface WFMultipleValueEditorViewCellContext : NSObject {

	WFMultipleValueEditorViewCell* _cell;

}

@property (assign,nonatomic,__weak) WFMultipleValueEditorViewCell * cell;                       //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider; 
@property (nonatomic,readonly) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,readonly) id<WFComponentNavigationContext> navigationContext; 
-(WFMultipleValueEditorViewCell *)cell;
-(void)setCell:(WFMultipleValueEditorViewCell *)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
@end

