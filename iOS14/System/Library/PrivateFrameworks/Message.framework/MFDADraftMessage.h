/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(id)to;
-(id)cc;
-(id)bcc;
-(id)from;
-(id)clientID;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)subject;
-(id)body;
-(id)replyTo;
-(id)serverID;
-(int)bodyType;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
-(id)date;
-(id)messageIDHeader;
@end

