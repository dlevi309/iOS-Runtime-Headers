/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLock *)lock;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)indentationLevelForAction:(id)arg1 ;
-(NSCountedSet *)indentationLevels;
@end

