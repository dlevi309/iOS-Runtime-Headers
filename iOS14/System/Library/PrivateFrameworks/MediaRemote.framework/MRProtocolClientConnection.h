/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/MSVMessageParserDelegate.h>
#import <libobjc.A.dylib/MRProtocolMessageQueueDelegate.h>
#import <libobjc.A.dylib/MRProtocolMessageQueueDataSource.h>

@protocol MRProtocolClientConnectionDelegate;
@class MSVMessageParser, NSRunLoop, MRProtocolMessageQueue, MRSupportedProtocolMessages, NSInputStream, NSOutputStream, MRDeviceInfo, NSString;

@interface MRProtocolClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource> {

	MSVMessageParser* _parser;
	NSRunLoop* _runLoop;
	MRProtocolMessageQueue* _messageQueue;
	unsigned long long _firstClientNanoseconds;
	unsigned long long _firstDeviceTicks;
	MRSupportedProtocolMessages* _supportedMessages;
	BOOL _disconnected;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	MRDeviceInfo* _deviceInfo;
	NSString* _label;
	id<MRProtocolClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                                       //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;                                     //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) MRDeviceInfo * deviceInfo;                                           //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages; 
@property (nonatomic,retain) NSString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL streamsAreValid; 
@property (nonatomic,readonly) BOOL disconnected;                                                 //@synthesize disconnected=_disconnected - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                                 //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic,__weak) id<MRProtocolClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didParseMessage:(id)arg2 ;
-(MRDeviceInfo *)deviceInfo;
-(void)sendMessage:(id)arg1 ;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(id<MRProtocolClientConnectionDelegate>)delegate;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(NSOutputStream *)outputStream;
-(BOOL)disconnected;
-(void)setDelegate:(id<MRProtocolClientConnectionDelegate>)arg1 ;
-(NSInputStream *)inputStream;
-(id)encryptDataForMessage:(id)arg1 ;
-(MRSupportedProtocolMessages *)supportedMessages;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)disconnectWithError:(id)arg1 ;
-(BOOL)streamsAreValid;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSString *)label;
-(unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3 ;
-(NSRunLoop *)runLoop;
-(void)sendMessage:(id)arg1 expectedMessage:(unsigned long long)arg2 timeout:(double)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)messageQueue:(id)arg1 didSendMessage:(id)arg2 ;
-(void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2 ;
-(id)messageQueue:(id)arg1 dataForMessage:(id)arg2 ;
@end

