/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol AXIDCRemoteControllerDelegate;
@class AXIDCPacket, NSNetService, NSMutableArray, NSInputStream, NSOutputStream, NSMutableData, AXIDCMessage, NSString;

@interface AXIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {

	AXIDCPacket* _currentPacket;
	id<AXIDCRemoteControllerDelegate> _delegate;
	NSNetService* _service;
	NSMutableArray* _outputDataQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _inputBuffer;
	AXIDCMessage* _currentMessageInFlight;
	NSMutableData* _outputBuffer;

}

@property (nonatomic,retain) NSMutableData * inputBuffer;                                    //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) AXIDCMessage * currentMessageInFlight;                          //@synthesize currentMessageInFlight=_currentMessageInFlight - In the implementation block
@property (nonatomic,retain) NSNetService * service;                                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDataQueue;                               //@synthesize outputDataQueue=_outputDataQueue - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                    //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                                  //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                                   //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (assign,nonatomic,__weak) id<AXIDCRemoteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(id<AXIDCRemoteControllerDelegate>)delegate;
-(void)setDelegate:(id<AXIDCRemoteControllerDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)outputStream;
-(NSNetService *)service;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setService:(NSNetService *)arg1 ;
-(BOOL)isConnected;
-(id)initWithService:(id)arg1 ;
-(void)receivedData:(id)arg1 ;
-(BOOL)isConnecting;
-(BOOL)sendObject:(id)arg1 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(void)acceptConnection:(int)arg1 ;
-(void)resetConnection;
-(void)setOutputDataQueue:(NSMutableArray *)arg1 ;
-(void)setInputBuffer:(NSMutableData *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setupStream:(id)arg1 ;
-(void)setSecuritySettingsForStream:(id)arg1 ;
-(NSMutableArray *)outputDataQueue;
-(void)finishedSending:(id)arg1 ;
-(void)setCurrentMessageInFlight:(AXIDCMessage *)arg1 ;
-(id)nextMessageInQueue;
-(void)enqueueData:(id)arg1 ;
-(void)didCommunicate;
-(AXIDCMessage *)currentMessageInFlight;
-(NSMutableData *)outputBuffer;
-(void)sendDataChunk;
-(BOOL)outputStreamReady;
-(void)messageWasAcked:(id)arg1 ;
-(void)clearMessageQueue;
-(NSMutableData *)inputBuffer;
@end

