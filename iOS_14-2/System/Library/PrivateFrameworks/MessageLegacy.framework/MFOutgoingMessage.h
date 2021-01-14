/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(void)setMessageBody:(id)arg1 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)mutableHeaders;
-(id)messageBodyIfAvailable;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)messageStore;
-(id)messageDataHolder;
-(id)headers;
-(unsigned long long)messageSize;
-(id)headersIfAvailable;
-(id)messageData;
-(id)messageBody;
@end

