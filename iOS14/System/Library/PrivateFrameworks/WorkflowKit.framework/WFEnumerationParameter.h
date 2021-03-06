/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSArray, NSString;

@interface WFEnumerationParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {

	BOOL _alwaysShowsButton;
	BOOL _liveUpdatesPossibleStatesInEditor;
	NSArray* _staticPossibleStates;
	NSArray* _displayNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * staticPossibleStates;                       //@synthesize staticPossibleStates=_staticPossibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * displayNames;                               //@synthesize displayNames=_displayNames - In the implementation block
@property (nonatomic,readonly) BOOL preferParameterValuePicker; 
@property (nonatomic,readonly) NSArray * possibleStatesForLocalization; 
@property (nonatomic,readonly) BOOL alwaysShowsButton;                               //@synthesize alwaysShowsButton=_alwaysShowsButton - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) BOOL hidesSubtitleInEditor; 
@property (nonatomic,readonly) BOOL hidesAccessoryIconInEditor; 
@property (nonatomic,readonly) BOOL liveUpdatesPossibleStatesInEditor;               //@synthesize liveUpdatesPossibleStatesInEditor=_liveUpdatesPossibleStatesInEditor - In the implementation block
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
-(BOOL)wf_alwaysScaleIconImage;
-(NSArray *)displayNames;
-(NSArray *)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(void)setPossibleStatesFromRemoteSource:(id)arg1 ;
-(NSArray *)possibleStatesForLocalization;
-(id)localizedTitleForButtonWithState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2 ;
-(id)localizedLabelForMultipleState:(id)arg1 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg1 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)hidesSubtitleInEditor;
-(BOOL)preferParameterValuePicker;
-(BOOL)displaysMultipleValueEditor;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)startLiveUpdatingPossibleStates;
-(void)stopLiveUpdatingPossibleStates;
-(BOOL)alwaysShowsButton;
-(BOOL)liveUpdatesPossibleStatesInEditor;
-(NSArray *)staticPossibleStates;
@end

