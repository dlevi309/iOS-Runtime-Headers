/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying> {

	unsigned _flagged : 1;
	unsigned _read : 1;
	unsigned _deleted : 1;
	unsigned _uidIsLibraryID : 1;
	unsigned _hasAttachments : 1;
	unsigned _isVIP : 1;
	unsigned _isHighPriority : 1;
	unsigned _dateSentInterval;
	unsigned _dateReceivedInterval;
	unsigned _sortDateReceivedInterval;
	long long _conversationHash;
	long long _mailboxID;
	long long _generationNumber;
	long long _uid;
	long long _messageIDHash;
	long long _sortUid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) long long generationNumber;                                               //@synthesize generationNumber=_generationNumber - In the implementation block
@property (assign,nonatomic) long long uid;                                                              //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned dateReceivedInterval;                                              //@synthesize dateReceivedInterval=_dateReceivedInterval - In the implementation block
@property (assign,nonatomic) unsigned dateSentInterval;                                                  //@synthesize dateSentInterval=_dateSentInterval - In the implementation block
@property (assign,nonatomic) long long conversationHash;                                                 //@synthesize conversationHash=_conversationHash - In the implementation block
@property (assign,nonatomic) long long mailboxID;                                                        //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                                                    //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (assign,nonatomic) BOOL flagged; 
@property (assign,nonatomic) BOOL read; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL uidIsLibraryID; 
@property (assign,nonatomic) BOOL isVIP; 
@property (assign,getter=isKnownToHaveAttachments,nonatomic) BOOL knownToHaveAttachments; 
@property (assign,nonatomic) long long sortUid;                                                          //@synthesize sortUid=_sortUid - In the implementation block
@property (assign,nonatomic) unsigned sortDateReceivedInterval;                                          //@synthesize sortDateReceivedInterval=_sortDateReceivedInterval - In the implementation block
+(long long)newGenerationNumber;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)uid;
-(BOOL)deleted;
-(void)setUid:(unsigned)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(long long)libraryID;
-(BOOL)isVIP;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)read;
-(id)copyMessageInfo;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(void)setUidIsLibraryID:(BOOL)arg1 ;
-(BOOL)isLibraryMessage;
-(long long)generationNumber;
-(void)setMessageIDHash:(long long)arg1 ;
-(void)setDateReceivedInterval:(unsigned)arg1 ;
-(void)setDateSentInterval:(unsigned)arg1 ;
-(void)setConversationHash:(long long)arg1 ;
-(long long)messageIDHash;
-(void)setIsVIP:(BOOL)arg1 ;
-(void)setFlagged:(BOOL)arg1 ;
-(void)setKnownToHaveAttachments:(BOOL)arg1 ;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(long long)conversationHash;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(BOOL)isKnownToHaveAttachments;
-(id)initWithUid:(long long)arg1 mailboxID:(long long)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned)arg4 dateSentInterval:(unsigned)arg5 conversationHash:(long long)arg6 read:(BOOL)arg7 knownToHaveAttachments:(BOOL)arg8 flagged:(BOOL)arg9 isVIP:(BOOL)arg10 ;
-(BOOL)uidIsLibraryID;
-(id)_flagDescription;
-(long long)generationCompare:(id)arg1 ;
-(long long)sortUid;
-(void)setSortUid:(long long)arg1 ;
-(unsigned)sortDateReceivedInterval;
-(void)setSortDateReceivedInterval:(unsigned)arg1 ;
@end

