/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMDAChangeTrackableFetchableModel.h>
#import <libobjc.A.dylib/REMDAChangedModelObjectResult.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>
#import <libobjc.A.dylib/REMSortingStyleReadonlyProtocol.h>

@class REMStore, REMListStorage, REMAccount, NSString, REMObjectID, NSDictionary, NSSet, NSArray, NSOrderedSet, NSData, REMResolutionTokenMap, NSDate, REMListCalDAVNotificationContext, REMListShareeContext, REMColor, REMListAppearanceContext, REMListSublistContext;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSortingStyleReadonlyProtocol> {

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
@property (nonatomic,readonly) NSDictionary * reminderIDsOrderingHints; 
@property (nonatomic,readonly) NSSet * reminderIDsToUndelete; 
@property (nonatomic,readonly) BOOL remindersICSDisplayOrderChanged; 
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
@property (nonatomic,readonly) NSArray * sharees; 
@property (nonatomic,readonly) REMObjectID * sharedOwnerID; 
@property (nonatomic,readonly) NSString * currentUserShareParticipantID; 
@property (nonatomic,copy) REMListStorage * storage;                                                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * reminderIDsOrdering; 
@property (nonatomic,readonly) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,readonly) NSData * reminderIDsMergeableOrderingData; 
@property (nonatomic,readonly) BOOL isGroup; 
@property (nonatomic,retain) REMList * parentList;                                                        //@synthesize parentList=_parentList - In the implementation block
@property (nonatomic,readonly) NSString * badgeEmblem; 
@property (nonatomic,readonly) BOOL showingLargeAttachments; 
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
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
@property (nonatomic,readonly) NSString * sortingStyle; 
@property (nonatomic,readonly) long long sortingDirection; 
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsLazyDelete;
+(BOOL)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2 ;
+(BOOL)rem_DA_supportsFetching;
+(id)rem_DA_lazyDeleteProperties;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(BOOL)isChangeTrackableModel;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(id)cdEntityName;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(BOOL)isChangeTrackableFetchableModel;
+(id)newObjectID;
+(id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 ;
+(id)siriFoundInAppsListID;
+(id)localAccountDefaultListID;
-(id)ekColor;
-(REMAccount *)account;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(REMListStorage *)arg1 ;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(BOOL)isOwnedByMe;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)canBeIncludedInGroup;
-(BOOL)canBeShared;
-(REMObjectID *)remObjectID;
-(REMStore *)store;
-(REMListStorage *)storage;
-(BOOL)isSharedToMe;
-(REMListAppearanceContext *)appearanceContext;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)debugDescription;
-(id)formattedSharedOwnerName;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setParentList:(REMList *)arg1 ;
-(id)fetchRemindersAndSubtasksWithError:(id*)arg1 ;
-(void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1 ;
-(id)fetchRemindersWithError:(id*)arg1 ;
-(id)sharingStatusText;
-(REMList *)parentList;
-(unsigned long long)hash;
-(id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3 ;
-(BOOL)isShared;
-(REMListShareeContext *)shareeContext;
-(REMListSublistContext *)sublistContext;
-(NSOrderedSet *)reminderIDsOrdering;
-(BOOL)isEqual:(id)arg1 ;
-(REMListCalDAVNotificationContext *)calDAVNotificationContext;
@end

