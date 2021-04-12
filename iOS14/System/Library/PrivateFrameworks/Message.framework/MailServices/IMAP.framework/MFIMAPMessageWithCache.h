/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/MFIMAPMessage.h>

@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {

	NSData* _messageData;
	MFMessageHeaders* _headers;

}
-(id)headerData;
-(id)headers;
-(void)setHeaders:(id)arg1 ;
-(BOOL)isMessageContentsLocallyAvailable;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)headersIfAvailable;
-(id)messageData;
@end

