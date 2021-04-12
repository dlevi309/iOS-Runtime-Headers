/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRecord.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, WFWorkflowIcon, NSDate, WFWorkflowQuarantine, NSArray, NSSet, NSNumber;

@interface WFWorkflowRecord : WFRecord <WFNaming> {

	BOOL _hiddenInComplication;
	BOOL _hiddenFromLibraryAndSync;
	BOOL _isDeleted;
	BOOL _conflictOfOtherWorkflow;
	NSString* _name;
	NSString* _legacyName;
	WFWorkflowIcon* _icon;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _workflowSubtitle;
	NSString* _actionsDescription;
	NSString* _associatedAppBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _source;
	WFWorkflowQuarantine* _quarantine;
	NSArray* _workflowTypes;
	NSArray* _inputClasses;
	NSArray* _actions;
	NSArray* _importQuestions;
	NSString* _minimumClientVersion;
	NSString* _lastMigratedClientVersion;
	long long _lastSyncedHash;
	NSString* _lastSavedOnDeviceName;
	unsigned long long _estimatedSize;
	NSSet* _accessResourcePerWorkflowStates;
	long long _remoteQuarantineStatus;
	NSNumber* _location;
	unsigned long long _cachedSyncHash;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * legacyName;                                                          //@synthesize legacyName=_legacyName - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon;                                                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy) NSString * workflowSubtitle;                                                    //@synthesize workflowSubtitle=_workflowSubtitle - In the implementation block
@property (nonatomic,copy) NSString * actionsDescription;                                                  //@synthesize actionsDescription=_actionsDescription - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;                                       //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                                                   //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * source;                                                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) WFWorkflowQuarantine * quarantine;                                            //@synthesize quarantine=_quarantine - In the implementation block
@property (nonatomic,copy) NSArray * workflowTypes;                                                        //@synthesize workflowTypes=_workflowTypes - In the implementation block
@property (nonatomic,copy) NSArray * inputClasses;                                                         //@synthesize inputClasses=_inputClasses - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * importQuestions;                                                      //@synthesize importQuestions=_importQuestions - In the implementation block
@property (nonatomic,copy) NSString * minimumClientVersion;                                                //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (assign,nonatomic) BOOL hiddenInComplication;                                                    //@synthesize hiddenInComplication=_hiddenInComplication - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromLibraryAndSync;                                                //@synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                                                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,copy) NSString * lastMigratedClientVersion;                                           //@synthesize lastMigratedClientVersion=_lastMigratedClientVersion - In the implementation block
@property (assign,nonatomic) long long lastSyncedHash;                                                     //@synthesize lastSyncedHash=_lastSyncedHash - In the implementation block
@property (nonatomic,copy) NSString * lastSavedOnDeviceName;                                               //@synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSize;                                           //@synthesize estimatedSize=_estimatedSize - In the implementation block
@property (nonatomic,copy) NSSet * accessResourcePerWorkflowStates;                                        //@synthesize accessResourcePerWorkflowStates=_accessResourcePerWorkflowStates - In the implementation block
@property (assign,nonatomic) long long remoteQuarantineStatus;                                             //@synthesize remoteQuarantineStatus=_remoteQuarantineStatus - In the implementation block
@property (nonatomic,readonly) NSNumber * location;                                                        //@synthesize location=_location - In the implementation block
@property (getter=isConflictOfOtherWorkflow,nonatomic,readonly) BOOL conflictOfOtherWorkflow;              //@synthesize conflictOfOtherWorkflow=_conflictOfOtherWorkflow - In the implementation block
@property (assign,nonatomic) unsigned long long cachedSyncHash;                                            //@synthesize cachedSyncHash=_cachedSyncHash - In the implementation block
+(id)defaultPropertyValues;
-(NSString *)name;
-(void)setSource:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(NSDate *)modificationDate;
-(NSNumber *)location;
-(NSDate *)creationDate;
-(NSArray *)inputClasses;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSArray *)actions;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)isDeleted;
-(NSString *)associatedAppBundleIdentifier;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)syncHash;
-(unsigned long long)estimatedSize;
-(void)setLastSyncedHash:(long long)arg1 ;
-(BOOL)isConflictOfOtherWorkflow;
-(long long)lastSyncedHash;
-(unsigned long long)cachedSyncHash;
-(BOOL)isEquivalentForSyncTo:(id)arg1 ;
-(void)setWorkflowSubtitle:(NSString *)arg1 ;
-(BOOL)hiddenFromLibraryAndSync;
-(NSArray *)workflowTypes;
-(NSString *)wfName;
-(id)fileRepresentation;
-(NSString *)actionsDescription;
-(void)setLastSavedOnDeviceName:(NSString *)arg1 ;
-(NSString *)workflowSubtitle;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(BOOL)saveChangesToStorage:(id)arg1 error:(id*)arg2 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(void)setCachedSyncHash:(unsigned long long)arg1 ;
-(NSString *)lastSavedOnDeviceName;
-(void)setAccessResourcePerWorkflowStates:(NSSet *)arg1 ;
-(NSSet *)accessResourcePerWorkflowStates;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)legacyName;
-(void)setLegacyName:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(BOOL)hiddenInComplication;
-(void)setHiddenInComplication:(BOOL)arg1 ;
-(void)setHiddenFromLibraryAndSync:(BOOL)arg1 ;
-(void)setActionsDescription:(NSString *)arg1 ;
@end

