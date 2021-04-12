/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSOrderedSet, NSString, REMObjectID, REMColor, NSData, NSDictionary, REMResolutionTokenMap, NSSet, NSArray, NSDate;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {

	NSOrderedSet* _reminderIDsMergeableOrdering;
	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	BOOL _isGroup;
	BOOL _showingLargeAttachments;
	BOOL _remindersICSDisplayOrderChanged;
	BOOL _daIsEventOnlyContainer;
	BOOL _daIsReadOnly;
	BOOL _daIsImmutable;
	BOOL _daIsNotificationsCollection;
	BOOL _isPlaceholder;
	NSString* externalIdentifier;
	NSString* externalModificationTag;
	NSString* daSyncToken;
	NSString* daPushKey;
	NSString* sortingStyle;
	long long sortingDirection;
	REMObjectID* _accountID;
	REMObjectID* _objectID;
	NSString* _name;
	REMColor* _color;
	NSString* _badgeEmblem;
	REMObjectID* _parentAccountID;
	REMObjectID* _parentListID;
	NSData* _reminderIDsMergeableOrderingData;
	NSDictionary* _reminderIDsOrderingHints;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;
	NSSet* _reminderIDsToUndelete;
	NSString* _sharedOwnerName;
	NSString* _sharedOwnerAddress;
	long long _sharingStatus;
	NSArray* _sharees;
	REMObjectID* _sharedOwnerID;
	NSDate* _lastUserAccessDate;
	NSArray* _calDAVNotifications;
	NSString* _daExternalIdentificationTag;
	NSDictionary* _daBulkRequests;
	long long _daDisplayOrder;
	NSString* _currentUserShareParticipantID;

}

@property (nonatomic,retain) REMObjectID * accountID;                                  //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * objectID;                                   //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL isGroup;                                             //@synthesize isGroup=_isGroup - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REMColor * color;                                         //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * badgeEmblem;                                   //@synthesize badgeEmblem=_badgeEmblem - In the implementation block
@property (assign,nonatomic) BOOL showingLargeAttachments;                             //@synthesize showingLargeAttachments=_showingLargeAttachments - In the implementation block
@property (nonatomic,retain) REMObjectID * parentAccountID;                            //@synthesize parentAccountID=_parentAccountID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentListID;                               //@synthesize parentListID=_parentListID - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,retain) NSData * reminderIDsMergeableOrderingData;                //@synthesize reminderIDsMergeableOrderingData=_reminderIDsMergeableOrderingData - In the implementation block
@property (nonatomic,retain) NSDictionary * reminderIDsOrderingHints;                  //@synthesize reminderIDsOrderingHints=_reminderIDsOrderingHints - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;               //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                          //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
@property (nonatomic,retain) NSSet * reminderIDsToUndelete;                            //@synthesize reminderIDsToUndelete=_reminderIDsToUndelete - In the implementation block
@property (assign,nonatomic) BOOL remindersICSDisplayOrderChanged;                     //@synthesize remindersICSDisplayOrderChanged=_remindersICSDisplayOrderChanged - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerName;                                 //@synthesize sharedOwnerName=_sharedOwnerName - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerAddress;                              //@synthesize sharedOwnerAddress=_sharedOwnerAddress - In the implementation block
@property (assign,nonatomic) long long sharingStatus;                                  //@synthesize sharingStatus=_sharingStatus - In the implementation block
@property (nonatomic,retain) NSArray * sharees;                                        //@synthesize sharees=_sharees - In the implementation block
@property (nonatomic,retain) REMObjectID * sharedOwnerID;                              //@synthesize sharedOwnerID=_sharedOwnerID - In the implementation block
@property (nonatomic,copy) NSDate * lastUserAccessDate;                                //@synthesize lastUserAccessDate=_lastUserAccessDate - In the implementation block
@property (nonatomic,retain) NSArray * calDAVNotifications;                            //@synthesize calDAVNotifications=_calDAVNotifications - In the implementation block
@property (nonatomic,retain) NSString * daExternalIdentificationTag;                   //@synthesize daExternalIdentificationTag=_daExternalIdentificationTag - In the implementation block
@property (nonatomic,retain) NSDictionary * daBulkRequests;                            //@synthesize daBulkRequests=_daBulkRequests - In the implementation block
@property (assign,nonatomic) long long daDisplayOrder;                                 //@synthesize daDisplayOrder=_daDisplayOrder - In the implementation block
@property (assign,nonatomic) BOOL daIsEventOnlyContainer;                              //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (assign,nonatomic) BOOL daIsReadOnly;                                        //@synthesize daIsReadOnly=_daIsReadOnly - In the implementation block
@property (assign,nonatomic) BOOL daIsImmutable;                                       //@synthesize daIsImmutable=_daIsImmutable - In the implementation block
@property (assign,nonatomic) BOOL daIsNotificationsCollection;                         //@synthesize daIsNotificationsCollection=_daIsNotificationsCollection - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                       //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * currentUserShareParticipantID;                   //@synthesize currentUserShareParticipantID=_currentUserShareParticipantID - In the implementation block
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(BOOL)supportsSecureCoding;
+(id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id*)arg2 ;
+(id)objectIDWithUUID:(id)arg1 ;
+(void)set_forceDisableFullRemindersSorting:(BOOL)arg1 ;
+(BOOL)_forceDisableFullRemindersSorting;
+(id)cdEntityName;
+(id)newObjectID;
+(id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id*)arg2 ;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(REMObjectID *)accountID;
-(NSString *)daPushKey;
-(id)ekColor;
-(NSString *)sortingStyle;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setDaPushKey:(NSString *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)daSyncToken;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(void)setSortingDirection:(long long)arg1 ;
-(NSData *)resolutionTokenMapData;
-(void)setDaBulkRequests:(NSDictionary *)arg1 ;
-(unsigned long long)storeGeneration;
-(NSString *)sharedOwnerAddress;
-(BOOL)isPlaceholder;
-(BOOL)isGroup;
-(NSDictionary *)reminderIDsOrderingHints;
-(REMObjectID *)remObjectID;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(NSArray *)sharees;
-(long long)sortingDirection;
-(id)cdKeyToStorageKeyMap;
-(REMColor *)color;
-(void)setSortingStyle:(NSString *)arg1 ;
-(NSString *)badgeEmblem;
-(NSString *)externalModificationTag;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setIsGroup:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(NSSet *)reminderIDsToUndelete;
-(id)debugDescription;
-(void)setParentAccountID:(REMObjectID *)arg1 ;
-(NSString *)externalIdentifier;
-(BOOL)remindersICSDisplayOrderChanged;
-(void)setReminderIDsOrderingHints:(NSDictionary *)arg1 ;
-(void)setSharedOwnerAddress:(NSString *)arg1 ;
-(BOOL)showingLargeAttachments;
-(NSDate *)lastUserAccessDate;
-(REMObjectID *)objectID;
-(NSString *)name;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 ;
-(BOOL)hasDeserializedReminderIDsMergeableOrdering;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrderingData:(id)arg5 ;
-(NSString *)currentUserShareParticipantID;
-(void)setRemindersICSDisplayOrderChanged:(BOOL)arg1 ;
-(id)description;
-(NSString *)sharedOwnerName;
-(void)setColor:(REMColor *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setLastUserAccessDate:(NSDate *)arg1 ;
-(void)setReminderIDsMergeableOrderingData:(NSData *)arg1 ;
-(void)setCalDAVNotifications:(NSArray *)arg1 ;
-(void)setDaIsImmutable:(BOOL)arg1 ;
-(void)setDaExternalIdentificationTag:(NSString *)arg1 ;
-(void)setReminderIDsMergeableOrdering:(NSOrderedSet *)arg1 ;
-(NSDictionary *)daBulkRequests;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentUserShareParticipantID:(NSString *)arg1 ;
-(long long)sharingStatus;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(BOOL)daIsReadOnly;
-(void)setName:(NSString *)arg1 ;
-(void)setSharedOwnerID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentListID;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrdering:(id)arg5 ;
-(NSData *)reminderIDsMergeableOrderingData;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(REMObjectID *)parentAccountID;
-(void)setSharingStatus:(long long)arg1 ;
-(void)setDaIsNotificationsCollection:(BOOL)arg1 ;
-(BOOL)daIsEventOnlyContainer;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(long long)daDisplayOrder;
-(void)setDaIsReadOnly:(BOOL)arg1 ;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(NSOrderedSet *)reminderIDsMergeableOrdering;
-(REMObjectID *)sharedOwnerID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDaIsEventOnlyContainer:(BOOL)arg1 ;
-(NSArray *)calDAVNotifications;
-(NSString *)daExternalIdentificationTag;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)daIsNotificationsCollection;
-(void)setReminderIDsToUndelete:(NSSet *)arg1 ;
-(BOOL)daIsImmutable;
-(void)setSharees:(NSArray *)arg1 ;
-(void)setDaDisplayOrder:(long long)arg1 ;
@end

