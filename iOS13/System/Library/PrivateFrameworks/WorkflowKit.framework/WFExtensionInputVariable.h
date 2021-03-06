/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@interface WFExtensionInputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}
-(id)name;
-(BOOL)isAvailable;
-(id)icon;
-(id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
@end

