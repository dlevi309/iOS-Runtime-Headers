/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/MSVMessageParserDelegate.h>
#import <libobjc.A.dylib/MRProtocolMessageQueueDelegate.h>
#import <libobjc.A.dylib/MRProtocolMessageQueueDataSource.h>

@protocol MRProtocolClientConnectionDelegate;
@class MSVMessageParser, NSRunLoop, MRProtocolMessageQueue, NSInputStream, NSOutputStream, _MRDeviceInfoMessageProtobuf, MRSupportedProtocolMessages, NSString;

@interface MRProtocolClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource> {

	MSVMessageParser* _parser;
	NSRunLoop* _runLoop;
	MRProtocolMessageQueue* _messageQueue;
	BOOL _disconnected;
	unsigned long long _firstClientNanoseconds;
	unsigned long long _firstDeviceTicks;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	MRSupportedProtocolMessages* _supportedMessages;
	id<MRProtocolClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                                       //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;                                     //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo;                           //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages;                     //@synthesize supportedMessages=_supportedMessages - In the implementation block
@property (nonatomic,readonly) BOOL streamsAreValid; 
@property (assign,nonatomic,__weak) id<MRProtocolClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MRProtocolClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<MRProtocolClientConnectionDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)outputStream;
-(void)sendMessage:(id)arg1 ;
-(NSInputStream *)inputStream;
-(void)_flush;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)parser:(id)arg1 didParseMessage:(id)arg2 ;
-(unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3 ;
-(void)messageQueue:(id)arg1 didSendMessage:(id)arg2 ;
-(void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2 ;
-(id)messageQueue:(id)arg1 dataForMessage:(id)arg2 ;
-(MRSupportedProtocolMessages *)supportedMessages;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)streamsAreValid;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(void)closeAllStreams;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_openStream:(id)arg1 ;
-(void)_closeStream:(id)arg1 ;
-(BOOL)_clientSupportsMessage:(id)arg1 ;
-(void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_setQOSPropertiesOnStream:(id)arg1 ;
-(void)_parseMessageData:(id)arg1 ;
-(void)_disconnectClient;
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(void)_preProcessMessage:(id)arg1 data:(id)arg2 ;
-(void)_notifyDelegateClientDidRecieveMessage:(id)arg1 ;
-(id)encryptDataForMessage:(id)arg1 ;
-(void)_adjustTimestamp:(id)arg1 ;
-(void)_notifyDelegateClientDidDisconnect;
@end

