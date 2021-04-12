/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMCollection.h>
#import <libobjc.A.dylib/EMThreadBuilder.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EMMessageListItem.h>

@protocol EMMailboxTypeResolver, EMCollectionItemID;
@class EMMailboxScope, NSArray, NSDate, ECSubject, NSString, ECMessageFlags, NSIndexSet, EFQuery, EMMessageRepository, EMObjectID, EMMessage;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem> {

	unsigned long long _isEditable;
	EMMailboxScope* _mailboxScope;
	id<EMMailboxTypeResolver> _mailboxTypeResolver;
	NSArray* _mailboxes;
	NSArray* _mailboxObjectIDs;
	os_unfair_lock_s _mailboxScopeLock;
	os_unfair_lock_s _mailboxTypeResolverLock;
	os_unfair_lock_s _mailboxesLock;
	BOOL _hasUnflagged;
	BOOL _isVIP;
	BOOL _isBocked;
	BOOL _hasAttachments;
	BOOL _isToMe;
	BOOL _isCCMe;
	NSDate* _date;
	ECSubject* _subject;
	NSString* _summary;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	ECMessageFlags* _flags;
	NSIndexSet* _flagColors;
	long long _conversationNotificationLevel;
	unsigned long long _count;
	id<EMCollectionItemID> _displayMessageItemID;
	EFQuery* _originatingQuery;

}

@property (nonatomic,readonly) EMMessageRepository * repository; 
@property (nonatomic,readonly) EFQuery * originatingQuery;                     //@synthesize originatingQuery=_originatingQuery - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * mailboxScope; 
@property (nonatomic,readonly) id<EMCollectionItemID> itemID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@property (readonly) NSDate * date; 
@property (readonly) ECSubject * subject; 
@property (copy,readonly) NSString * summary; 
@property (copy,readonly) NSArray * senderList; 
@property (copy,readonly) NSArray * toList; 
@property (copy,readonly) NSArray * ccList; 
@property (readonly) ECMessageFlags * flags; 
@property (readonly) BOOL hasUnflagged; 
@property (copy,readonly) NSIndexSet * flagColors; 
@property (readonly) BOOL isVIP; 
@property (readonly) BOOL isBlocked; 
@property (readonly) BOOL isToMe; 
@property (readonly) BOOL isCCMe; 
@property (readonly) BOOL hasAttachments; 
@property (readonly) long long conversationNotificationLevel; 
@property (readonly) unsigned long long count; 
@property (readonly) long long conversationID; 
@property (copy,readonly) NSArray * mailboxObjectIDs; 
@property (copy,readonly) NSArray * mailboxes; 
@property (readonly) id<EMCollectionItemID> displayMessageItemID; 
@property (readonly) EMObjectID * displayMessageObjectID; 
@property (readonly) EMMessage * displayMessage; 
@property (readonly) BOOL deleteMovesToTrash; 
@property (readonly) BOOL supportsArchiving; 
@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL isEditable; 
@property (assign) long long _internalID; 
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)query;
-(NSDate *)date;
-(ECMessageFlags *)flags;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)isBlocked;
-(id<EMCollectionItemID>)itemID;
-(void)setDate:(NSDate *)arg1 ;
-(ECSubject *)subject;
-(void)setSubject:(ECSubject *)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(BOOL)isEditable;
-(EMMessage *)displayMessage;
-(NSString *)summary;
-(BOOL)isVIP;
-(void)setSummary:(NSString *)arg1 ;
-(long long)_internalID;
-(id)ef_publicDescription;
-(NSArray *)mailboxes;
-(BOOL)shouldArchiveByDefault;
-(long long)conversationID;
-(BOOL)supportsArchiving;
-(void)setIsVIP:(BOOL)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(EMMailboxScope *)mailboxScope;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)set_internalID:(long long)arg1 ;
-(void)setIsToMe:(BOOL)arg1 ;
-(void)setIsCCMe:(BOOL)arg1 ;
-(BOOL)hasAttachments;
-(EMMessageRepository *)repository;
-(void)setRepository:(EMMessageRepository *)arg1 ;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1 ;
-(BOOL)objectIDBelongsToCollection:(id)arg1 ;
-(id)objectIDForItemID:(id)arg1 ;
-(EMObjectID *)displayMessageObjectID;
-(NSArray *)mailboxObjectIDs;
-(long long)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(NSArray *)arg1 ;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(BOOL)deleteMovesToTrash;
-(void)setHasUnflagged:(BOOL)arg1 ;
-(void)setFlagColors:(NSIndexSet *)arg1 ;
-(void)setDisplayMessageItemID:(id<EMCollectionItemID>)arg1 ;
-(void)_commonInitWithOriginatingQuery:(id)arg1 builder:(/*^block*/id)arg2 ;
-(EFQuery *)originatingQuery;
-(id<EMMailboxTypeResolver>)mailboxTypeResolver;
-(void)setMailboxTypeResolver:(id<EMMailboxTypeResolver>)arg1 ;
-(id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(/*^block*/id)arg3 ;
@end

