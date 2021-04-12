/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface VCControlChannel : VCObject {

	id _messageReceivedDelegate;
	id _dataReceivedDelegate;
	int _bytesSent;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _bytesReceived;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTimestamp;
	unsigned _reliableMessageResendInterval;
	NSObject*<OS_dispatch_queue> _asyncProcessingQueue;

}

@property (assign,nonatomic) id messageReceivedDelegate;                            //@synthesize messageReceivedDelegate=_messageReceivedDelegate - In the implementation block
@property (assign,nonatomic) id dataReceivedDelegate; 
@property (nonatomic,readonly) unsigned reliableMessageResendInterval;              //@synthesize reliableMessageResendInterval=_reliableMessageResendInterval - In the implementation block
-(id)init;
-(void)dealloc;
-(id)messageReceivedDelegate;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(void)sendReliableMessage:(id)arg1 ;
-(void)setDataReceivedDelegate:(id)arg1 ;
-(BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)setEncryptionWithEncryptionMaterial:(SCD_Struct_VC136*)arg1 ;
-(void)flushActiveMessages;
-(unsigned)reliableMessageResendInterval;
-(void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)broadcastUnreliableMessage:(id)arg1 ;
-(void)setMessageReceivedDelegate:(id)arg1 ;
-(void)throwNotSupportedExceptionForMethod:(id)arg1 ;
-(id)dataReceivedDelegate;
@end

