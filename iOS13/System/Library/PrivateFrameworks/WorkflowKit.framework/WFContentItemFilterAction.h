/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFContentItemAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class WFContentQuery, NSString;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (nonatomic,readonly) WFContentQuery * query; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(WFContentQuery *)query;
-(id)keywords;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(BOOL)inputRequired;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 ;
-(id)parameterSummary;
-(id)inputParameterKey;
-(id)parameterDefinitions;
-(id)descriptionDictionary;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(unsigned long long)parameterCollapsingBehavior;
-(id)tableTemplate;
-(id)localizedParameterSummaryStringForFind;
-(id)localizedParameterSummaryStringForFindWithFilterConditions;
-(id)localizedParameterSummaryStringForFilter;
-(id)localizedParameterSummaryStringForFilterWithFilterConditions;
-(void)runAsynchronouslyWithInput:(id)arg1 query:(id)arg2 ;
@end

