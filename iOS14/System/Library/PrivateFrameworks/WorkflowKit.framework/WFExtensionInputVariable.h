/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@interface WFExtensionInputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}
-(BOOL)isAvailable;
-(id)icon;
-(id)name;
-(id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
@end

