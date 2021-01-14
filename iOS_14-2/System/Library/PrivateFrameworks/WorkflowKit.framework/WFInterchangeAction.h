/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction {

	ICAction* _interchangeAction;
	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;                    //@synthesize contentClasses=_contentClasses - In the implementation block
@property (nonatomic,readonly) BOOL requiresCallback; 
@property (nonatomic,readonly) ICAction * interchangeAction;              //@synthesize interchangeAction=_interchangeAction - In the implementation block
-(BOOL)isDiscoverable;
-(id)descriptionDictionary;
-(id)keywords;
-(id)lastModifiedDate;
-(id)categories;
-(id)shortName;
-(id)name;
-(id)description;
-(id)creationDate;
-(id)app;
-(BOOL)isDiscontinued;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(BOOL)inputRequired;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)inputPassthrough;
-(BOOL)skipsProcessingHiddenParameters;
-(id)specifiedInputContentClasses;
-(id)specifiedOutputContentClasses;
-(id)inputContentClasses;
-(BOOL)outputsMultipleItems;
-(id)parameterSummary;
-(id)inputParameterKey;
-(BOOL)inputsMultipleItems;
-(id)subcategoryForCategory:(id)arg1 ;
-(id)userInterfaceTypes;
-(id)requiredResources;
-(BOOL)neverSuggested;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2 ;
-(id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4 ;
-(BOOL)requiresCallback;
-(BOOL)shouldSuppressCallback;
-(BOOL)callbackIsCurrentlyDisabled;
-(BOOL)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2 ;
-(id)disabledPlatformsForInterchangeActionWithIdentifier:(id)arg1 ;
-(ICAction *)interchangeAction;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
@end

