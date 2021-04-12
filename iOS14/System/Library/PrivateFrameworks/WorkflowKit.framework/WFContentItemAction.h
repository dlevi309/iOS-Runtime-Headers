/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)outputsMultipleItems;
-(WFContentProperty *)defaultProperty;
-(BOOL)inputsMultipleItems;
@end

