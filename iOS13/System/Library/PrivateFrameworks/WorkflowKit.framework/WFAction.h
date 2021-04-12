/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFUUIDProvider.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFVariableProvider.h>

@protocol WFUserInterface, WFVariableDataSource, WFActionParameterInputProvider;
@class NSArray, WFResourceManager, NSProgress, WFContentSourceTracker, NSString, NSDictionary, WFContentCollection, NSHashTable, NSMutableDictionary, WFWorkflow, NSAttributedString, WFImage, NSSet, NSDate, ICApp, WFActionParameterSummary, WFDataInfo, WFParameter;

@interface WFAction : NSObject <WFUUIDProvider, WFParameterEventObserver, NSCopying, WFVariableProvider> {

	BOOL _running;
	BOOL _inputParameterUnlocked;
	BOOL _skipsProcessingHiddenParameters;
	NSArray* _parameters;
	WFResourceManager* _resourceManager;
	NSArray* _inputContentClasses;
	NSArray* _outputContentClasses;
	NSProgress* _progress;
	WFContentSourceTracker* _contentSourceTracker;
	NSString* _identifier;
	NSDictionary* _definition;
	WFContentCollection* _input;
	WFContentCollection* _output;
	id<WFUserInterface> _userInterface;
	id<WFVariableDataSource> _variableSource;
	NSHashTable* _eventObservers;
	NSDictionary* _initialSerializedParameters;
	NSDictionary* _parametersByKey;
	NSMutableDictionary* _userDefinedParameterStates;
	NSMutableDictionary* _supplementalSerializedParameters;
	/*^block*/id _completionHandler;
	WFWorkflow* _workflow;
	NSDictionary* _processedParameters;
	id<WFActionParameterInputProvider> _parameterInputProvider;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSAttributedString * attributedLocalizedName; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * localizedShortName; 
@property (nonatomic,readonly) NSString * defaultOutputName; 
@property (nonatomic,readonly) NSString * localizedDefaultOutputName; 
@property (nonatomic,readonly) NSString * accessibilityName; 
@property (nonatomic,readonly) NSString * attribution; 
@property (nonatomic,readonly) NSString * localizedAttribution; 
@property (nonatomic,readonly) NSAttributedString * localizedFooter; 
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) NSArray * localizedCategories; 
@property (nonatomic,readonly) NSString * iconName; 
@property (nonatomic,readonly) WFImage * icon; 
@property (nonatomic,readonly) WFImage * outputIcon; 
@property (nonatomic,readonly) WFImage * keyImage; 
@property (nonatomic,readonly) NSDictionary * descriptionDictionary; 
@property (nonatomic,readonly) NSString * descriptionSummary; 
@property (nonatomic,readonly) NSString * localizedDescriptionSummary; 
@property (nonatomic,readonly) NSString * descriptionInput; 
@property (nonatomic,readonly) NSString * localizedDescriptionInput; 
@property (nonatomic,readonly) NSArray * allPossibleDescriptionResults; 
@property (nonatomic,readonly) NSString * descriptionResult; 
@property (nonatomic,readonly) NSString * localizedDescriptionResult; 
@property (nonatomic,readonly) NSString * descriptionNote; 
@property (nonatomic,readonly) NSString * localizedDescriptionNote; 
@property (nonatomic,readonly) NSSet * allPossibleDescriptionRequires; 
@property (nonatomic,readonly) NSString * descriptionRequires; 
@property (nonatomic,readonly) NSString * localizedDescriptionRequires; 
@property (nonatomic,readonly) NSAttributedString * localizedDescriptionAttribution; 
@property (nonatomic,readonly) NSString * descriptionOfAccessResources; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) NSArray * localizedKeywords; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (getter=isDebugAction,nonatomic,readonly) BOOL debugAction; 
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (getter=isMissing,nonatomic,readonly) BOOL missing; 
@property (getter=isDiscoverable,nonatomic,readonly) BOOL discoverable; 
@property (getter=isResidentCompatible,nonatomic,readonly) BOOL residentCompatible; 
@property (getter=isWatchCompatible,nonatomic,readonly) BOOL watchCompatible; 
@property (getter=isDiscoverableInSearch,nonatomic,readonly) BOOL discoverableInSearch; 
@property (getter=isConstructorAction,nonatomic,readonly) BOOL constructorAction; 
@property (nonatomic,readonly) NSArray * unsupportedEnvironments; 
@property (nonatomic,readonly) NSArray * userInterfaceTypes; 
@property (nonatomic,readonly) NSArray * requiredResources; 
@property (nonatomic,readonly) NSDictionary * settingsUIDefinition; 
@property (nonatomic,readonly) Class settingsViewControllerClass; 
@property (nonatomic,readonly) BOOL showsSettingsWhenResourcesUnavailable; 
@property (nonatomic,readonly) Class configurationViewClass; 
@property (nonatomic,readonly) Class runningViewClass; 
@property (nonatomic,readonly) NSString * appSection; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) ICApp * app; 
@property (nonatomic,readonly) BOOL shouldBeIncludedInAppsList; 
@property (nonatomic,readonly) long long rateLimitThreshold; 
@property (nonatomic,readonly) long long rateLimitTimeout; 
@property (nonatomic,readonly) long long rateLimitDelay; 
@property (nonatomic,readonly) BOOL inputRequired; 
@property (nonatomic,readonly) BOOL inputPassthrough; 
@property (nonatomic,readonly) BOOL blocksSnapping; 
@property (nonatomic,readonly) BOOL snappingPassthrough; 
@property (nonatomic,readonly) BOOL inputTypePassthrough; 
@property (nonatomic,readonly) NSString * inputParameterKey; 
@property (nonatomic,readonly) NSArray * inputTypes; 
@property (nonatomic,readonly) NSArray * outputTypes; 
@property (nonatomic,readonly) BOOL inputsMultipleItems; 
@property (nonatomic,readonly) BOOL outputsMultipleItems; 
@property (nonatomic,readonly) BOOL neverSuggested; 
@property (nonatomic,readonly) long long initialSuggestionBehavior; 
@property (nonatomic,readonly) unsigned long long outputDisclosureLevel; 
@property (nonatomic,readonly) NSString * outputMeasurementUnitType; 
@property (nonatomic,readonly) NSArray * parameterDefinitions; 
@property (nonatomic,readonly) WFActionParameterSummary * parameterSummary; 
@property (nonatomic,readonly) BOOL displaysParameterSummary; 
@property (nonatomic,readonly) unsigned long long parameterCollapsingBehavior; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier; 
@property (nonatomic,readonly) NSHashTable * eventObservers;                                           //@synthesize eventObservers=_eventObservers - In the implementation block
@property (nonatomic,retain) NSDictionary * initialSerializedParameters;                               //@synthesize initialSerializedParameters=_initialSerializedParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * parametersByKey;                                             //@synthesize parametersByKey=_parametersByKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userDefinedParameterStates;                         //@synthesize userDefinedParameterStates=_userDefinedParameterStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supplementalSerializedParameters;                   //@synthesize supplementalSerializedParameters=_supplementalSerializedParameters - In the implementation block
@property (assign,nonatomic) BOOL inputParameterUnlocked;                                              //@synthesize inputParameterUnlocked=_inputParameterUnlocked - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id<WFUserInterface> userInterface;                                        //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,retain) id<WFVariableDataSource> variableSource;                                  //@synthesize variableSource=_variableSource - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                                           //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSDictionary * processedParameters;                                         //@synthesize processedParameters=_processedParameters - In the implementation block
@property (nonatomic,readonly) BOOL skipsProcessingHiddenParameters;                                   //@synthesize skipsProcessingHiddenParameters=_skipsProcessingHiddenParameters - In the implementation block
@property (nonatomic,readonly) BOOL populatesInputFromInputParameter; 
@property (nonatomic,readonly) NSArray * specifiedOutputContentClasses; 
@property (getter=isLastAction,nonatomic,readonly) BOOL lastAction; 
@property (nonatomic,copy) NSString * UUID; 
@property (nonatomic,readonly) NSArray * supportedAppIdentifiers; 
@property (nonatomic,readonly) id<WFActionParameterInputProvider> parameterInputProvider;              //@synthesize parameterInputProvider=_parameterInputProvider - In the implementation block
@property (nonatomic,retain) WFContentSourceTracker * contentSourceTracker;                            //@synthesize contentSourceTracker=_contentSourceTracker - In the implementation block
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,copy,readonly) NSString * localizedKeyParameterDisplayName; 
@property (nonatomic,readonly) WFDataInfo * targetDataInfo; 
@property (nonatomic,copy,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                                         //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) WFResourceManager * resourceManager;                                    //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                                                   //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) WFParameter * inputParameter; 
@property (nonatomic,readonly) WFContentCollection * input;                                            //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) WFContentCollection * output;                                             //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) BOOL isRelevantToUser; 
@property (nonatomic,readonly) NSArray * inputContentClasses;                                          //@synthesize inputContentClasses=_inputContentClasses - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedInputContentClasses; 
@property (nonatomic,readonly) NSArray * outputContentClasses;                                         //@synthesize outputContentClasses=_outputContentClasses - In the implementation block
@property (nonatomic,copy) NSString * groupingIdentifier; 
@property (nonatomic,readonly) BOOL isDeletable; 
@property (nonatomic,copy) NSString * outputName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * availableVariableNames; 
@property (nonatomic,readonly) NSArray * availableOutputActions; 
@property (nonatomic,readonly) NSArray * workflowInputClasses; 
+(id)iconCache;
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
+(void)showImplicitChooseFromListWithInput:(id)arg1 userInterface:(id)arg2 cancelHandler:(/*^block*/id)arg3 selectionHandler:(/*^block*/id)arg4 ;
+(id)indentationLevelsForActions:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(NSProgress *)progress;
-(NSString *)localizedName;
-(NSString *)localizedShortName;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)isRunning;
-(NSArray *)keywords;
-(WFContentCollection *)input;
-(BOOL)isDeletable;
-(NSArray *)parameters;
-(NSDate *)creationDate;
-(NSDictionary *)definition;
-(WFImage *)keyImage;
-(NSString *)appBundleIdentifier;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(WFImage *)icon;
-(NSString *)localizedSubtitle;
-(NSArray *)keyCommands;
-(NSArray *)categories;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)hasChildren;
-(NSDate *)lastModifiedDate;
-(NSArray *)localizedCategories;
-(NSString *)attribution;
-(NSString *)appIdentifier;
-(BOOL)isFavorite;
-(NSString *)shortName;
-(NSString *)iconName;
-(id)outputDictionary;
-(WFContentCollection *)output;
-(void)setFavorite:(BOOL)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setGroupingIdentifier:(NSString *)arg1 ;
-(WFWorkflow *)workflow;
-(void)setOutput:(WFContentCollection *)arg1 ;
-(ICApp *)app;
-(WFResourceManager *)resourceManager;
-(id)parameterForKey:(id)arg1 ;
-(BOOL)isDiscontinued;
-(BOOL)isDiscoverable;
-(void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id<WFVariableDataSource>)variableSource;
-(void)setProcessedParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)processedParameters;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(NSString *)localizedDescriptionSummary;
-(NSString *)localizedAttribution;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)outputContentClasses;
-(NSString *)outputMeasurementUnitType;
-(NSString *)localizedDefaultOutputName;
-(id)parameterStateForKey:(id)arg1 ;
-(void)outputDetailsUpdated;
-(void)nameUpdated;
-(void)finishRunningWithError:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
-(NSHashTable *)eventObservers;
-(BOOL)inputRequired;
-(void)parameterStateValidityCriteriaDidChange:(id)arg1 ;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg1 ;
-(id)containedVariables;
-(id)serializedParameters;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)skipsProcessingHiddenParameters;
-(void)wasAddedToWorkflowByUser:(id)arg1 ;
-(id)createResourceManager;
-(id<WFUserInterface>)userInterface;
-(void)askForValuesOfParameters:(id)arg1 withDefaultStates:(id)arg2 input:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)populatesInputFromInputParameter;
-(WFParameter *)inputParameter;
-(void)processParametersWithoutAskingForValuesWithInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)outputTypes;
-(BOOL)hasAvailableVariables;
-(BOOL)isVariableWithNameAvailable:(id)arg1 ;
-(id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2 ;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg1 ;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1 ;
-(id)actionsProvidingVariableName:(id)arg1 ;
-(void)addVariableObserver:(id)arg1 ;
-(void)removeVariableObserver:(id)arg1 ;
-(NSArray *)availableVariableNames;
-(NSArray *)availableOutputActions;
-(NSArray *)workflowInputClasses;
-(id)generateOutputUUIDForAction:(id)arg1 ;
-(NSString *)localizedKeyParameterDisplayName;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)copyWithDefinition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)copyForProcessing;
-(id)defaultParameterStateForKey:(id)arg1 ;
-(id)parameterStateForKey:(id)arg1 fallingBackToDefaultValue:(BOOL)arg2 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)setSupplementalParameterValue:(id)arg1 forKey:(id)arg2 ;
-(id)supplementalParameterValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)previousAction;
-(BOOL)getInputContentFromVariablesInParameterState:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)populatedInputWithProcessedParameterValues:(id)arg1 ;
-(id)copyParameterStates;
-(void)processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(void)setParameterInputProvider:(id<WFActionParameterInputProvider>)arg1 ;
-(BOOL)runAsynchronouslyWithInput:(id)arg1 userInterfaceType:(id)arg2 userInterface:(id)arg3 ;
-(void)makeAccessResourcesAvailableAtWorkflowLevelAndRun;
-(void)checkUserInterfaceAndRunWithInput:(id)arg1 ;
-(void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2 ;
-(void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(void)resetOutput;
-(WFContentSourceTracker *)contentSourceTracker;
-(void)setOutput:(id)arg1 onVariableSource:(id)arg2 ;
-(id)createAccompanyingActions;
-(id)providedVariableNames;
-(void)didChangeVariableName:(id)arg1 to:(id)arg2 ;
-(id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg1 ;
-(NSString *)outputName;
-(void)setOutputName:(NSString *)arg1 ;
-(NSDictionary *)parametersByKey;
-(NSMutableDictionary *)userDefinedParameterStates;
-(NSMutableDictionary *)supplementalSerializedParameters;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)classesForTypeArray:(id)arg1 includeAllOutputTypes:(BOOL)arg2 ;
-(NSArray *)specifiedInputContentClasses;
-(NSArray *)specifiedOutputContentClasses;
-(NSArray *)inputContentClasses;
-(BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)legacyBehaviorIgnoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)arg1 withOutputsConsumedByFollowingActions:(id)arg2 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 includingCoercedTypes:(BOOL)arg3 ;
-(id)inputSourceInWorkflow:(id)arg1 ;
-(id)inheritedInputVariableInWorkflow:(id)arg1 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)supportsUserInterfaceType:(id)arg1 ;
-(BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)arg1 ;
-(BOOL)isUnsupportedWhenRunWithEnvironment:(id)arg1 ;
-(BOOL)isLastAction;
-(void)unlockInputParameter;
-(void)lockInputParameter;
-(void)snapInputParameterIfNecessary;
-(id)actionForAppIdentifier:(id)arg1 ;
-(WFDataInfo *)targetDataInfo;
-(NSArray *)supportedAppIdentifiers;
-(BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)arg1 ;
-(BOOL)requiresUserInteractionWhenRunWithInput:(id)arg1 ;
-(BOOL)isRelevantToUser;
-(id)minimumSupportedClientVersion;
-(void)configureRuntimeResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultCoercionOptionsOnContentCollection:(id)arg1 ;
-(void)setDefaultCoercionOptionsOnInputs;
-(void)setContentSourceTracker:(WFContentSourceTracker *)arg1 ;
-(void)setUserInterface:(id<WFUserInterface>)arg1 ;
-(void)setVariableSource:(id<WFVariableDataSource>)arg1 ;
-(NSDictionary *)initialSerializedParameters;
-(void)setInitialSerializedParameters:(NSDictionary *)arg1 ;
-(void)setParametersByKey:(NSDictionary *)arg1 ;
-(void)setUserDefinedParameterStates:(NSMutableDictionary *)arg1 ;
-(void)setSupplementalSerializedParameters:(NSMutableDictionary *)arg1 ;
-(BOOL)inputParameterUnlocked;
-(void)setInputParameterUnlocked:(BOOL)arg1 ;
-(id<WFActionParameterInputProvider>)parameterInputProvider;
-(BOOL)inputsMultipleItems;
-(NSArray *)unsupportedEnvironments;
-(NSArray *)userInterfaceTypes;
-(BOOL)inputTypePassthrough;
-(BOOL)inputPassthrough;
-(long long)initialSuggestionBehavior;
-(BOOL)neverSuggested;
-(BOOL)blocksSnapping;
-(BOOL)snappingPassthrough;
-(BOOL)containsVariableOfType:(id)arg1 ;
-(id)containedVariablesOfClass:(Class)arg1 ;
-(WFActionParameterSummary *)parameterSummary;
-(NSArray *)inputTypes;
-(NSString *)inputParameterKey;
-(NSArray *)parameterDefinitions;
-(unsigned long long)outputDisclosureLevel;
-(NSArray *)requiredResources;
-(id)visibleParametersWithProcessing:(BOOL)arg1 ;
-(long long)rateLimitDelay;
-(long long)rateLimitTimeout;
-(long long)rateLimitThreshold;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)displaysParameterSummary;
-(BOOL)outputsMultipleItems;
-(NSString *)defaultOutputName;
-(NSDictionary *)descriptionDictionary;
-(NSString *)descriptionSummary;
-(NSArray *)allPossibleDescriptionResults;
-(NSString *)descriptionResult;
-(NSString *)appSection;
-(WFImage *)outputIcon;
-(Class)settingsViewControllerClass;
-(NSString *)descriptionInput;
-(BOOL)descriptionInputIncludesSupportingItemClasses;
-(id)typeDescriptionWithTypes:(id)arg1 explanationText:(id)arg2 multiple:(BOOL)arg3 optional:(BOOL)arg4 ;
-(NSString *)descriptionNote;
-(NSString *)descriptionRequires;
-(NSDictionary *)settingsUIDefinition;
-(id)subcategoryForCategory:(id)arg1 ;
-(NSAttributedString *)attributedLocalizedName;
-(NSString *)accessibilityName;
-(NSAttributedString *)localizedFooter;
-(NSString *)localizedDescriptionInput;
-(NSString *)localizedDescriptionResult;
-(NSString *)localizedDescriptionNote;
-(NSSet *)allPossibleDescriptionRequires;
-(NSString *)localizedDescriptionRequires;
-(NSAttributedString *)localizedDescriptionAttribution;
-(NSString *)descriptionOfAccessResources;
-(NSArray *)localizedKeywords;
-(BOOL)isDebugAction;
-(BOOL)isMissing;
-(BOOL)isDiscoverableInSearch;
-(BOOL)isResidentCompatible;
-(BOOL)isWatchCompatible;
-(BOOL)showsSettingsWhenResourcesUnavailable;
-(Class)configurationViewClass;
-(Class)runningViewClass;
-(id)localizedSubcategoryForCategory:(id)arg1 ;
-(BOOL)shouldBeIncludedInAppsList;
-(unsigned long long)parameterCollapsingBehavior;
-(BOOL)isConstructorAction;
@end

