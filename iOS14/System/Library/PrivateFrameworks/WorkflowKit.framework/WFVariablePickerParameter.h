/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@interface WFVariablePickerParameter : WFEnumerationParameter
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)wf_displayLocalizedPrompt;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg1 ;
-(id)wf_pickerLocalizedImageForState:(id)arg1 ;
-(id)possibleStates;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)alwaysShowsButton;
-(id)importQuestionBehavior;
@end

