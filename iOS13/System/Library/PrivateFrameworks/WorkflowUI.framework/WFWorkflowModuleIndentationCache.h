/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class WFWorkflow, NSLock, NSCountedSet;

@interface WFWorkflowModuleIndentationCache : NSObject {

	WFWorkflow* _workflow;
	NSLock* _lock;
	NSCountedSet* _indentationLevels;

}

@property (nonatomic,readonly) NSLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSCountedSet * indentationLevels;              //@synthesize indentationLevels=_indentationLevels - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                  //@synthesize workflow=_workflow - In the implementation block
-(void)dealloc;
-(NSLock *)lock;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(unsigned long long)indentationLevelForAction:(id)arg1 ;
-(NSCountedSet *)indentationLevels;
@end

