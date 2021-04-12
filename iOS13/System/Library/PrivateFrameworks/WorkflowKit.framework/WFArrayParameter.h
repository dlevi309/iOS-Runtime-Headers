/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSSet;

@interface WFArrayParameter : WFParameter {

	BOOL _supportsVariables;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) BOOL supportsVariables;                 //@synthesize supportsVariables=_supportsVariables - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;              //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(NSSet *)allowedValueTypes;
-(Class)stateClass;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsVariables;
@end

