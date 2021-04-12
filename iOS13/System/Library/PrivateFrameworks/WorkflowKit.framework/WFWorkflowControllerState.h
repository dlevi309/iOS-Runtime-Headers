/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWorkflow, WFContentCollection, NSDictionary;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding> {

	WFWorkflow* _workflow;
	WFContentCollection* _currentInput;
	NSDictionary* _currentProcessedParameters;
	NSDictionary* _variables;
	unsigned long long _currentActionIndex;

}

@property (nonatomic,readonly) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (nonatomic,readonly) unsigned long long currentActionIndex;                  //@synthesize currentActionIndex=_currentActionIndex - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFContentCollection * currentInput;                     //@synthesize currentInput=_currentInput - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentProcessedParameters;              //@synthesize currentProcessedParameters=_currentProcessedParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFContentCollection *)currentInput;
-(WFWorkflow *)workflow;
-(NSDictionary *)variables;
-(NSDictionary *)currentProcessedParameters;
-(unsigned long long)currentActionIndex;
-(id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5 ;
@end

