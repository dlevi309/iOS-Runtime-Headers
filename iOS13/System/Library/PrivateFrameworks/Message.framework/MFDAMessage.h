/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailMessage.h>

@class MFMessage, MFMailboxUid, NSString, DAMailMessage;

@interface MFDAMessage : MFMailMessage {

	MFMessage* _rfc822CreatedMessage;
	MFMailboxUid* _mailbox;
	NSString* _externalConversationID;
	DAMailMessage* _DAMailMessage;

}

@property (nonatomic,readonly) DAMailMessage * DAMailMessage;              //@synthesize DAMailMessage=_DAMailMessage - In the implementation block
-(id)messageBody;
-(unsigned long long)messageSize;
-(id)headers;
-(id)mailbox;
-(DAMailMessage *)DAMailMessage;
-(id)remoteID;
-(unsigned long long)messageFlags;
-(id)headersIfAvailable;
-(id)remoteMailboxURL;
-(id)externalConversationID;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2 ;
@end

