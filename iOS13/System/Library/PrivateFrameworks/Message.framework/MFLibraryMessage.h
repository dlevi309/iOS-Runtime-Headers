/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailMessage.h>
#import <libobjc.A.dylib/EDLibraryMessage.h>

@class NSString, NSArray, MFMailboxUid, MailAccount, MFMessageHeaders, ECSubject, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID;

@interface MFLibraryMessage : MFMailMessage <EDLibraryMessage> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * persistentID; 
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
@property (nonatomic,readonly) long long libraryID; 
+(id)log;
+(id)messageWithLibraryID:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)path;
-(unsigned long long)fileSize;
-(unsigned)uid;
-(void)commit;
-(MailAccount *)account;
-(NSString *)persistentID;
-(void)setUid:(unsigned)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(id)library;
-(id)messageID;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(long long)libraryID;
-(void)setSummary:(id)arg1 ;
-(id)_privacySafeDescription;
-(MFMailboxUid *)mailbox;
-(unsigned long long)conversationFlags;
-(id)messageStore;
-(NSString *)remoteID;
-(id)initWithLibraryID:(long long)arg1 ;
-(long long)originalMailboxID;
-(void)_updateUID;
-(void)setRemoteID:(NSString *)arg1 ;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(BOOL)hasTemporaryUid;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)originalMailboxURL;
-(id)copyMessageInfo;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(id)_attachmentStorageLocation;
-(void)_forceLoadOfMessageSummaryFromProtectedStore;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(NSArray *)references;
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
@end

