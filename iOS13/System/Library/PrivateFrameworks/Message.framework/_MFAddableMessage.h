/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/ECMessage.h>

@class NSString, ECSubject, NSArray, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID, MFLibraryMessage;

@interface _MFAddableMessage : NSObject <ECMessage> {

	long long _messageIDHash;
	MFLibraryMessage* _libraryMessage;
	NSString* _urlString;

}

@property (nonatomic,readonly) MFLibraryMessage * libraryMessage;                                    //@synthesize libraryMessage=_libraryMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                                            //@synthesize urlString=_urlString - In the implementation block
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
@property (nonatomic,readonly) id<ECMailbox> mailbox; 
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) BOOL isServerSearchResult; 
@property (nonatomic,readonly) ECMessageFlags * flags; 
@property (getter=isPartOfExistingThread,nonatomic,readonly) BOOL partOfExistingThread; 
@property (nonatomic,readonly) id<ECMimePart> bodyPart; 
@property (nonatomic,copy,readonly) NSDictionary * headersDictionary; 
@property (nonatomic,copy,readonly) NSString * messageIDHeader; 
@property (nonatomic,readonly) ECAngleBracketIDHash * messageIDHeaderHash; 
@property (readonly) NSSet * labels; 
@property (nonatomic,readonly) id<ECMailAccount> account; 
@property (nonatomic,readonly) id<ECMessageHeaders> headers; 
@property (nonatomic,copy,readonly) NSArray * references; 
@property (nonatomic,copy,readonly) NSUUID * documentID; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (nonatomic,readonly) ECAngleBracketIDHash * listIDHash; 
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)urlString;
-(id<ECMailbox>)mailbox;
-(id)bestAlternativePart:(BOOL*)arg1 ;
-(BOOL)isServerSearchResult;
-(ECAngleBracketIDHash *)messageIDHeaderHash;
-(long long)messageIDHash;
-(id)initWithLibraryMessage:(id)arg1 messageIDHash:(long long)arg2 mailboxURL:(id)arg3 ;
-(MFLibraryMessage *)libraryMessage;
@end

