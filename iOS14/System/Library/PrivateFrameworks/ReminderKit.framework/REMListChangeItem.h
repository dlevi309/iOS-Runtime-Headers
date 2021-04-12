/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMConflictResolving.h>
#import <libobjc.A.dylib/REMSaveRequestTrackedValue.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>

@class REMSaveRequest, REMListStorage, REMChangedKeysObserver, REMAccount, REMObjectID, NSData, NSOrderedSet, NSString, NSDictionary, NSSet, NSArray, REMAccountCapabilities, NSDate, REMListCalDAVNotificationContextChangeItem, REMListShareeContextChangeItem, REMColor, REMListAppearanceContextChangeItem, REMListSublistContextChangeItem, REMResolutionTokenMap;

@interface REMListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSortingStyleReadWriteProtocol> {

	REMSaveRequest* _saveRequest;
	REMListStorage* _storage;
	REMChangedKeysObserver* _changedKeysObserver;
	REMAccount* _parentAccount;

}

@property (nonatomic,retain) REMChangedKeysObserver * changedKeysObserver;                                          //@synthesize changedKeysObserver=_changedKeysObserver - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,retain) REMObjectID * objectID; 
@property (nonatomic,retain) REMObjectID * parentAccountID; 
@property (nonatomic,retain) REMObjectID * accountID; 
@property (nonatomic,readonly) NSData * reminderIDsMergeableOrderingData; 
@property (nonatomic,readonly) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,retain) NSString * badgeEmblem; 
@property (assign,nonatomic) BOOL showingLargeAttachments; 
@property (nonatomic,retain) NSDictionary * reminderIDsOrderingHints; 
@property (nonatomic,retain) NSSet * reminderIDsToUndelete; 
@property (nonatomic,retain) NSArray * calDAVNotifications; 
@property (nonatomic,retain) NSArray * sharees; 
@property (nonatomic,retain) REMObjectID * sharedOwnerID; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL remindersICSDisplayOrderChanged; 
@property (nonatomic,readonly) REMAccount * parentAccount;                                                          //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,copy,readonly) REMListStorage * storage;                                                       //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) REMAccountCapabilities * accountCapabilities; 
@property (nonatomic,readonly) BOOL isGroup; 
@property (nonatomic,retain) REMObjectID * parentListID; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSString * sharedOwnerAddress; 
@property (assign,nonatomic) long long sharingStatus; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isSharedToMe; 
@property (nonatomic,readonly) BOOL canBeIncludedInGroup; 
@property (nonatomic,readonly) NSString * currentUserShareParticipantID; 
@property (nonatomic,copy) NSDate * lastUserAccessDate; 
@property (nonatomic,retain) NSString * daExternalIdentificationTag; 
@property (nonatomic,retain) NSDictionary * daBulkRequests; 
@property (assign,nonatomic) long long daDisplayOrder; 
@property (assign,nonatomic) BOOL daIsEventOnlyContainer; 
@property (assign,nonatomic) BOOL daIsReadOnly; 
@property (assign,nonatomic) BOOL daIsImmutable; 
@property (assign,nonatomic) BOOL daIsNotificationsCollection; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) REMListCalDAVNotificationContextChangeItem * calDAVNotificationContext; 
@property (nonatomic,readonly) REMListShareeContextChangeItem * shareeContext; 
@property (nonatomic,readonly) REMSaveRequest * saveRequest;                                                        //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) REMColor * color; 
@property (nonatomic,readonly) REMListAppearanceContextChangeItem * appearanceContext; 
@property (nonatomic,readonly) REMListSublistContextChangeItem * sublistContext; 
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,retain) NSData * resolutionTokenMapData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
+(void)initialize;
-(id)ekColor;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)canBeIncludedInGroup;
-(id)changedKeys;
-(REMListStorage *)storage;
-(BOOL)isSharedToMe;
-(REMListAppearanceContextChangeItem *)appearanceContext;
-(id)valueForUndefinedKey:(id)arg1 ;
-(REMAccount *)parentAccount;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMSaveRequest *)saveRequest;
-(NSString *)description;
-(void)addReminderChangeItem:(id)arg1 ;
-(void)removeFromParent;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4 ;
-(void)lowLevelAddReminderIDToOrdering:(id)arg1 withParentReminderChangeItem:(id)arg2 ;
-(REMAccountCapabilities *)accountCapabilities;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(BOOL)arg4 ;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(void)insertReminderChangeItem:(id)arg1 adjacentToReminderChangeItem:(id)arg2 isAfter:(BOOL)arg3 withParentReminderChangeItem:(id)arg4 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(BOOL)arg4 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoListSublistContextChangeItem:(id)arg3 ;
-(REMChangedKeysObserver *)changedKeysObserver;
-(BOOL)isShared;
-(id)lowLevelRemoveReminderIDFromOrdering:(id)arg1 ;
-(id)resolutionTokenKeyForChangedKey:(id)arg1 ;
-(id)shallowCopyWithSaveRequest:(id)arg1 ;
-(void)setChangedKeysObserver:(REMChangedKeysObserver *)arg1 ;
-(REMListShareeContextChangeItem *)shareeContext;
-(void)undeleteReminderWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(REMListSublistContextChangeItem *)sublistContext;
-(void)setDaIsNotificationsCollection:(BOOL)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(BOOL)arg4 withParentList:(id)arg5 ;
-(id)removeFromAccountAllowingUndo;
-(BOOL)_lowLevelAddReminderIDToOrdering:(id)arg1 relativeToSiblingID:(id)arg2 isAfter:(BOOL)arg3 ;
-(void)_editReminderIDsOrderingUsingBlock:(/*^block*/id)arg1 ;
-(void)_reassignReminderChangeItem:(id)arg1 withParentReminderChangeItem:(id)arg2 ;
-(void)_lowLevelAddReminderChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(BOOL)arg3 withParent:(id)arg4 ;
-(id)removeFromParentAllowingUndo;
-(void)_testingOnly_setReminderIDsMergeableOrder:(id)arg1 ;
-(BOOL)optimisticallyInsertReminderIDToOrderingForReminderChangeItemBeingSaved:(id)arg1 ;
-(void)undeleteRemindersWithoutUndoWithIDs:(id)arg1 isCalDAV:(BOOL)arg2 ;
-(void)copyListDataFrom:(id)arg1 ;
-(REMListCalDAVNotificationContextChangeItem *)calDAVNotificationContext;
-(void)setDaDisplayOrder:(long long)arg1 ;
-(void)_lowLevelApplyUndoToOrdering:(id)arg1 ;
@end

