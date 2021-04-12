/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class WFVariable;

@interface WFVariableEditingContext : NSObject {

	BOOL _editingVariable;
	WFVariable* _variable;
	NSRange _range;

}

@property (nonatomic,readonly) WFVariable * variable;              //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) BOOL editingVariable;               //@synthesize editingVariable=_editingVariable - In the implementation block
+(id)newWithVariable:(id)arg1 range:(NSRange)arg2 editingVariable:(BOOL)arg3 ;
-(NSRange)range;
-(WFVariable *)variable;
-(BOOL)editingVariable;
@end

