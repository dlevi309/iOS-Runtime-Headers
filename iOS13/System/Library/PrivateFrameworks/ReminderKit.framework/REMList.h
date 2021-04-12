/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMDAChangeTrackableFetchableModel.h>
#import <libobjc.A.dylib/REMDAChangedModelObjectResult.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMStore, REMListStorage, REMAccount, NSString, REMObjectID, NSSet, NSArray, NSOrderedSet, NSData, REMResolutionTokenMap, NSDate, NSDictionary, REMListCalDAVNotificationContext, REMListShareeContext, REMColor, REMListAppearanceContext, REMListSublistContext;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	REMStore* _store;
	REMListStorage* _storage;
	REMAccount* _account;
	REMList* _parentList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (nonatomic,readonly) REMObjectID * parentAccountID; 
@property (nonatomic,readonly) NSSet * reminderIDsToUndelete; 
@property (nonatomic,readonly) BOOL remindersICSDisplayOrderChanged; 
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
@property (nonatomic,readonly) NSArray * sharees; 
@property (nonatomic,readonly) REMObjectID * sharedOwnerID; 
@property (nonatomic,copy) REMListStorage * storage;                                                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * reminderIDsOrdering; 
@property (nonatomic,readonly) NSData * reminderIDsMergeableOrderingData; 
@property (nonatomic,readonly) BOOL isGroup; 
@property (nonatomic,retain) REMList * parentList;                                                        //@synthesize parentList=_parentList - In the implementation block
@property (nonatomic,readonly) NSString * badgeEmblem; 
@property (nonatomic,readonly) BOOL showingLargeAttachments; 
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) REMObjectID * parentListID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) long long sharingStatus; 
@property (nonatomic,readonly) BOOL canBeShared; 
@property (nonatomic,readonly) BOOL canBeIncludedInGroup; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isOwnedByMe; 
@property (nonatomic,readonly) BOOL isSharedToMe; 
@property (nonatomic,copy,readonly) NSDate * lastUserAccessDate; 
@property (nonatomic,readonly) NSString * daExternalIdentificationTag; 
@property (nonatomic,readonly) NSDictionary * daBulkRequests; 
@property (nonatomic,readonly) long long daDisplayOrder; 
@property (nonatomic,readonly) BOOL daIsEventOnlyContainer; 
@property (nonatomic,readonly) BOOL daIsReadOnly; 
@property (nonatomic,readonly) BOOL daIsImmutable; 
@property (nonatomic,readonly) BOOL daIsNotificationsCollection; 
@property (nonatomic,readonly) REMListCalDAVNotificationContext * calDAVNotificationContext; 
@property (nonatomic,readonly) REMListShareeContext * shareeContext; 
@property (assign,nonatomic) BOOL isPlaceholder; 
@property (nonatomic,readonly) REMStore * store;                                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) REMAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMColor * color; 
@property (nonatomic,readonly) REMListAppearanceContext * appearanceContext; 
@property (nonatomic,readonly) REMListSublistContext * sublistContext; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
+(id)cdEntityName;
+(id)newObjectID;
+(id)siriFoundInAppsListID;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)rem_DA_supportsLazyDelete;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(id)localAccountDefaultListID;
+(BOOL)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2 ;
+(id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMListStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(REMStore *)store;
-(void)setStorage:(REMListStorage *)arg1 ;
-(REMAccount *)account;
-(BOOL)isShared;
-(BOOL)canBeShared;
-(REMObjectID *)remObjectID;
-(id)fetchRemindersWithError:(id*)arg1 ;
-(REMListSublistContext *)sublistContext;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3 ;
-(void)setParentList:(REMList *)arg1 ;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(REMList *)parentList;
-(id)ekColor;
-(BOOL)isSharedToMe;
-(REMListShareeContext *)shareeContext;
-(id)formattedSharedOwnerName;
-(BOOL)isOwnedByMe;
-(REMListAppearanceContext *)appearanceContext;
-(REMListCalDAVNotificationContext *)calDAVNotificationContext;
-(NSOrderedSet *)reminderIDsOrdering;
-(BOOL)canBeIncludedInGroup;
-(id)fetchRemindersAndSubtasksWithError:(id*)arg1 ;
-(id)sharingStatusText;
-(void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1 ;
@end

