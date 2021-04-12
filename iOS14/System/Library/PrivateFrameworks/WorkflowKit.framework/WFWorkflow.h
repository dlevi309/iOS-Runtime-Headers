/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFWorkflowStorage;
@class NSArray, WFVariableAvailability, WFActionGroupingCache, WFWorkflowRecord, WFWorkflowQuarantine, NSString, WFWorkflowReference, WFWorkflowIcon;

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
	id<WFWorkflowStorage> _storageProvider;

}

@property (nonatomic,copy,readonly) NSArray * actions; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (getter=isResidentCompatible,nonatomic,readonly) BOOL residentCompatible; 
@property (nonatomic,retain) id<WFWorkflowStorage> storageProvider;                              //@synthesize storageProvider=_storageProvider - In the implementation block
@property (nonatomic,readonly) WFActionGroupingCache * groupingCache;                            //@synthesize groupingCache=_groupingCache - In the implementation block
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
+(BOOL)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id*)arg3 ;
+(void)loadActionDescriptionIconsWithActions:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)supportedInputClasses;
+(id)defaultName;
+(id)workflowWithReference:(id)arg1 database:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id*)arg5 ;
+(id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2 ;
+(id)workflowWithReference:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)supportedInputClassNames;
+(id)localizedSubtitleWithActionCount:(unsigned long long)arg1 ;
-(WFWorkflowRecord *)record;
-(void)setActions:(NSArray *)arg1 ;
-(Class)classForKeyedArchiver;
-(WFWorkflowReference *)reference;
-(id)init;
-(NSArray *)actions;
-(void)save;
-(BOOL)hasActions;
-(WFWorkflowIcon *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(id)localizedSubtitle;
-(void)addAction:(id)arg1 ;
-(NSString *)name;
-(NSString *)wfName;
-(NSString *)description;
-(void)setEditingDelegate:(id)arg1 ;
-(id)editingDelegate;
-(id)initWithCoder:(id)arg1 ;
-(void)removeActions:(id)arg1 ;
-(long long)environment;
-(void)removeAction:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)database;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)inputClasses;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(NSString *)associatedAppBundleIdentifier;
-(void)dealloc;
-(NSString *)source;
-(BOOL)addWatchWorkflowTypeIfEligible;
-(NSString *)galleryIdentifier;
-(NSString *)workflowID;
-(BOOL)hiddenFromLibraryAndSync;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(NSArray *)workflowTypes;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)actionsDescription;
-(NSString *)workflowSubtitle;
-(id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id*)arg3 ;
-(void)generateShortcutRepresentation:(/*^block*/id)arg1 ;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(id)initWithShortcut:(id)arg1 error:(id*)arg2 ;
-(id)initWithActionDonation:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4 ;
-(void)actionNameDidChange:(id)arg1 ;
-(void)actionOutputDetailsDidChange:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2 ;
-(void)setHiddenFromLibraryAndSync:(BOOL)arg1 ;
-(BOOL)isEligibleForWatch;
-(void)addWatchWorkflowType;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(BOOL)isResidentCompatible;
-(id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id*)arg5 ;
-(NSString *)legacyName;
-(void)setLegacyName:(NSString *)arg1 ;
-(BOOL)hiddenInComplication;
-(void)setHiddenInComplication:(BOOL)arg1 ;
-(id)validImportQuestions;
-(id)workflowByClearingPrivateImportQuestionData;
-(void)reloadFromRecord;
-(void)loadFromRecord;
-(void)authorizeAccessResourcesIfNeeded;
-(void)performBatchOperation:(/*^block*/id)arg1 ;
-(void)saveActionsToRecordIfNeeded;
-(void)configureAsSingleStepShortcutIfNecessary:(/*^block*/id)arg1 ;
-(void)configureWithShortcut:(id)arg1 homeSummaryText:(id)arg2 ;
-(void)getHomeSummaryTextWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeAddedAction:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertActions:(id)arg1 atIndexes:(id)arg2 ;
-(void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 ;
-(WFActionGroupingCache *)groupingCache;
-(id)actionsGroupedWithAction:(id)arg1 ;
-(id)actionForSuggestionsDrawer;
-(WFVariableAvailability *)variableAvailability;
-(void)updateVariablesForAction:(id)arg1 includingImportedVariables:(BOOL)arg2 ;
-(void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3 ;
-(id)effectiveInputClasses;
-(id)additionalEffectiveInputClassesForTriggers:(id)arg1 ;
-(id)localizedActionsSummary;
-(BOOL)isInUserLibrary;
-(BOOL)isUntitled;
-(id<WFWorkflowStorage>)storageProvider;
-(void)setStorageProvider:(id<WFWorkflowStorage>)arg1 ;
-(BOOL)saveDisabled;
-(void)setSaveDisabled:(BOOL)arg1 ;
-(id)createUserActivityForViewing;
-(void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

