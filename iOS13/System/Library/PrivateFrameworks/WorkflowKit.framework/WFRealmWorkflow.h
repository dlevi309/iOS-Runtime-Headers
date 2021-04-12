/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@protocol WFWorkflowType, WFWorkflowInputClass;
@class NSString, NSDate, WFRealmWorkflowIcon, WFRealmWorkflowQuarantine, WFWorkflowTrustedResources, RLMArray, NSData, RLMLinkingObjects, WFWorkflowIcon, WFWorkflowQuarantine, NSArray, NSSet, NSNumber;

@interface WFRealmWorkflow : RLMObject <WFRecordStorage> {

	BOOL _hiddenFromLibraryAndSync;
	BOOL _hiddenInComplication;
	BOOL _deleted;
	NSString* _workflowID;
	NSDate* _createdAt;
	NSDate* _modifiedAt;
	NSString* _name;
	NSString* _legacyName;
	WFRealmWorkflowIcon* _icon;
	WFRealmWorkflowQuarantine* _quarantine;
	WFWorkflowTrustedResources* _trustedResources;
	RLMArray*<WFWorkflowType> _workflowTypeContainers;
	RLMArray*<WFWorkflowInputClass> _inputClassContainers;
	long long _sortOrdering;
	NSString* _minimumClientVersion;
	NSData* _actionsData;
	NSData* _importQuestionsData;
	NSString* _workflowSubtitle;
	NSString* _actionsDescription;
	NSString* _associatedAppBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _source;
	WFRealmWorkflow* _conflictOf;
	RLMLinkingObjects* _conflictingWorkflows;
	NSString* _lastSavedOnDeviceName;
	long long _lastSyncedHash;
	NSString* _lastMigratedClientVersion;
	long long _remoteQuarantineStatus;

}

@property (copy) NSString * workflowID;                                                                    //@synthesize workflowID=_workflowID - In the implementation block
@property (retain) NSDate * createdAt;                                                                     //@synthesize createdAt=_createdAt - In the implementation block
@property (retain) NSDate * modifiedAt;                                                                    //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (copy) NSString * name;                                                                          //@synthesize name=_name - In the implementation block
@property (copy) NSString * legacyName;                                                                    //@synthesize legacyName=_legacyName - In the implementation block
@property (retain) WFRealmWorkflowIcon * icon;                                                             //@synthesize icon=_icon - In the implementation block
@property (retain) WFRealmWorkflowQuarantine * quarantine;                                                 //@synthesize quarantine=_quarantine - In the implementation block
@property (assign) BOOL hiddenFromLibraryAndSync;                                                          //@synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync - In the implementation block
@property (retain) WFWorkflowTrustedResources * trustedResources;                                          //@synthesize trustedResources=_trustedResources - In the implementation block
@property (retain) RLMArray*<WFWorkflowType> workflowTypeContainers;                                       //@synthesize workflowTypeContainers=_workflowTypeContainers - In the implementation block
@property (retain) RLMArray*<WFWorkflowInputClass> inputClassContainers;                                   //@synthesize inputClassContainers=_inputClassContainers - In the implementation block
@property (getter=isHiddenInComplication) BOOL hiddenInComplication;                                       //@synthesize hiddenInComplication=_hiddenInComplication - In the implementation block
@property (assign) long long sortOrdering;                                                                 //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (copy) NSString * minimumClientVersion;                                                          //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (copy) NSData * actionsData;                                                                     //@synthesize actionsData=_actionsData - In the implementation block
@property (copy) NSData * importQuestionsData;                                                             //@synthesize importQuestionsData=_importQuestionsData - In the implementation block
@property (copy) NSString * workflowSubtitle;                                                              //@synthesize workflowSubtitle=_workflowSubtitle - In the implementation block
@property (copy) NSString * actionsDescription;                                                            //@synthesize actionsDescription=_actionsDescription - In the implementation block
@property (copy) NSString * associatedAppBundleIdentifier;                                                 //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (copy) NSString * galleryIdentifier;                                                             //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (copy) NSString * source;                                                                        //@synthesize source=_source - In the implementation block
@property (retain) WFRealmWorkflow * conflictOf;                                                           //@synthesize conflictOf=_conflictOf - In the implementation block
@property (readonly) RLMLinkingObjects * conflictingWorkflows;                                             //@synthesize conflictingWorkflows=_conflictingWorkflows - In the implementation block
@property (copy) NSString * lastSavedOnDeviceName;                                                         //@synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName - In the implementation block
@property (assign) long long lastSyncedHash;                                                               //@synthesize lastSyncedHash=_lastSyncedHash - In the implementation block
@property (assign) BOOL deleted;                                                                           //@synthesize deleted=_deleted - In the implementation block
@property (copy) NSString * lastMigratedClientVersion;                                                     //@synthesize lastMigratedClientVersion=_lastMigratedClientVersion - In the implementation block
@property (assign) long long remoteQuarantineStatus;                                                       //@synthesize remoteQuarantineStatus=_remoteQuarantineStatus - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * workflowIcon; 
@property (nonatomic,retain) WFWorkflowQuarantine * workflowQuarantine; 
@property (nonatomic,copy) NSArray * workflowTypes; 
@property (nonatomic,copy) NSArray * inputClasses; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * importQuestions; 
@property (nonatomic,copy) NSSet * accessResourcePerWorkflowStates; 
@property (nonatomic,readonly) NSNumber * location; 
@property (getter=isConflictOfOtherWorkflow,nonatomic,readonly) BOOL conflictOfOtherWorkflow; 
@property (nonatomic,readonly) unsigned long long estimatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)className;
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
+(id)ignoredProperties;
-(NSString *)name;
-(void)setSource:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(NSNumber *)location;
-(NSArray *)inputClasses;
-(BOOL)deleted;
-(id)descriptor;
-(NSArray *)actions;
-(WFRealmWorkflowIcon *)icon;
-(void)setIcon:(WFRealmWorkflowIcon *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(long long)sortOrdering;
-(NSString *)associatedAppBundleIdentifier;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(void)setSortOrdering:(long long)arg1 ;
-(unsigned long long)estimatedSize;
-(void)setLastSyncedHash:(long long)arg1 ;
-(BOOL)isConflictOfOtherWorkflow;
-(long long)lastSyncedHash;
-(void)setWorkflowSubtitle:(NSString *)arg1 ;
-(BOOL)hiddenFromLibraryAndSync;
-(NSArray *)workflowTypes;
-(NSString *)actionsDescription;
-(WFWorkflowTrustedResources *)trustedResources;
-(void)setTrustedResources:(WFWorkflowTrustedResources *)arg1 ;
-(void)setConflictOf:(WFRealmWorkflow *)arg1 ;
-(RLMLinkingObjects *)conflictingWorkflows;
-(WFRealmWorkflow *)conflictOf;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(void)setLastSavedOnDeviceName:(NSString *)arg1 ;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
-(id)recordPropertyMap;
-(void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(/*^block*/id)arg2 ;
-(NSString *)workflowSubtitle;
-(WFWorkflowIcon *)workflowIcon;
-(WFRealmWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFRealmWorkflowQuarantine *)arg1 ;
-(void)setWorkflowIcon:(WFWorkflowIcon *)arg1 ;
-(WFWorkflowQuarantine *)workflowQuarantine;
-(void)setWorkflowQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(NSDate *)modifiedAt;
-(NSString *)lastSavedOnDeviceName;
-(void)setAccessResourcePerWorkflowStates:(NSSet *)arg1 ;
-(NSSet *)accessResourcePerWorkflowStates;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)legacyName;
-(void)setLegacyName:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(void)setHiddenInComplication:(BOOL)arg1 ;
-(void)setHiddenFromLibraryAndSync:(BOOL)arg1 ;
-(void)setActionsDescription:(NSString *)arg1 ;
-(RLMArray*<WFWorkflowType>)workflowTypeContainers;
-(void)setWorkflowTypeContainers:(RLMArray*<WFWorkflowType>)arg1 ;
-(RLMArray*<WFWorkflowInputClass>)inputClassContainers;
-(void)setInputClassContainers:(RLMArray*<WFWorkflowInputClass>)arg1 ;
-(BOOL)isHiddenInComplication;
-(NSData *)actionsData;
-(void)setActionsData:(NSData *)arg1 ;
-(NSData *)importQuestionsData;
-(void)setImportQuestionsData:(NSData *)arg1 ;
@end

