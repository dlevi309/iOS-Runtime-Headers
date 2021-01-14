/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMStore, REMAccountStorage, REMAccountCapabilities, REMResolutionTokenMap, NSData, NSSet, NSString, NSOrderedSet, REMCRMergeableOrderedSet, REMAccountGroupContext, REMObjectID;

@interface REMAccount : NSObject <REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	BOOL _markedForRemoval;
	REMStore* _store;
	REMAccountStorage* _storage;
	REMAccountCapabilities* _capabilities;

}

@property (assign,nonatomic) BOOL markedForRemoval;                                              //@synthesize markedForRemoval=_markedForRemoval - In the implementation block
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
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
+(id)localInternalAccountID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)localAccountID;
+(id)newObjectID;
+(id)_accountTypeMaskWithBitMask:(long long)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)externalIdentifierForMarkedForDeletionObject;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)canCopyReminderLosslesslyToAccount:(id)arg1 ;
-(BOOL)markedForRemoval;
-(REMAccountCapabilities *)capabilities;
-(void)setCapabilities:(REMAccountCapabilities *)arg1 ;
-(void)setStore:(REMStore *)arg1 ;
-(id)fetchListsWithError:(id*)arg1 ;
-(void)setMarkedForRemoval:(BOOL)arg1 ;
-(REMObjectID *)remObjectID;
-(REMStore *)store;
-(REMAccountStorage *)storage;
-(REMAccountGroupContext *)groupContext;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)debugDescription;
-(BOOL)supportsSharingLists;
-(BOOL)daSupportsPhoneNumbers;
-(id)fetchListsIncludingSpecialContainersWithError:(id*)arg1 ;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(BOOL)MCIsManagedWithResultPtr:(BOOL*)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(NSOrderedSet *)listIDsOrdering;
-(BOOL)isConsideredEmptyWithResultPtr:(BOOL*)arg1 withError:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

