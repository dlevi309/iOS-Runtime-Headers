/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSString, REMObjectID, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, NSData;

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
	NSSet* _listIDsToUndelete;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;
	NSString* _daConstraintsDescriptionPath;

}

@property (nonatomic,retain) REMObjectID * objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) REMCRMergeableOrderedSet * listIDsMergeableOrdering;              //@synthesize listIDsMergeableOrdering=_listIDsMergeableOrdering - In the implementation block
@property (assign,nonatomic) BOOL markedForRemoval;                                            //@synthesize markedForRemoval=_markedForRemoval - In the implementation block
@property (nonatomic,retain) NSSet * listIDsToUndelete;                                        //@synthesize listIDsToUndelete=_listIDsToUndelete - In the implementation block
@property (assign,nonatomic) BOOL listsDADisplayOrderChanged;                                  //@synthesize listsDADisplayOrderChanged=_listsDADisplayOrderChanged - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;                       //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                                  //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
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
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg1 ;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(NSString *)daPushKey;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(void)setDaPushKey:(NSString *)arg1 ;
-(BOOL)inactive;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)daSyncToken;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(id)listIDsMergeableOrderingReplicaIDSource;
-(id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 ;
-(NSData *)resolutionTokenMapData;
-(BOOL)markedForRemoval;
-(REMCRMergeableOrderedSet *)listIDsMergeableOrdering;
-(unsigned long long)storeGeneration;
-(void)setMarkedForRemoval:(BOOL)arg1 ;
-(REMObjectID *)remObjectID;
-(void)setListIDsToUndelete:(NSSet *)arg1 ;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(void)setDaConstraintsDescriptionPath:(NSString *)arg1 ;
-(id)cdKeyToStorageKeyMap;
-(NSString *)daConstraintsDescriptionPath;
-(BOOL)daWasMigrated;
-(BOOL)daSupportsSharedCalendars;
-(NSString *)externalModificationTag;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setDaSupportsSharedCalendars:(BOOL)arg1 ;
-(NSSet *)listIDsToUndelete;
-(NSString *)externalIdentifier;
-(void)setType:(long long)arg1 ;
-(void)setDaWasMigrated:(BOOL)arg1 ;
-(REMObjectID *)objectID;
-(NSString *)name;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 listIDsMergeableOrdering:(id)arg4 ;
-(id)description;
-(BOOL)daAllowsCalendarAddDeleteModify;
-(void)setDidFinishMigration:(BOOL)arg1 ;
-(void)setListsDADisplayOrderChanged:(BOOL)arg1 ;
-(BOOL)listsDADisplayOrderChanged;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(void)setListIDsMergeableOrdering:(REMCRMergeableOrderedSet *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)didChooseToMigrate;
-(void)setDaAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(BOOL)didFinishMigration;
-(BOOL)didChooseToMigrateLocally;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDidChooseToMigrate:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDidChooseToMigrateLocally:(BOOL)arg1 ;
@end

