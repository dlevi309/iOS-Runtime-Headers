/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <Message/MFConnection.h>

@class NSMutableData, NSMutableDictionary, NSData, NSString;

@interface MFPOP3Connection : MFConnection {

	NSMutableData* _sendBuffer;
	NSMutableDictionary* _listResults;
	NSMutableDictionary* _messageIdsByNumber;
	NSMutableDictionary* _numbersByMessageId;
	NSData* _apopTimeStamp;
	unsigned long long _numberOfMessagesAvailable;
	unsigned _state : 4;
	unsigned _hidingPassword : 1;
	NSString* _accountURL;

}
+(id)log;
-(id)capabilities;
-(int)quit;
-(id)init;
-(int)dele:(unsigned long long)arg1 ;
-(int)list:(int)arg1 ;
-(unsigned long long)serverMessageCount;
-(int)doStat;
-(int)_user:(id)arg1 ;
-(int)_pass:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(BOOL)supportsAPOP;
-(int)_apopWithUsername:(id)arg1 password:(id)arg2 ;
-(int)getMessageNumbers:(id*)arg1 messageIdsByNumber:(id*)arg2 numbersByMessageId:(id*)arg3 ;
-(id)copyMessageHeaderForMessageNumber:(unsigned long long)arg1 ;
-(int)retr:(unsigned long long)arg1 dataConsumer:(id)arg2 ;
-(BOOL)messagesAvailable;
-(unsigned long long)numberOfMessagesAvailable;
-(id)idForMessageNumber:(long long)arg1 ;
-(int)getMessageNumbers:(id*)arg1 andMessageIdsByNumber:(id*)arg2 ;
-(int)fetchMessages:(id)arg1 intoQueue:(id)arg2 serverIDsByNumber:(id)arg3 ;
-(int)deleteMessagesOnServer:(id)arg1 ;
-(int)_sendCommand:(const char*)arg1 withArguments:(id)arg2 ;
-(int)_getStatusFromReply;
-(id)copyReplyLineData;
-(BOOL)_doBasicConnectionWithAccount:(id)arg1 ;
-(int)_getUidlResults;
-(int)_getListResults;
-(int)_readMultilineResponseWithMaxSize:(unsigned long long)arg1 consumer:(id)arg2 ;
-(unsigned long long)sizeOfMessageNumber:(unsigned long long)arg1 ;
-(int)getTop:(int)arg1 ofMessageNumber:(unsigned long long)arg2 intoMutableData:(id)arg3 ;
-(int)_retrieveMessage:(unsigned long long)arg1 ofSize:(unsigned long long)arg2 consumer:(id)arg3 ;
-(int)retr:(unsigned long long)arg1 consumer:(id)arg2 intoQueue:(id)arg3 idsByNumber:(id)arg4 allowIncomplete:(BOOL)arg5 queueStatus:(BOOL*)arg6 ;
-(int)getTopOfMessageNumber:(unsigned long long)arg1 intoMutableData:(id)arg2 ;
-(void)disableAPOP;
-(int)retr:(unsigned long long)arg1 data:(id*)arg2 ;
-(int)fetchMessages:(id)arg1 ;
@end

