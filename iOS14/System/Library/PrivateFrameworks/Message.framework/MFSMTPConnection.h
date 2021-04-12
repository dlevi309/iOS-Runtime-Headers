/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <Message/MFConnection.h>

@class MFSMTPResponse, NSMutableArray, NSMutableData, NSString;

@interface MFSMTPConnection : MFConnection {

	MFSMTPResponse* _lastResponse;
	NSMutableArray* _serviceExtensions;
	NSMutableData* _mdata;
	NSString* _domainName;
	NSString* _saveSentMbox;
	int _originalSocketTimeout;
	long long _lastCommandTimestamp;
	id _delegate;
	BOOL _hideLoggedData;
	BOOL _useSaveSent;
	BOOL _dislikesSaveSentMbox;

}
-(void)abort;
-(id)domainName;
-(int)quit;
-(int)noop;
-(void)setDomainName:(id)arg1 ;
-(id)init;
-(int)sendData:(id)arg1 ;
-(int)rcptTo:(id)arg1 ;
-(BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2 ;
-(BOOL)_supportsExtension:(id)arg1 ;
-(BOOL)_supportsSaveSentExtension;
-(int)_sendCommand:(const char*)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char*)arg4 ;
-(id)lastResponseLine;
-(BOOL)_connectUsingAccount:(id)arg1 ;
-(int)_doHandshakeUsingAccount:(id)arg1 ;
-(int)_sendData:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(const char*)_trailerForMailFromWithEmailAddressFormatStyle:(long long)arg1 ;
-(id)_dataForCommand:(const char*)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char*)arg4 ;
-(BOOL)supportsChunking;
-(BOOL)supportsPipelining;
-(id)dataForMailFrom:(id)arg1 emailFormatStyle:(long long)arg2 ;
-(id)dataForRcptTo:(id)arg1 ;
-(id)dataForDataCmd;
-(int)_sendData:(id)arg1 ;
-(int)sendBData:(id)arg1 ;
-(int)mailFrom:(id)arg1 emailFormatStyle:(long long)arg2 ;
-(void)_setLastResponse:(id)arg1 ;
-(int)_sendBytes:(const char*)arg1 length:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 ;
-(int)_readResponseRange:(NSRange*)arg1 isContinuation:(BOOL*)arg2 ;
-(id)lastResponse;
-(BOOL)supportsSMTPUTF8;
-(BOOL)supportsEnhancedStatusCodes;
-(long long)timeLastCommandWasSent;
-(void)setUseSaveSent:(BOOL)arg1 toFolder:(id)arg2 ;
-(long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 emailFormatStyle:(long long)arg5 errorTitle:(id*)arg6 errorMessage:(id*)arg7 serverResponse:(id*)arg8 displayError:(BOOL*)arg9 errorCode:(int*)arg10 errorUserInfo:(id*)arg11 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(int)state;
-(unsigned long long)maximumMessageBytes;
-(BOOL)supportsOutboxCopy;
-(int)_getReply;
@end

