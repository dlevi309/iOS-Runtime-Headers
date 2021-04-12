/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MIME/MFMessage.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/EDIndexableMessage.h>
#import <libobjc.A.dylib/MFBaseMessage.h>

@class NSArray, MFMessageInfo, NSURL, NSString, EMMessageObjectID, MFMailboxUid, MFMessageHeaders, MailAccount, ECSubject, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID;

@interface MFMailMessage : MFMessage <NSItemProviderWriting, EDIndexableMessage, MFBaseMessage> {

	unsigned long long _messageFlags;
	unsigned long long _modSequenceNumber;
	MFMessageInfo* _info;
	NSURL* _globalMessageURL;
	BOOL _useInternalSourceIsManaged;
	BOOL _sourceIsManaged;
	BOOL _shouldUseMailDrop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,readonly) EMMessageObjectID * objectID; 
@property (nonatomic,readonly) MFMailboxUid * mailbox; 
@property (assign) unsigned long long modSequenceNumber; 
@property (assign,nonatomic) BOOL shouldUseMailDrop;                                                     //@synthesize shouldUseMailDrop=_shouldUseMailDrop - In the implementation block
@property (assign,nonatomic) unsigned long long messageFlags; 
@property (nonatomic,readonly) MFMessageHeaders * headers; 
@property (nonatomic,readonly) MailAccount * account; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
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
@property (nonatomic,copy,readonly) NSArray * references; 
@property (nonatomic,copy,readonly) NSUUID * documentID; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (nonatomic,readonly) ECAngleBracketIDHash * listIDHash; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) long long mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (getter=isLibraryMessage,nonatomic,readonly) BOOL libraryMessage; 
@property (nonatomic,readonly) long long libraryID; 
+(id)writableTypeIdentifiersForItemProvider;
+(BOOL)dragItemsAreAllMessages:(id)arg1 ;
+(unsigned)validatePriority:(int)arg1 ;
+(id)forwardedMessagePrefixWithSpacer:(BOOL)arg1 ;
+(Class)dataMessageStoreToUse;
+(unsigned)displayablePriorityForPriority:(int)arg1 ;
-(long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadMessageDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_attributedSubject;
-(ECMessageFlags *)flags;
-(id)URL;
-(int)priority;
-(BOOL)sourceIsManaged;
-(EMMessageObjectID *)objectID;
-(NSArray *)from;
-(MailAccount *)account;
-(BOOL)deleted;
-(NSSet *)labels;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(long long)libraryID;
-(void)setSummary:(id)arg1 ;
-(unsigned long long)numberOfAttachments;
-(BOOL)read;
-(MFMailboxUid *)mailbox;
-(unsigned long long)conversationFlags;
-(id)messageStore;
-(BOOL)isSearchResultWithBogusRemoteId;
-(id)loadMeetingData;
-(unsigned long long)messageFlags;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)originalMailboxURL;
-(id)copyMessageInfo;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(NSArray *)references;
-(id)bestAlternativePart:(BOOL*)arg1 ;
-(NSArray *)listUnsubscribe;
-(BOOL)isServerSearchResult;
-(BOOL)isPartOfExistingThread;
-(id<ECMimePart>)bodyPart;
-(NSDictionary *)headersDictionary;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(id)preferredAccountToUseForReplying;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(id)globalMessageURL;
-(void)setPriorityFromHeaders:(id)arg1 ;
-(id)mailMessageStore;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned)arg9 ;
-(long long)conversationHash;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(BOOL)isKnownToHaveAttachments;
-(unsigned long long)modSequenceNumber;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
-(id)preferredEmailAddressToReplyWith;
-(id)loadMeetingExternalID;
-(id)loadMeetingMetadata;
-(id)remoteMailboxURL;
-(BOOL)shouldSetSummary;
-(id)externalConversationID;
-(id)bestAlternativePart;
-(BOOL)answered;
-(BOOL)junk;
-(BOOL)conversationVIP;
-(BOOL)conversationMuted;
-(BOOL)shouldUseMailDrop;
-(void)setShouldUseMailDrop:(BOOL)arg1 ;
@end

