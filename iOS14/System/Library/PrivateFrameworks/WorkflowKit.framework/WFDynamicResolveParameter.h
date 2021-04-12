/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>
#import <libobjc.A.dylib/WFCodableAttributeBackedParameter.h>

@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;
@class INCodableAttribute, INStringLocalizer, NSString;

@interface WFDynamicResolveParameter : WFParameter <WFModuleSummarySupporting, WFCodableAttributeBackedParameter> {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;
	id<WFDynamicResolveParameterDataSource> _dataSource;
	id<WFDynamicResolveParameterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) INCodableAttribute * codableAttribute;                                  //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,retain) INStringLocalizer * stringLocalizer;                                    //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)wf_supportsSearch;
-(BOOL)wf_shouldValidateCurrentStateOnCollectionChanged;
-(id)wf_displayLocalizedPrompt;
-(BOOL)wf_allowsMulipleSelection;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg1 ;
-(id)wf_pickerLocalizedImageForState:(id)arg1 ;
-(BOOL)wf_alwaysScaleIconImage;
-(INCodableAttribute *)codableAttribute;
-(id<WFDynamicResolveParameterDelegate>)delegate;
-(id<WFDynamicResolveParameterDataSource>)dataSource;
-(void)setDelegate:(id<WFDynamicResolveParameterDelegate>)arg1 ;
-(void)setDataSource:(id<WFDynamicResolveParameterDataSource>)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(INStringLocalizer *)stringLocalizer;
-(id)localizedLabelForState:(id)arg1 ;
-(void)setStringLocalizer:(INStringLocalizer *)arg1 ;
-(void)setCodableAttribute:(INCodableAttribute *)arg1 ;
-(void)resolveOptionsForUserInput:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)endResolutionSession;
-(void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

