/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFRecordStorageProvider;
@class NSArray, WFVariableAvailability, WFActionGroupingCache, WFWorkflowRecord, WFWorkflowQuarantine, WFWorkflowReference, NSString, WFWorkflowIcon;

@interface WFWorkflow : NSObject <WFNaming, WFActionEventObserver, NSCopying, NSSecureCoding> {

	BOOL _saveDisabled;
	NSArray* _actions;
	WFVariableAvailability* _variableAvailability;
	WFActionGroupingCache* _groupingCache;
	NSArray* _inputClasses;
	NSArray* _importQuestions;
	WFWorkflowRecord* _record;
	long long _environment;
	WFWorkflowQuarantine* _quarantine;
	id<WFRecordStorageProvider> _storageProvider;
	WFWorkflowReference* _overridenReference;

}

@property (nonatomic,copy,readonly) NSArray * actions; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (getter=isResidentCompatible,nonatomic,readonly) BOOL residentCompatible; 
@property (nonatomic,retain) id<WFRecordStorageProvider> storageProvider;                        //@synthesize storageProvider=_storageProvider - In the implementation block
@property (nonatomic,readonly) WFActionGroupingCache * groupingCache;                            //@synthesize groupingCache=_groupingCache - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * overridenReference;                         //@synthesize overridenReference=_overridenReference - In the implementation block
@property (assign,nonatomic) BOOL saveDisabled;                                                  //@synthesize saveDisabled=_saveDisabled - In the implementation block
@property (nonatomic,copy) NSArray * inputClasses;                                               //@synthesize inputClasses=_inputClasses - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                                //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * importQuestions;                                            //@synthesize importQuestions=_importQuestions - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * reference; 
@property (nonatomic,readonly) WFWorkflowRecord * record;                                        //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) long long environment;                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * workflowID; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * legacyName; 
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,copy) NSArray * workflowTypes; 
@property (nonatomic,readonly) NSString * workflowSubtitle; 
@property (nonatomic,readonly) NSString * actionsDescription; 
@property (nonatomic,readonly) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,readonly) NSString * galleryIdentifier; 
@property (nonatomic,readonly) NSString * source; 
@property (assign,nonatomic) BOOL hiddenInComplication; 
@property (assign,nonatomic) BOOL hiddenFromLibraryAndSync; 
@property (nonatomic,retain) WFWorkflowQuarantine * quarantine;                                  //@synthesize quarantine=_quarantine - In the implementation block
@property (assign,nonatomic) long long remoteQuarantineStatus; 
@property (nonatomic,readonly) WFVariableAvailability * variableAvailability;                    //@synthesize variableAvailability=_variableAvailability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultName;
+(id)supportedInputClassNames;
+(id)localizedSubtitleWithActionCount:(unsigned long long)arg1 ;
+(id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2 ;
+(BOOL)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id*)arg3 ;
+(id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 error:(id*)arg3 ;
+(id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id*)arg5 ;
+(id)supportedInputClasses;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(Class)classForKeyedArchiver;
-(long long)environment;
-(void)save;
-(NSArray *)inputClasses;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(WFWorkflowIcon *)icon;
-(id)localizedSubtitle;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setEditingDelegate:(id)arg1 ;
-(id)editingDelegate;
-(WFWorkflowRecord *)record;
-(WFWorkflowReference *)reference;
-(NSString *)associatedAppBundleIdentifier;
-(id)eventDictionary;
-(void)generateShortcutRepresentation:(/*^block*/id)arg1 ;
-(id)initWithActionDonation:(id)arg1 error:(id*)arg2 ;
-(id)initWithShortcut:(id)arg1 error:(id*)arg2 ;
-(void)configureWithShortcut:(id)arg1 ;
-(id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4 ;
-(id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id*)arg3 ;
-(BOOL)hiddenFromLibraryAndSync;
-(void)actionNameDidChange:(id)arg1 ;
-(void)actionOutputDetailsDidChange:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2 ;
-(NSArray *)workflowTypes;
-(id)effectiveInputClasses;
-(void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3 ;
-(WFVariableAvailability *)variableAvailability;
-(NSString *)wfName;
-(NSString *)actionsDescription;
-(NSString *)workflowID;
-(NSString *)workflowSubtitle;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(void)removeAction:(id)arg1 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(id)actionsGroupedWithAction:(id)arg1 ;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(void)performBatchOperation:(/*^block*/id)arg1 ;
-(id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id*)arg5 ;
-(BOOL)isResidentCompatible;
-(void)overrideReference:(id)arg1 ;
-(NSString *)legacyName;
-(void)setLegacyName:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(BOOL)hiddenInComplication;
-(void)setHiddenInComplication:(BOOL)arg1 ;
-(void)setHiddenFromLibraryAndSync:(BOOL)arg1 ;
-(id)validImportQuestions;
-(id)workflowByClearingPrivateImportQuestionData;
-(BOOL)hasStorageProvider;
-(void)reloadFromRecord;
-(void)loadFromRecord;
-(void)authorizeAccessResourcesIfNeeded;
-(void)saveActionsToRecordIfNeeded;
-(void)configureAsSingleStepShortcutIfNecessary:(/*^block*/id)arg1 ;
-(void)initializeAddedAction:(id)arg1 ;
-(void)removeActions:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertActions:(id)arg1 atIndexes:(id)arg2 ;
-(void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 ;
-(WFActionGroupingCache *)groupingCache;
-(id)actionForSuggestionsDrawer;
-(void)updateVariablesForAction:(id)arg1 includingImportedVariables:(BOOL)arg2 ;
-(id)localizedActionsSummary;
-(void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isUntitled;
-(id<WFRecordStorageProvider>)storageProvider;
-(void)setStorageProvider:(id<WFRecordStorageProvider>)arg1 ;
-(WFWorkflowReference *)overridenReference;
-(BOOL)saveDisabled;
-(void)setSaveDisabled:(BOOL)arg1 ;
-(id)createUserActivityForViewing;
-(void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

