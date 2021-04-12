/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(WFVariable *)variable;
-(NSRange)range;
-(BOOL)editingVariable;
@end

