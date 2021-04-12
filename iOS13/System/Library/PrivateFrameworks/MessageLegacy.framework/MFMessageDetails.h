/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned)uid;
-(BOOL)deleted;
-(id)messageID;
-(NSString *)externalID;
-(long long)libraryID;
-(BOOL)read;
-(MFMailboxUid *)mailbox;
-(id)remoteID;
-(unsigned long long)messageFlags;
-(id)copyMessageInfo;
-(long long)mailboxID;
-(BOOL)isLibraryMessage;
-(long long)messageIDHash;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(long long)conversationHash;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(BOOL)isKnownToHaveAttachments;
@end

