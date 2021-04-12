/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remoteMailboxURL;
-(id)externalConversationID;
-(id)mailbox;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(DAMailMessage *)DAMailMessage;
-(id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2 ;
-(id)remoteID;
-(id)headers;
-(unsigned long long)messageFlags;
-(unsigned long long)messageSize;
-(id)headersIfAvailable;
-(id)messageBody;
@end

