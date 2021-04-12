/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSString, REMObjectID, REMCRMergeableOrderedSet, REMResolutionTokenMap, NSSet;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {

	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	os_unfair_lock_s _lock;
	BOOL _markedForRemoval;
	BOOL _listsDADisplayOrderChanged;
	BOOL _inactive;
	BOOL _didChooseToMigrate;
	BOOL _didChooseToMigrateLocally;
	BOOL _didFinishMigration;
	BOOL _daAllowsCalendarAddDeleteModify;
	BOOL _daSupportsSharedCalendars;
	BOOL _daWasMigrated;
	NSString* externalIdentifier;
	NSString* externalModificationTag;
	NSString* daSyncToken;
	NSString* daPushKey;
	REMObjectID* _objectID;
	long long _type;
	NSString* _name;
	REMCRMergeableOrderedSet* _listIDsMergeableOrdering;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSSet* _listIDsToUndelete;
	NSString* _daConstraintsDescriptionPath;

}

@property (nonatomic,retain) REMObjectID * objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) REMCRMergeableOrderedSet * listIDsMergeableOrdering;              //@synthesize listIDsMergeableOrdering=_listIDsMergeableOrdering - In the implementation block
@property (assign,nonatomic) BOOL markedForRemoval;                                            //@synthesize markedForRemoval=_markedForRemoval - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;                       //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSSet * listIDsToUndelete;                                        //@synthesize listIDsToUndelete=_listIDsToUndelete - In the implementation block
@property (assign,nonatomic) BOOL listsDADisplayOrderChanged;                                  //@synthesize listsDADisplayOrderChanged=_listsDADisplayOrderChanged - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                                    //@synthesize inactive=_inactive - In the implementation block
@property (assign,nonatomic) BOOL didChooseToMigrate;                                          //@synthesize didChooseToMigrate=_didChooseToMigrate - In the implementation block
@property (assign,nonatomic) BOOL didChooseToMigrateLocally;                                   //@synthesize didChooseToMigrateLocally=_didChooseToMigrateLocally - In the implementation block
@property (assign,nonatomic) BOOL didFinishMigration;                                          //@synthesize didFinishMigration=_didFinishMigration - In the implementation block
@property (nonatomic,copy) NSString * daConstraintsDescriptionPath;                            //@synthesize daConstraintsDescriptionPath=_daConstraintsDescriptionPath - In the implementation block
@property (assign,nonatomic) BOOL daAllowsCalendarAddDeleteModify;                             //@synthesize daAllowsCalendarAddDeleteModify=_daAllowsCalendarAddDeleteModify - In the implementation block
@property (assign,nonatomic) BOOL daSupportsSharedCalendars;                                   //@synthesize daSupportsSharedCalendars=_daSupportsSharedCalendars - In the implementation block
@property (assign,nonatomic) BOOL daWasMigrated;                                               //@synthesize daWasMigrated=_daWasMigrated - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(REMObjectID *)objectID;
-(BOOL)inactive;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(NSString *)daSyncToken;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(NSString *)daPushKey;
-(void)setDaPushKey:(NSString *)arg1 ;
-(unsigned long long)storeGeneration;
-(REMObjectID *)remObjectID;
-(id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 listIDsMergeableOrdering:(id)arg4 ;
-(REMCRMergeableOrderedSet *)listIDsMergeableOrdering;
-(NSSet *)listIDsToUndelete;
-(void)setListIDsToUndelete:(NSSet *)arg1 ;
-(BOOL)listsDADisplayOrderChanged;
-(void)setListsDADisplayOrderChanged:(BOOL)arg1 ;
-(BOOL)didChooseToMigrate;
-(void)setDidChooseToMigrate:(BOOL)arg1 ;
-(BOOL)didChooseToMigrateLocally;
-(void)setDidChooseToMigrateLocally:(BOOL)arg1 ;
-(BOOL)didFinishMigration;
-(void)setDidFinishMigration:(BOOL)arg1 ;
-(NSString *)daConstraintsDescriptionPath;
-(void)setDaConstraintsDescriptionPath:(NSString *)arg1 ;
-(BOOL)daAllowsCalendarAddDeleteModify;
-(void)setDaAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(BOOL)daSupportsSharedCalendars;
-(void)setDaSupportsSharedCalendars:(BOOL)arg1 ;
-(BOOL)daWasMigrated;
-(void)setDaWasMigrated:(BOOL)arg1 ;
-(void)setMarkedForRemoval:(BOOL)arg1 ;
-(BOOL)markedForRemoval;
-(id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 ;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(id)listIDsMergeableOrderingReplicaIDSource;
-(void)setListIDsMergeableOrdering:(REMCRMergeableOrderedSet *)arg1 ;
@end

