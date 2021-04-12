/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSSet, NSString, WFResourceManager, NSDictionary, NSHashTable;

@interface WFParameter : NSObject {

	BOOL _hidden;
	BOOL _doNotLocalizeValues;
	BOOL _insideWorkflow;
	BOOL _supportsImportQuestions;
	BOOL _allowsMultipleValues;
	BOOL _shouldAlignLabels;
	NSSet* _supportedVariableTypes;
	NSString* _key;
	NSString* _localizedLabel;
	NSString* _localizedPlaceholder;
	NSString* _localizedDescription;
	id _defaultSerializedRepresentation;
	WFResourceManager* _resourceManager;
	NSString* _intentSlotName;
	NSSet* _disallowedVariableTypes;
	NSDictionary* _definition;
	NSHashTable* _eventObservers;
	NSSet* _defaultSupportedVariableTypes;

}

@property (nonatomic,readonly) NSSet * disallowedVariableTypes;                          //@synthesize disallowedVariableTypes=_disallowedVariableTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                           //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSHashTable * eventObservers;                             //@synthesize eventObservers=_eventObservers - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) NSSet * defaultSupportedVariableTypes;                    //@synthesize defaultSupportedVariableTypes=_defaultSupportedVariableTypes - In the implementation block
@property (nonatomic,copy) NSString * localizedPlaceholder;                              //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabel;                           //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL doNotLocalizeValues;                                 //@synthesize doNotLocalizeValues=_doNotLocalizeValues - In the implementation block
@property (nonatomic,readonly) NSSet * supportedVariableTypes;                           //@synthesize supportedVariableTypes=_supportedVariableTypes - In the implementation block
@property (nonatomic,copy,readonly) id defaultSerializedRepresentation;                  //@synthesize defaultSerializedRepresentation=_defaultSerializedRepresentation - In the implementation block
@property (nonatomic,readonly) WFResourceManager * resourceManager;                      //@synthesize resourceManager=_resourceManager - In the implementation block
@property (getter=isInsideWorkflow,nonatomic,readonly) BOOL insideWorkflow;              //@synthesize insideWorkflow=_insideWorkflow - In the implementation block
@property (nonatomic,readonly) BOOL supportsImportQuestions;                             //@synthesize supportsImportQuestions=_supportsImportQuestions - In the implementation block
@property (nonatomic,readonly) NSString * intentSlotName;                                //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleValues;                                //@synthesize allowsMultipleValues=_allowsMultipleValues - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlignLabels;                                   //@synthesize shouldAlignLabels=_shouldAlignLabels - In the implementation block
+(id)allInsertableVariableTypes;
+(id)parameterWithDefinition:(id)arg1 ;
+(id)referencedActionResourceClasses;
-(NSString *)key;
-(NSString *)localizedDescription;
-(BOOL)isHidden;
-(NSDictionary *)definition;
-(id)initWithDefinition:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)localizedLabel;
-(NSString *)intentSlotName;
-(NSString *)localizedPlaceholder;
-(WFResourceManager *)resourceManager;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
-(Class)singleStateClass;
-(NSSet *)defaultSupportedVariableTypes;
-(NSHashTable *)eventObservers;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)attributesDidChange;
-(void)stateValidityCriteriaDidChange;
-(BOOL)allowsMultipleValues;
-(NSSet *)supportedVariableTypes;
-(BOOL)doNotLocalizeValues;
-(Class)stateClass;
-(Class)multipleStateClass;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)defaultSerializedRepresentationDidChange;
-(id)defaultSerializedRepresentation;
-(BOOL)isInsideWorkflow;
-(BOOL)supportsImportQuestions;
-(BOOL)shouldAlignLabels;
-(NSSet *)disallowedVariableTypes;
-(void)setActionResources:(id)arg1 ;
@end

