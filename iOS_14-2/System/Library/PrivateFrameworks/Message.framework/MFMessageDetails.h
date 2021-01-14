/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFBaseMessage.h>

@class MFMessageLibrary, NSString, MFMailboxUid;

@interface MFMessageDetails : NSObject <MFBaseMessage> {

	MFMessageLibrary* library;
	long long libraryID;
	unsigned long long messageFlags;
	unsigned uid;
	long long mailboxID;
	long long conversationHash;
	long long messageIDHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;

}

@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned long long messageFlags; 
@property (nonatomic,__weak,readonly) MFMailboxUid * mailbox; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) NSString * externalID; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)uid;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(long long)messageIDHash;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(long long)conversationHash;
-(BOOL)isKnownToHaveAttachments;
-(BOOL)read;
-(long long)libraryID;
-(NSString *)externalID;
-(BOOL)deleted;
-(MFMailboxUid *)mailbox;
-(NSString *)description;
-(unsigned long long)hash;
-(id)remoteID;
-(id)messageID;
-(long long)mailboxID;
-(unsigned long long)messageFlags;
-(id)copyMessageInfo;
-(BOOL)isLibraryMessage;
-(BOOL)isEqual:(id)arg1 ;
@end

