/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFCodableAttributeBackedParameter.h>

@class INCodableAttribute, INStringLocalizer, INObjectCollection, NSString;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter> {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;

}

@property (nonatomic,retain) INObjectCollection * possibleStatesCollection; 
@property (nonatomic,retain) INCodableAttribute * codableAttribute;                        //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,retain) INStringLocalizer * stringLocalizer;                          //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (nonatomic,readonly) NSString * localizedConfigurationPromptDialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(BOOL)moduleSummaryShowsAddButtonForState:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)wf_supportsSearch;
-(BOOL)wf_shouldValidateCurrentStateOnCollectionChanged;
-(id)wf_displayLocalizedPrompt;
-(BOOL)wf_allowsMulipleSelection;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg1 ;
-(id)wf_pickerLocalizedImageForState:(id)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(Class)singleStateClass;
-(id)localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesSubtitleInEditor;
-(BOOL)displaysMultipleValueEditor;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(INStringLocalizer *)stringLocalizer;
-(void)setStringLocalizer:(INStringLocalizer *)arg1 ;
-(void)setCodableAttribute:(INCodableAttribute *)arg1 ;
-(NSString *)localizedConfigurationPromptDialog;
-(void)getStatesWithSearchTerm:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

