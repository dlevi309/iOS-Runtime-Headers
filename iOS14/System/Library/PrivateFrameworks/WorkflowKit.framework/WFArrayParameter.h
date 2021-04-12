/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

