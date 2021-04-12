/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepositoryObject.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMMessageBuilder.h>
#import <libobjc.A.dylib/EMExtendedContentItem.h>
#import <libobjc.A.dylib/EMMutableMessageListItem.h>
#import <libobjc.A.dylib/EMMessageListItem.h>
#import <libobjc.A.dylib/EMContentItem.h>

@protocol ECEmailAddressConvertible;
@class NSArray, NSUUID, NSDate, ECSubject, NSString, ECMessageFlags, NSIndexSet, EMObjectID, EMMailDropMetadata, EMMessageRepository;

@interface EMMessage : EMRepositoryObject <EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem> {

	unsigned long long _isEditable;
	NSArray* _mailboxes;
	NSArray* _mailboxObjectIDs;
	os_unfair_lock_s _mailboxesLock;
	BOOL _isVIP;
	BOOL _isBlocked;
	BOOL _hasAttachments;
	BOOL _isToMe;
	BOOL _isCCMe;
	BOOL _isAvailableLocally;
	int _exchangeEventUID;
	NSDate* _date;
	ECSubject* _subject;
	NSString* _summary;
	ECMessageFlags* _flags;
	long long _conversationNotificationLevel;
	long long _conversationID;
	NSArray* _toList;
	NSArray* _ccList;
	long long _dataTransferByteCount;
	long long _storageByteCount;
	EMMailDropMetadata* _mailDropMetadata;
	/*^block*/id _loaderBlock;
	long long __internalID;
	id<ECEmailAddressConvertible> _senderAddress;
	NSArray* _bccList;
	NSUUID* _documentID;

}

@property (nonatomic,readonly) EMMessageRepository * repository; 
@property (nonatomic,retain) id<ECEmailAddressConvertible> senderAddress;               //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSArray * bccList;                                           //@synthesize bccList=_bccList - In the implementation block
@property (nonatomic,copy) NSUUID * documentID;                                         //@synthesize documentID=_documentID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (nonatomic,copy,readonly) NSArray * availableRepresentations; 
@property (nonatomic,readonly) BOOL isAvailableLocally; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * contentID; 
@property (nonatomic,copy,readonly) NSString * UTType; 
@property (nonatomic,readonly) long long dataTransferByteCount; 
@property (nonatomic,readonly) long long storageByteCount; 
@property (nonatomic,copy,readonly) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,readonly) int exchangeEventUID; 
@property (nonatomic,copy) id loaderBlock;                                              //@synthesize loaderBlock=_loaderBlock - In the implementation block
@property (assign,nonatomic) BOOL isSinglePagePDF; 
@property (nonatomic,readonly) id<EMCollectionItemID> itemID; 
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
@property (assign) long long _internalID;                                               //@synthesize _internalID=__internalID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)UTType;
+(id)combinedFlagsForMessageListItemFlags:(id)arg1 forDisplay:(BOOL)arg2 ;
+(id)externalDataTypeIdentifiers;
+(id)combinedFlagsForMessageListItems:(id)arg1 forDisplay:(BOOL)arg2 ;
+(id)combinedFlagsForMessageListItems:(id)arg1 ;
+(id)predicateForMessageWithObjectID:(id)arg1 ;
+(id)_predicateForMessagesWithObjectIDConstantValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
+(id)predicateForMessagesWithObjectIDs:(id)arg1 ;
+(id)predicateForMessageWithItemID:(id)arg1 mailboxPredicate:(id)arg2 mailboxTypeResolver:(id)arg3 ;
+(id)predicateForMessageWithInternalID:(long long)arg1 ;
+(id)predicateForExcludingMessageWithObjectID:(id)arg1 ;
+(id)predicateForExcludingMessagesWithObjectIDs:(id)arg1 ;
+(id)predicateForMessageWithMIMEMessageIDHeader:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(ECMessageFlags *)flags;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setLoaderBlock:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)isBlocked;
-(id<EMCollectionItemID>)itemID;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(ECSubject *)subject;
-(void)setSubject:(ECSubject *)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(BOOL)isEditable;
-(NSUUID *)documentID;
-(id)initWithObjectID:(id)arg1 ;
-(EMMessage *)displayMessage;
-(NSString *)summary;
-(BOOL)isVIP;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(id<ECEmailAddressConvertible>)senderAddress;
-(void)setSenderAddress:(id<ECEmailAddressConvertible>)arg1 ;
-(long long)_internalID;
-(NSString *)ef_publicDescription;
-(NSArray *)mailboxes;
-(BOOL)shouldArchiveByDefault;
-(long long)conversationID;
-(BOOL)supportsArchiving;
-(void)setIsVIP:(BOOL)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setBccList:(NSArray *)arg1 ;
-(void)setDocumentID:(NSUUID *)arg1 ;
-(EMMailDropMetadata *)mailDropMetadata;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(void)setUTType:(NSString *)arg1 ;
-(void)setIsAvailableLocally:(BOOL)arg1 ;
-(void)setDataTransferByteCount:(long long)arg1 ;
-(void)setStorageByteCount:(long long)arg1 ;
-(NSString *)UTType;
-(void)setExchangeEventUID:(int)arg1 ;
-(void)setAvailableRepresentations:(NSArray *)arg1 ;
-(int)exchangeEventUID;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSArray *)bccList;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)set_internalID:(long long)arg1 ;
-(void)setIsToMe:(BOOL)arg1 ;
-(void)setIsCCMe:(BOOL)arg1 ;
-(id)initWithObjectID:(id)arg1 builder:(/*^block*/id)arg2 ;
-(BOOL)hasAttachments;
-(EMMessageRepository *)repository;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(BOOL)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loaderBlock;
-(void)setIsSinglePagePDF:(BOOL)arg1 ;
-(void)setRepository:(EMMessageRepository *)arg1 ;
-(EMObjectID *)displayMessageObjectID;
-(NSArray *)mailboxObjectIDs;
-(void)_commonInitWithBuilder:(/*^block*/id)arg1 ;
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
-(void)setCachedMetadata:(id)arg1 forKey:(id)arg2 ;
-(id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)isInManagedAccountWithSourceMailboxScope:(id)arg1 ;
@end

