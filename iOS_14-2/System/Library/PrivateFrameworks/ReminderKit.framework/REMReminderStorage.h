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

@class REMCRMergeableStringDocument, NSString, REMObjectID, NSData, REMResolutionTokenMap, NSDate, NSSet, NSDateComponents, NSArray, REMContactRepresentation, NSURL, REMUserActivity, REMDisplayDate;

@interface REMReminderStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {

	BOOL _hasDeserializedTitleDocument;
	BOOL _hasDeserializedNotesDocument;
	REMCRMergeableStringDocument* _deserializedTitleDocumentCache;
	REMCRMergeableStringDocument* _deserializedNotesDocumentCache;
	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	BOOL _completed;
	BOOL _allDay;
	NSString* externalIdentifier;
	NSString* externalModificationTag;
	NSString* daSyncToken;
	NSString* daPushKey;
	REMObjectID* _accountID;
	REMObjectID* _objectID;
	REMObjectID* _listID;
	REMObjectID* _parentReminderID;
	NSData* _titleDocumentData;
	NSData* _notesDocumentData;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;
	NSDate* _completionDate;
	NSSet* _subtaskIDsToUndelete;
	unsigned long long _priority;
	NSDateComponents* _startDateComponents;
	NSDateComponents* _dueDateComponents;
	NSString* _timeZone;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSArray* _recurrenceRules;
	NSArray* _attachments;
	NSArray* _alarms;
	REMContactRepresentation* _contactHandles;
	unsigned long long _icsDisplayOrder;
	NSURL* _icsUrl;
	NSData* _importedICSData;
	NSString* _daCalendarItemUniqueIdentifier;
	REMUserActivity* _userActivity;
	NSData* _siriFoundInAppsData;
	long long _siriFoundInAppsUserConfirmation;
	NSDate* _lastBannerPresentationDate;
	long long _flagged;
	NSSet* _assignments;
	REMDisplayDate* _displayDate;

}

@property (nonatomic,retain) REMObjectID * accountID;                                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * objectID;                                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) REMObjectID * listID;                                        //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentReminderID;                              //@synthesize parentReminderID=_parentReminderID - In the implementation block
@property (nonatomic,retain) NSData * titleDocumentData;                                  //@synthesize titleDocumentData=_titleDocumentData - In the implementation block
@property (nonatomic,retain) NSData * notesDocumentData;                                  //@synthesize notesDocumentData=_notesDocumentData - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;                  //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                             //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;                           //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSDate * completionDate;                                       //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSSet * subtaskIDsToUndelete;                                //@synthesize subtaskIDsToUndelete=_subtaskIDsToUndelete - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDateComponents;                        //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;                          //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,copy) NSString * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                                     //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSArray * recurrenceRules;                                   //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                       //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                            //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) REMContactRepresentation * contactHandles;                   //@synthesize contactHandles=_contactHandles - In the implementation block
@property (assign,nonatomic) unsigned long long icsDisplayOrder;                          //@synthesize icsDisplayOrder=_icsDisplayOrder - In the implementation block
@property (nonatomic,copy) NSURL * icsUrl;                                                //@synthesize icsUrl=_icsUrl - In the implementation block
@property (nonatomic,retain) NSData * importedICSData;                                    //@synthesize importedICSData=_importedICSData - In the implementation block
@property (nonatomic,copy) NSString * daCalendarItemUniqueIdentifier;                     //@synthesize daCalendarItemUniqueIdentifier=_daCalendarItemUniqueIdentifier - In the implementation block
@property (nonatomic,copy) REMUserActivity * userActivity;                                //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,copy) NSData * siriFoundInAppsData;                                  //@synthesize siriFoundInAppsData=_siriFoundInAppsData - In the implementation block
@property (assign,nonatomic) long long siriFoundInAppsUserConfirmation;                   //@synthesize siriFoundInAppsUserConfirmation=_siriFoundInAppsUserConfirmation - In the implementation block
@property (nonatomic,copy) NSDate * lastBannerPresentationDate;                           //@synthesize lastBannerPresentationDate=_lastBannerPresentationDate - In the implementation block
@property (assign,nonatomic) long long flagged;                                           //@synthesize flagged=_flagged - In the implementation block
@property (nonatomic,readonly) BOOL isOverdue; 
@property (nonatomic,readonly) BOOL isRecurrent; 
@property (nonatomic,retain) NSSet * assignments;                                         //@synthesize assignments=_assignments - In the implementation block
@property (nonatomic,copy) REMDisplayDate * displayDate;                                  //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyNotificationIdentifier; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(BOOL)supportsSecureCoding;
+(id)notesReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2 ;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)titleReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2 ;
+(BOOL)isDate:(id)arg1 overdueAtReferenceDate:(id)arg2 allDay:(BOOL)arg3 showAllDayRemindersAsOverdue:(BOOL)arg4 ;
-(NSArray *)alarms;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(REMUserActivity *)userActivity;
-(REMObjectID *)accountID;
-(NSString *)daPushKey;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSArray *)recurrenceRules;
-(void)setDaPushKey:(NSString *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(REMDisplayDate *)displayDate;
-(NSString *)daSyncToken;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(NSString *)timeZone;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSData *)resolutionTokenMapData;
-(void)setTimeZone:(NSString *)arg1 ;
-(unsigned long long)storeGeneration;
-(NSArray *)attachments;
-(REMObjectID *)remObjectID;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(long long)flagged;
-(NSURL *)icsUrl;
-(void)setFlagged:(long long)arg1 ;
-(id)cdKeyToStorageKeyMap;
-(NSDate *)lastModifiedDate;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSSet *)assignments;
-(NSString *)externalModificationTag;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(BOOL)allDay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)externalIdentifier;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setIcsUrl:(NSURL *)arg1 ;
-(NSDate *)creationDate;
-(REMContactRepresentation *)contactHandles;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(void)setDaCalendarItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)daCalendarItemUniqueIdentifier;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(BOOL)isCompleted;
-(NSDateComponents *)startDateComponents;
-(void)setUserActivity:(REMUserActivity *)arg1 ;
-(void)setDisplayDate:(REMDisplayDate *)arg1 ;
-(unsigned long long)hash;
-(void)setContactHandles:(REMContactRepresentation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImportedICSData:(NSData *)arg1 ;
-(void)setIcsDisplayOrder:(unsigned long long)arg1 ;
-(id)titleReplicaIDSource;
-(id)initWithObjectID:(id)arg1 listID:(id)arg2 accountID:(id)arg3 ;
-(void)setTitleDocument:(id)arg1 ;
-(void)setParentReminderID:(REMObjectID *)arg1 ;
-(id)datesDebugDescriptionInTimeZone:(id)arg1 ;
-(REMObjectID *)parentReminderID;
-(NSDate *)lastBannerPresentationDate;
-(void)setLastBannerPresentationDate:(NSDate *)arg1 ;
-(REMObjectID *)listID;
-(id)titleDocument;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(id)notesDocument;
-(id)notesReplicaIDSource;
-(void)setNotesDocument:(id)arg1 ;
-(void)updateDisplayDate;
-(unsigned long long)icsDisplayOrder;
-(void)setListID:(REMObjectID *)arg1 ;
-(void)setAssignments:(NSSet *)arg1 ;
-(void)setSiriFoundInAppsUserConfirmation:(long long)arg1 ;
-(NSSet *)subtaskIDsToUndelete;
-(void)setSubtaskIDsToUndelete:(NSSet *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOverdue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)completionDate;
-(NSData *)titleDocumentData;
-(void)setTitleDocumentData:(NSData *)arg1 ;
-(NSData *)notesDocumentData;
-(NSData *)importedICSData;
-(void)setNotesDocumentData:(NSData *)arg1 ;
-(NSData *)siriFoundInAppsData;
-(void)setSiriFoundInAppsData:(NSData *)arg1 ;
-(long long)siriFoundInAppsUserConfirmation;
-(BOOL)isRecurrent;
-(NSString *)legacyNotificationIdentifier;
@end

