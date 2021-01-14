/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MFMailMessage.h>
#import <libobjc.A.dylib/EDPersistedMessage.h>

@class NSString, NSArray, MFMailboxUid, MailAccount, MFMessageHeaders, ECSubject, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID;

@interface MFLibraryMessage : MFMailMessage <EDPersistedMessage> {

	long long _libraryID;
	NSString* _remoteID;
	unsigned _uid;
	unsigned long long _uniqueRemoteId;
	unsigned long long _size;
	long long _mailboxID;
	long long _originalMailboxID;
	NSString* _messageID;
	AQ _conversationFlags;
	NSArray* _references;

}

@property (nonatomic,readonly) MFMailboxUid * mailbox; 
@property (nonatomic,readonly) MailAccount * account; 
@property (nonatomic,readonly) MFMessageHeaders * headers; 
@property (nonatomic,copy) NSArray * references;                                                     //@synthesize references=_references - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,readonly) long long persistedMessageID; 
@property (nonatomic,readonly) long long globalMessageID; 
@property (readonly) unsigned long long conversationFlags; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) ECSubject * subject; 
@property (nonatomic,copy,readonly) NSArray * from; 
@property (nonatomic,copy,readonly) NSArray * to; 
@property (nonatomic,copy,readonly) NSArray * cc; 
@property (nonatomic,copy,readonly) NSArray * bcc; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSArray * listUnsubscribe; 
@property (nonatomic,copy,readonly) NSString * remoteID; 
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) BOOL isServerSearchResult; 
@property (nonatomic,readonly) ECMessageFlags * flags; 
@property (getter=isPartOfExistingThread,nonatomic,readonly) BOOL partOfExistingThread; 
@property (nonatomic,readonly) id<ECMimePart> bodyPart; 
@property (nonatomic,copy,readonly) NSDictionary * headersDictionary; 
@property (nonatomic,copy,readonly) NSString * messageIDHeader; 
@property (nonatomic,readonly) ECAngleBracketIDHash * messageIDHeaderHash; 
@property (readonly) NSSet * labels; 
@property (nonatomic,copy,readonly) NSUUID * documentID; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (nonatomic,readonly) ECAngleBracketIDHash * listIDHash; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)messageWithLibraryID:(long long)arg1 ;
-(id)library;
-(MailAccount *)account;
-(void)setUid:(unsigned)arg1 ;
-(void)commit;
-(unsigned)uid;
-(unsigned long long)fileSize;
-(long long)libraryID;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(id)path;
-(MFMailboxUid *)mailbox;
-(id)_privacySafeDescription;
-(NSString *)persistentID;
-(id)messageStore;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)conversationFlags;
-(NSString *)remoteID;
-(void)setSummary:(id)arg1 ;
-(id)messageID;
-(id)initWithLibraryID:(long long)arg1 ;
-(long long)originalMailboxID;
-(void)_updateUID;
-(long long)mailboxID;
-(void)setRemoteID:(NSString *)arg1 ;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(BOOL)hasTemporaryUid;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)originalMailboxURL;
-(NSArray *)references;
-(id)copyMessageInfo;
-(void)setMailboxID:(long long)arg1 ;
-(id)_attachmentStorageLocation;
-(void)_forceLoadOfMessageSummaryFromProtectedStore;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(long long)persistedMessageID;
-(void)setOriginalMailboxID:(long long)arg1 ;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(BOOL)isPartial;
-(void)setIsPartial:(BOOL)arg1 ;
-(BOOL)isMessageContentsLocallyAvailable;
-(void)setHasTemporaryUid:(BOOL)arg1 ;
-(id)mailboxName;
-(long long)compareByUidWithMessage:(id)arg1 ;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(id)dataPathForMimePart:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(id)preferredAccountToUseForReplying;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(void)setRemoteID:(id)arg1 flags:(unsigned long long)arg2 size:(unsigned)arg3 mailboxID:(long long)arg4 originalMailboxID:(long long)arg5 ;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(BOOL)isLibraryMessage;
-(id)attachmentStorageLocation;
-(void)setReferences:(NSArray *)arg1 ;
-(unsigned long long)messageSize;
-(BOOL)isEqual:(id)arg1 ;
@end

