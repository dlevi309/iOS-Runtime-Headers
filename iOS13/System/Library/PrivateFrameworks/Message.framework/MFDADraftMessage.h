/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(id)date;
-(id)to;
-(id)from;
-(id)subject;
-(id)body;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)clientID;
-(id)serverID;
-(id)cc;
-(id)bcc;
-(id)messageIDHeader;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
-(id)replyTo;
-(int)bodyType;
@end

