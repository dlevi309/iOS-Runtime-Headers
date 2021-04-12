/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CalDAVCalendar.h>

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray, MobileCalDAVPrincipal, NSMutableDictionary, CalDAVDBChangeTrackingHelper, CalDiagCalendarCollectionSync;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {

	MobileCalDAVPrincipal* _principal;
	void* _calCalendar;
	NSMutableDictionary* _changesToClear;
	NSString* _calendarURLString;
	BOOL _isScheduleOutbox;
	BOOL _isEnabled;
	BOOL _wasModifiedLocally;
	BOOL _needsResync;
	BOOL _didResync;
	BOOL _isDirty;
	BOOL _needsPublishUpdate;
	BOOL _needsIsAffectingAvailabilityUpdate;
	NSString* _guid;
	long long _maxAttendees;
	unsigned long long _numDownloadedElements;
	unsigned long long _numUploadedElements;
	CalDAVDBChangeTrackingHelper* _changeTracker;
	CalDiagCalendarCollectionSync* _calendarCollectionSyncDiagnostics;
	NSMutableDictionary* _deletedCalendarItems;
	NSArray* _syncActions;
	NSArray* _shareeActions;
	NSArray* _itemsToReportAsJunk;
	NSArray* _recurrenceSplitActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSDictionary* _uuidsToAddActions;
	NSMutableDictionary* _uniqueIdentifierToRecordIDMap;
	NSMutableDictionary* _URLToRecordIDMap;
	NSMutableDictionary* _URLToEtagMap;

}

@property (nonatomic,readonly) MobileCalDAVPrincipal * daPrincipal; 
@property (nonatomic,retain) CalDiagCalendarCollectionSync * calendarCollectionSyncDiagnostics;              //@synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics - In the implementation block
@property (assign,nonatomic,__weak) id<CalDAVPrincipal> principal; 
@property (nonatomic,readonly) void* calCalendar; 
@property (nonatomic,retain) NSString * calendarURLString;                                                   //@synthesize calendarURLString=_calendarURLString - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deletedCalendarItems;                                     //@synthesize deletedCalendarItems=_deletedCalendarItems - In the implementation block
@property (nonatomic,retain) NSArray * syncActions;                                                          //@synthesize syncActions=_syncActions - In the implementation block
@property (nonatomic,retain) NSArray * shareeActions;                                                        //@synthesize shareeActions=_shareeActions - In the implementation block
@property (nonatomic,retain) NSArray * itemsToReportAsJunk;                                                  //@synthesize itemsToReportAsJunk=_itemsToReportAsJunk - In the implementation block
@property (nonatomic,retain) NSArray * recurrenceSplitActions;                                               //@synthesize recurrenceSplitActions=_recurrenceSplitActions - In the implementation block
@property (nonatomic,retain) NSDictionary * hrefsToModDeleteActions;                                         //@synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions - In the implementation block
@property (nonatomic,retain) NSDictionary * uuidsToAddActions;                                               //@synthesize uuidsToAddActions=_uuidsToAddActions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uniqueIdentifierToRecordIDMap;                            //@synthesize uniqueIdentifierToRecordIDMap=_uniqueIdentifierToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToRecordIDMap;                                         //@synthesize URLToRecordIDMap=_URLToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToEtagMap;                                             //@synthesize URLToEtagMap=_URLToEtagMap - In the implementation block
@property (nonatomic,readonly) BOOL mustCalendarBeReadOnly; 
@property (nonatomic,readonly) BOOL shouldCalendarBeHidden; 
@property (nonatomic,retain) NSString * guid;                                                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,readonly) NSString * ownerEmailAddress; 
@property (nonatomic,readonly) NSString * ownerPhoneNumber; 
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) BOOL isTaskContainer; 
@property (assign,nonatomic) BOOL isEventContainer; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isManagedByServer; 
@property (assign,nonatomic) BOOL isScheduleInbox; 
@property (assign,nonatomic) BOOL isScheduleOutbox;                                                          //@synthesize isScheduleOutbox=_isScheduleOutbox - In the implementation block
@property (assign,nonatomic) BOOL isNotification; 
@property (assign,nonatomic) BOOL isEditable; 
@property (assign,nonatomic) BOOL isRenameable; 
@property (assign,nonatomic) BOOL isEnabled;                                                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isAffectingAvailability; 
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL wasModifiedLocally;                                                        //@synthesize wasModifiedLocally=_wasModifiedLocally - In the implementation block
@property (assign,nonatomic) long long maxAttendees;                                                         //@synthesize maxAttendees=_maxAttendees - In the implementation block
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (nonatomic,retain) NSString * syncToken; 
@property (assign,nonatomic) BOOL needsResync;                                                               //@synthesize needsResync=_needsResync - In the implementation block
@property (assign,nonatomic) BOOL didResync;                                                                 //@synthesize didResync=_didResync - In the implementation block
@property (nonatomic,readonly) NSSet * allItemURLs; 
@property (assign,nonatomic) BOOL isDirty;                                                                   //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,readonly) NSString * displayColor; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) NSString * accountID; 
@property (assign,nonatomic) BOOL needsPublishUpdate;                                                        //@synthesize needsPublishUpdate=_needsPublishUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long numDownloadedElements;                                       //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) unsigned long long numUploadedElements;                                         //@synthesize numUploadedElements=_numUploadedElements - In the implementation block
@property (nonatomic,retain) CalDAVDBChangeTrackingHelper * changeTracker;                                   //@synthesize changeTracker=_changeTracker - In the implementation block
@property (assign,nonatomic) BOOL needsIsAffectingAvailabilityUpdate;                                        //@synthesize needsIsAffectingAvailabilityUpdate=_needsIsAffectingAvailabilityUpdate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) BOOL isPoll; 
@property (assign,nonatomic) BOOL isPublished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CFArrayRef)gatherCalendarChangesInPrincipal:(id)arg1 calendars:(id)arg2 adds:(id*)arg3 modifies:(id*)arg4 deletes:(id*)arg5 changeTracker:(id)arg6 ;
+(BOOL)clearCalendarChanges:(CFArrayRef)arg1 forChangeTrackingClient:(id)arg2 ;
+(void)cacheCalendarUID:(int)arg1 forCalendarURLString:(id)arg2 ;
+(id)calURLToUIDCache;
+(void)removeUIDCacheEntryForCalendarURLString:(id)arg1 ;
+(int)cachedCalendarUIDForURLString:(id)arg1 ;
+(BOOL)shouldSkipAddedCalendar:(void*)arg1 ;
+(void)processAddedCalendar:(id)arg1 ;
+(BOOL)shouldSkipCalendar:(void*)arg1 withChangeType:(int)arg2 ;
+(void)processModifiedCalendar:(id)arg1 oldFlags:(unsigned)arg2 newFlags:(unsigned)arg3 ;
+(BOOL)shouldSkipModifiedCalendar:(void*)arg1 ;
+(id)calendarWithCalCalendar:(void*)arg1 principal:(id)arg2 ;
+(void)clearCalendarUIDCache;
-(NSString *)notes;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSString *)accountID;
-(NSURL *)publishURL;
-(NSTimeZone *)timeZone;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)canBeShared;
-(NSString *)guid;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isHidden;
-(NSString *)ctag;
-(BOOL)isDirty;
-(NSURL *)owner;
-(id)_calExternalRep;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(BOOL)didResync;
-(void)setDidResync:(BOOL)arg1 ;
-(void)setChangeTracker:(CalDAVDBChangeTrackingHelper *)arg1 ;
-(void)setCalendarCollectionSyncDiagnostics:(CalDiagCalendarCollectionSync *)arg1 ;
-(NSMutableDictionary *)deletedCalendarItems;
-(void)setItemsToReportAsJunk:(NSArray *)arg1 ;
-(void)setRecurrenceSplitActions:(NSArray *)arg1 ;
-(NSSet *)sharees;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 ;
-(void)setCtag:(NSString *)arg1 ;
-(NSString *)color;
-(BOOL)isPoll;
-(unsigned long long)numDownloadedElements;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(CalDAVDBChangeTrackingHelper *)changeTracker;
-(BOOL)isMarkedUndeletable;
-(BOOL)isFamilyCalendar;
-(BOOL)canBePublished;
-(void)setCanBePublished:(BOOL)arg1 ;
-(BOOL)isMarkedImmutableSharees;
-(BOOL)isAffectingAvailability;
-(void)setIsAffectingAvailability:(BOOL)arg1 ;
-(NSString *)description;
-(void)setPreferredCalendarUserAddresses:(NSSet *)arg1 ;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(void)setColor:(NSString *)arg1 ;
-(BOOL)hasEvents;
-(NSString *)symbolicColorName;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(void)setOwner:(NSURL *)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(id)copyAllItems;
-(void)setPublishURL:(NSURL *)arg1 ;
-(void)flushCaches;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(id<CalDAVPrincipal>)principal;
-(void)_dropCalStoreContext;
-(void*)getCalCalendar;
-(void*)initCalCalendarWithTitle:(id)arg1 ;
-(void)_updateCalendarInfo;
-(void)setUniqueIdentifierToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToEtagMap:(NSMutableDictionary *)arg1 ;
-(void)setCalendarURLString:(NSString *)arg1 ;
-(BOOL)isEventContainer;
-(BOOL)isPublished;
-(void)_setSupportsEvents:(BOOL)arg1 supportsTodos:(BOOL)arg2 ;
-(BOOL)isTaskContainer;
-(NSDictionary *)bulkRequests;
-(MobileCalDAVPrincipal *)daPrincipal;
-(BOOL)isRenameable;
-(CalRecordIDRef)recordIDForUniqueIdentifier:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 forRecordID:(CalRecordIDRef)arg2 ;
-(NSMutableDictionary *)uniqueIdentifierToRecordIDMap;
-(void*)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(NSArray *)syncActions;
-(void*)_copyCalItemWithExternalID:(id)arg1 ;
-(int)sharingStatus;
-(NSString *)syncToken;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(void)setNumDownloadedElements:(unsigned long long)arg1 ;
-(CalDiagCalendarCollectionSync *)calendarCollectionSyncDiagnostics;
-(NSMutableDictionary *)URLToRecordIDMap;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(BOOL)mustCalendarBeReadOnly;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)isScheduleInbox;
-(BOOL)isNotification;
-(NSString *)ownerEmailAddress;
-(NSString *)ownerPhoneNumber;
-(BOOL)_isItemJunk:(void*)arg1 ;
-(void)setNeedsPublishUpdate:(BOOL)arg1 ;
-(void)setWasModifiedLocally:(BOOL)arg1 ;
-(void)setNeedsIsAffectingAvailabilityUpdate:(BOOL)arg1 ;
-(void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4 ;
-(void)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2 ;
-(void)_gatherModifiedTasksInArray:(id)arg1 ;
-(unsigned long long)numUploadedElements;
-(BOOL)isSubscribed;
-(BOOL)isEnabled;
-(void)_gatherModifiedItemsFromCalChangesCall:(/*function pointer*/void*)arg1 forType:(id)arg2 inArray:(id)arg3 ;
-(void)_gatherModifiedEventsInArray:(id)arg1 ;
-(void)_addAddedRecurrenceSplitItemsToArray:(id)arg1 ;
-(id)_itemPropertyDictForItemAtIndex:(long long)arg1 withChangedIDs:(CFArrayRef)arg2 withChangedRowids:(CFArrayRef)arg3 withExternalIDs:(CFArrayRef)arg4 uniqueIdentifiers:(CFArrayRef)arg5 significantAttributeChanges:(CFArrayRef)arg6 oldCalendarIDs:(CFArrayRef)arg7 entityType:(int)arg8 ;
-(void)_gatherDeletedChanges:(/*function pointer*/void*)arg1 inDictionary:(id)arg2 ;
-(void)addChangesToBeCleared:(CFArrayRef)arg1 forEntityType:(int)arg2 ;
-(void)clearChangesForEntityType:(int)arg1 ;
-(void)setDeletedCalendarItems:(NSMutableDictionary *)arg1 ;
-(void)_clearChangesFromItem:(id)arg1 ;
-(void)setPushKey:(NSString *)arg1 ;
-(void)_clearChangesFromItem:(id)arg1 shouldClearAttachmentChanges:(BOOL)arg2 ;
-(void)_clearChangesAtIndices:(id)arg1 forType:(int)arg2 ;
-(void)_saveChangesAtIndices:(id)arg1 forType:(int)arg2 ;
-(void)setNumUploadedElements:(unsigned long long)arg1 ;
-(void)_forceRefreshNextSync;
-(void)_saveChangesForItem:(id)arg1 ;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(void)_collectShareeActions;
-(id)copyAddedItems;
-(void)setSharingStatus:(int)arg1 ;
-(NSString *)pushKey;
-(void)setShareeActions:(NSArray *)arg1 ;
-(void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2 ;
-(id)copyDeletedItems;
-(id)copyRecurrenseSplitItems;
-(id)_recurrenceSplitActionsForItems:(id)arg1 alreadySentItems:(id)arg2 ;
-(id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 createServerIDs:(BOOL)arg4 shouldSave:(BOOL*)arg5 ;
-(id)copyModifiedItems;
-(id)_resourceURLsForJunkItemsInModifiedItems:(id)arg1 alreadySentItems:(id)arg2 ;
-(id)_copyDeletedEventActions;
-(NSString *)displayColor;
-(void)setGuid:(NSString *)arg1 ;
-(id)calendarUserAddresses;
-(NSSet *)preferredCalendarUserAddresses;
-(NSString *)calendarURLString;
-(void)deleteCalendar;
-(NSURL *)calendarURL;
-(void*)calCalendar;
-(void)setIsDirty:(BOOL)arg1 ;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1 ;
-(void)setUuidsToAddActions:(NSDictionary *)arg1 ;
-(void)setHrefsToModDeleteActions:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)URLToEtagMap;
-(void)setSyncActions:(NSArray *)arg1 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1 ;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(NSURL *)prePublishURL;
-(void)setPrePublishURL:(NSURL *)arg1 ;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(void)setIsTaskContainer:(BOOL)arg1 ;
-(void)setIsPoll:(BOOL)arg1 ;
-(NSString *)title;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(void)setIsEventContainer:(BOOL)arg1 ;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1 ;
-(void)setIsScheduleInbox:(BOOL)arg1 ;
-(BOOL)isScheduleOutbox;
-(void)setIsScheduleOutbox:(BOOL)arg1 ;
-(void)setIsNotification:(BOOL)arg1 ;
-(void)setIsRenameable:(BOOL)arg1 ;
-(void)setIsFamilyCalendar:(BOOL)arg1 ;
-(void)setIsMarkedUndeletable:(BOOL)arg1 ;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1 ;
-(BOOL)wasModifiedLocally;
-(BOOL)needsResync;
-(void)setNeedsResync:(BOOL)arg1 ;
-(BOOL)needsPublishUpdate;
-(NSArray *)shareeActions;
-(NSArray *)itemsToReportAsJunk;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSSet *)allItemURLs;
-(Class)appSpecificCalendarItemClass;
-(void)clearShareeActions;
-(void)dealloc;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)syncDidFinishWithError:(id)arg1 ;
-(void)putAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6 ;
-(void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2 ;
-(void)recurrenceSplitActionsCompletedWithError:(id)arg1 ;
-(NSArray *)recurrenceSplitActions;
-(long long)maxAttendees;
-(void)setMaxAttendees:(long long)arg1 ;
-(BOOL)needsIsAffectingAvailabilityUpdate;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(void)setSharees:(NSSet *)arg1 ;
-(id)_preferredAddress;
@end

