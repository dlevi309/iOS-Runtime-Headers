/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFContentQuery *)query;
-(id)localizedName;
-(id)descriptionDictionary;
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

