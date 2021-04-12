/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWorkflow, WFContentCollection, NSDictionary, WFWorkflowRunningContext, NSString;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding> {

	WFWorkflow* _workflow;
	WFContentCollection* _currentInput;
	NSDictionary* _currentProcessedParameters;
	NSDictionary* _variables;
	unsigned long long _currentActionIndex;
	WFWorkflowRunningContext* _runningContext;
	long long _numberOfDialogsPresented;
	NSString* _currentRunSource;

}

@property (nonatomic,readonly) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (nonatomic,readonly) unsigned long long currentActionIndex;                  //@synthesize currentActionIndex=_currentActionIndex - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;              //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,readonly) long long numberOfDialogsPresented;                     //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (nonatomic,readonly) NSString * currentRunSource;                            //@synthesize currentRunSource=_currentRunSource - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFContentCollection * currentInput;                     //@synthesize currentInput=_currentInput - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentProcessedParameters;              //@synthesize currentProcessedParameters=_currentProcessedParameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)getStateFromURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(WFWorkflow *)workflow;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)variables;
-(WFContentCollection *)currentInput;
-(WFWorkflowRunningContext *)runningContext;
-(long long)numberOfDialogsPresented;
-(id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 runningContext:(id)arg4 currentInput:(id)arg5 currentProcessedParameters:(id)arg6 currentRunSource:(id)arg7 numberOfDialogsPresented:(long long)arg8 ;
-(NSDictionary *)currentProcessedParameters;
-(unsigned long long)currentActionIndex;
-(NSString *)currentRunSource;
@end

