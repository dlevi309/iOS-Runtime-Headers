/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction {

	WFContentProperty* _defaultProperty;

}

@property (nonatomic,readonly) Class contentItemClass; 
@property (nonatomic,readonly) WFContentProperty * defaultProperty;              //@synthesize defaultProperty=_defaultProperty - In the implementation block
-(id)description;
-(Class)contentItemClass;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)inputContentClasses;
-(BOOL)inputsMultipleItems;
-(id)unsupportedEnvironments;
-(BOOL)outputsMultipleItems;
-(WFContentProperty *)defaultProperty;
@end

