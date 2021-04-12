/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSString, REMObjectID, REMColor, NSData, REMResolutionTokenMap, NSSet, NSArray, NSDate, NSDictionary;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {

	BOOL _hasDeserializedReminderIDsMergeableOrdering;
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
	REMObjectID* _accountID;
	REMObjectID* _objectID;
	NSString* _name;
	REMColor* _color;
	NSString* _badgeEmblem;
	REMObjectID* _parentAccountID;
	REMObjectID* _parentListID;
	NSData* _reminderIDsMergeableOrderingData;
	REMResolutionTokenMap* _resolutionTokenMap;
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

}

@property (nonatomic,retain) REMObjectID * accountID;                                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL isGroup;                                            //@synthesize isGroup=_isGroup - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REMColor * color;                                        //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * badgeEmblem;                                  //@synthesize badgeEmblem=_badgeEmblem - In the implementation block
@property (assign,nonatomic) BOOL showingLargeAttachments;                            //@synthesize showingLargeAttachments=_showingLargeAttachments - In the implementation block
@property (nonatomic,retain) REMObjectID * parentAccountID;                           //@synthesize parentAccountID=_parentAccountID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentListID;                              //@synthesize parentListID=_parentListID - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) NSData * reminderIDsMergeableOrderingData;               //@synthesize reminderIDsMergeableOrderingData=_reminderIDsMergeableOrderingData - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;              //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSSet * reminderIDsToUndelete;                           //@synthesize reminderIDsToUndelete=_reminderIDsToUndelete - In the implementation block
@property (assign,nonatomic) BOOL remindersICSDisplayOrderChanged;                    //@synthesize remindersICSDisplayOrderChanged=_remindersICSDisplayOrderChanged - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerName;                                //@synthesize sharedOwnerName=_sharedOwnerName - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerAddress;                             //@synthesize sharedOwnerAddress=_sharedOwnerAddress - In the implementation block
@property (assign,nonatomic) long long sharingStatus;                                 //@synthesize sharingStatus=_sharingStatus - In the implementation block
@property (nonatomic,retain) NSArray * sharees;                                       //@synthesize sharees=_sharees - In the implementation block
@property (nonatomic,retain) REMObjectID * sharedOwnerID;                             //@synthesize sharedOwnerID=_sharedOwnerID - In the implementation block
@property (nonatomic,copy) NSDate * lastUserAccessDate;                               //@synthesize lastUserAccessDate=_lastUserAccessDate - In the implementation block
@property (nonatomic,retain) NSArray * calDAVNotifications;                           //@synthesize calDAVNotifications=_calDAVNotifications - In the implementation block
@property (nonatomic,retain) NSString * daExternalIdentificationTag;                  //@synthesize daExternalIdentificationTag=_daExternalIdentificationTag - In the implementation block
@property (nonatomic,retain) NSDictionary * daBulkRequests;                           //@synthesize daBulkRequests=_daBulkRequests - In the implementation block
@property (assign,nonatomic) long long daDisplayOrder;                                //@synthesize daDisplayOrder=_daDisplayOrder - In the implementation block
@property (assign,nonatomic) BOOL daIsEventOnlyContainer;                             //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (assign,nonatomic) BOOL daIsReadOnly;                                       //@synthesize daIsReadOnly=_daIsReadOnly - In the implementation block
@property (assign,nonatomic) BOOL daIsImmutable;                                      //@synthesize daIsImmutable=_daIsImmutable - In the implementation block
@property (assign,nonatomic) BOOL daIsNotificationsCollection;                        //@synthesize daIsNotificationsCollection=_daIsNotificationsCollection - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                      //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id*)arg2 ;
+(id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(BOOL)isPlaceholder;
-(REMObjectID *)objectID;
-(REMColor *)color;
-(void)setColor:(REMColor *)arg1 ;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(BOOL)isGroup;
-(REMObjectID *)accountID;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(long long)sharingStatus;
-(NSString *)sharedOwnerName;
-(NSArray *)sharees;
-(void)setSharees:(NSArray *)arg1 ;
-(void)setSharingStatus:(long long)arg1 ;
-(void)setRemindersICSDisplayOrderChanged:(BOOL)arg1 ;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(NSString *)daSyncToken;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(NSString *)daPushKey;
-(void)setDaPushKey:(NSString *)arg1 ;
-(unsigned long long)storeGeneration;
-(REMObjectID *)remObjectID;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(REMObjectID *)parentListID;
-(void)setParentAccountID:(REMObjectID *)arg1 ;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(BOOL)daIsEventOnlyContainer;
-(REMObjectID *)parentAccountID;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrdering:(id)arg5 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrderingData:(id)arg5 ;
-(NSData *)reminderIDsMergeableOrderingData;
-(void)setIsGroup:(BOOL)arg1 ;
-(NSString *)daExternalIdentificationTag;
-(void)setDaExternalIdentificationTag:(NSString *)arg1 ;
-(NSDictionary *)daBulkRequests;
-(void)setDaBulkRequests:(NSDictionary *)arg1 ;
-(long long)daDisplayOrder;
-(void)setDaDisplayOrder:(long long)arg1 ;
-(void)setDaIsEventOnlyContainer:(BOOL)arg1 ;
-(BOOL)daIsReadOnly;
-(void)setDaIsReadOnly:(BOOL)arg1 ;
-(BOOL)daIsImmutable;
-(void)setDaIsImmutable:(BOOL)arg1 ;
-(BOOL)daIsNotificationsCollection;
-(void)setDaIsNotificationsCollection:(BOOL)arg1 ;
-(NSString *)badgeEmblem;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(NSDate *)lastUserAccessDate;
-(void)setLastUserAccessDate:(NSDate *)arg1 ;
-(BOOL)showingLargeAttachments;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(NSSet *)reminderIDsToUndelete;
-(void)setReminderIDsToUndelete:(NSSet *)arg1 ;
-(BOOL)remindersICSDisplayOrderChanged;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(NSString *)sharedOwnerAddress;
-(void)setSharedOwnerAddress:(NSString *)arg1 ;
-(REMObjectID *)sharedOwnerID;
-(void)setSharedOwnerID:(REMObjectID *)arg1 ;
-(NSArray *)calDAVNotifications;
-(void)setCalDAVNotifications:(NSArray *)arg1 ;
-(id)reminderIDsMergeableOrdering;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 ;
-(id)ekColor;
-(void)setReminderIDsMergeableOrderingData:(NSData *)arg1 ;
@end

