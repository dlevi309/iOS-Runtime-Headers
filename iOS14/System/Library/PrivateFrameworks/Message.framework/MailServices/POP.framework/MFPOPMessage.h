/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <Message/MFMailMessage.h>

@class NSData, NSString;

@interface MFPOPMessage : MFMailMessage {

	NSData* _messageData;
	BOOL _messageDataIsComplete;
	unsigned long long _size;
	NSString* _accountURL;
	long long _messageNumber;
	NSString* _messageID;

}

@property (assign,nonatomic) long long messageNumber;              //@synthesize messageNumber=_messageNumber - In the implementation block
@property (nonatomic,retain) NSData * messageData; 
@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
-(void)setMessageID:(NSString *)arg1 ;
-(id)remoteMailboxURL;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)messageDataHolder;
-(void)setMessageData:(NSData *)arg1 ;
-(id)headers;
-(NSString *)messageID;
-(id)originalMailboxURL;
-(long long)messageNumber;
-(void)setMessageNumber:(long long)arg1 ;
-(unsigned long long)messageSize;
-(id)headersIfAvailable;
-(NSData *)messageData;
-(void)setAccountURL:(id)arg1 ;
-(void)setMessageData:(id)arg1 isComplete:(BOOL)arg2 ;
@end

