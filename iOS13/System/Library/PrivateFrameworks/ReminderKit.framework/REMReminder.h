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

@class REMStore, REMAccount, REMList, REMReminderStorage, NSString, REMObjectID, NSData, REMCRMergeableStringDocument, NSArray, REMResolutionTokenMap, REMContactRepresentation, NSSet, NSURL, REMUserActivity, NSDate, REMDisplayDate, NSAttributedString, NSDateComponents, REMReminderAttachmentContext, REMReminderSubtaskContext, REMReminderFlaggedContext;

@interface REMReminder : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	REMStore* _store;
	REMAccount* _account;
	REMList* _list;
	REMReminderStorage* _storage;
	REMReminder* _parentReminder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (nonatomic,retain) REMObjectID * listID; 
@property (nonatomic,readonly) REMObjectID * parentReminderID; 
@property (nonatomic,retain) REMReminder * parentReminder;                                           //@synthesize parentReminder=_parentReminder - In the implementation block
@property (nonatomic,readonly) REMReminderStorage * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSData * titleDocumentData; 
@property (nonatomic,readonly) REMCRMergeableStringDocument * titleDocument; 
@property (nonatomic,readonly) NSString * titleAsString; 
@property (nonatomic,readonly) NSData * notesDocumentData; 
@property (nonatomic,readonly) REMCRMergeableStringDocument * notesDocument; 
@property (nonatomic,readonly) NSString * notesAsString; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) REMContactRepresentation * contactHandles; 
@property (nonatomic,readonly) NSSet * subtaskIDsToUndelete; 
@property (nonatomic,readonly) NSString * timeZone; 
@property (nonatomic,readonly) BOOL allDay; 
@property (nonatomic,readonly) long long flagged; 
@property (nonatomic,readonly) unsigned long long icsDisplayOrder; 
@property (nonatomic,readonly) NSURL * icsUrl; 
@property (nonatomic,readonly) NSData * importedICSData; 
@property (nonatomic,readonly) NSString * daCalendarItemUniqueIdentifier; 
@property (nonatomic,readonly) REMUserActivity * userActivity; 
@property (nonatomic,readonly) NSData * siriFoundInAppsData; 
@property (nonatomic,readonly) long long siriFoundInAppsUserConfirmation; 
@property (nonatomic,readonly) NSDate * lastBannerPresentationDate; 
@property (nonatomic,copy,readonly) REMDisplayDate * displayDate; 
@property (nonatomic,readonly) BOOL isOverdue; 
@property (nonatomic,readonly) BOOL isRecurrent; 
@property (nonatomic,copy,readonly) NSString * legacyNotificationIdentifier; 
@property (nonatomic,readonly) REMStore * store;                                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) REMAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) REMList * list;                                                       //@synthesize list=_list - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * title; 
@property (nonatomic,copy,readonly) NSAttributedString * notes; 
@property (getter=isCompleted,nonatomic,readonly) BOOL completed; 
@property (nonatomic,copy,readonly) NSDate * completionDate; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,copy,readonly) NSDateComponents * startDateComponents; 
@property (nonatomic,copy,readonly) NSDateComponents * dueDateComponents; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSArray * recurrenceRules; 
@property (nonatomic,readonly) NSArray * alarms; 
@property (nonatomic,readonly) REMReminderAttachmentContext * attachmentContext; 
@property (nonatomic,readonly) REMReminderSubtaskContext * subtaskContext; 
@property (nonatomic,readonly) REMReminderFlaggedContext * flaggedContext; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)rem_DA_supportsLazyDelete;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 ;
+(id)fetchRequestForRemindersListID:(id)arg1 withSortDescriptors:(id)arg2 ;
+(id)fetchRequestForRemindersListID:(id)arg1 ;
+(id)fetchRequestForScheduledRemindersWithDueDateOnOrAfter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMReminderStorage *)storage;
-(NSString *)timeZone;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSAttributedString *)title;
-(REMStore *)store;
-(REMList *)list;
-(REMAccount *)account;
-(NSAttributedString *)notes;
-(BOOL)allDay;
-(REMReminderAttachmentContext *)attachmentContext;
-(NSString *)titleAsString;
-(REMReminderSubtaskContext *)subtaskContext;
-(REMReminderFlaggedContext *)flaggedContext;
-(BOOL)isSubtask;
-(NSString *)notesAsString;
-(REMObjectID *)remObjectID;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(id)initWithStore:(id)arg1 list:(id)arg2 storage:(id)arg3 ;
-(void)setParentReminder:(REMReminder *)arg1 ;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(REMReminder *)parentReminder;
@end

