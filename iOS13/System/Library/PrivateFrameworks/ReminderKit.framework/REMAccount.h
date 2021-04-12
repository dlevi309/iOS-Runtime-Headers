/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMStore, REMAccountStorage, REMAccountCapabilities, REMResolutionTokenMap, NSSet, NSString, NSOrderedSet, REMCRMergeableOrderedSet, REMAccountGroupContext, REMObjectID;

@interface REMAccount : NSObject <REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	BOOL _markedForRemoval;
	REMStore* _store;
	REMAccountStorage* _storage;
	REMAccountCapabilities* _capabilities;

}

@property (assign,nonatomic) BOOL markedForRemoval;                                              //@synthesize markedForRemoval=_markedForRemoval - In the implementation block
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSSet * listIDsToUndelete; 
@property (nonatomic,readonly) BOOL listsDADisplayOrderChanged; 
@property (nonatomic,retain) REMStore * store;                                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) REMAccountStorage * storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) REMAccountCapabilities * capabilities;                              //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,readonly) NSOrderedSet * listIDsOrdering; 
@property (nonatomic,readonly) REMCRMergeableOrderedSet * listIDsMergeableOrdering; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) BOOL inactive; 
@property (nonatomic,readonly) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL didChooseToMigrateLocally; 
@property (nonatomic,readonly) BOOL didFinishMigration; 
@property (nonatomic,readonly) NSString * daConstraintsDescriptionPath; 
@property (nonatomic,readonly) BOOL daAllowsCalendarAddDeleteModify; 
@property (nonatomic,readonly) BOOL daSupportsPhoneNumbers; 
@property (nonatomic,readonly) BOOL daSupportsSharedCalendars; 
@property (nonatomic,readonly) BOOL daWasMigrated; 
@property (nonatomic,readonly) BOOL supportsSharingLists; 
@property (nonatomic,readonly) REMAccountGroupContext * groupContext; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)localAccountID;
+(id)localInternalAccountID;
+(id)_accountTypeMaskWithBitMask:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMAccountStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(REMStore *)store;
-(void)setStore:(REMStore *)arg1 ;
-(REMAccountCapabilities *)capabilities;
-(void)setCapabilities:(REMAccountCapabilities *)arg1 ;
-(REMAccountGroupContext *)groupContext;
-(REMObjectID *)remObjectID;
-(id)fetchListsWithError:(id*)arg1 ;
-(void)setMarkedForRemoval:(BOOL)arg1 ;
-(BOOL)markedForRemoval;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(id)externalIdentifierForMarkedForDeletionObject;
-(BOOL)supportsSharingLists;
-(BOOL)canCopyReminderLosslesslyToAccount:(id)arg1 ;
-(BOOL)isConsideredEmptyWithResultPtr:(BOOL*)arg1 withError:(id*)arg2 ;
-(id)fetchListsIncludingSpecialContainersWithError:(id*)arg1 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSOrderedSet *)listIDsOrdering;
-(BOOL)daSupportsPhoneNumbers;
@end

