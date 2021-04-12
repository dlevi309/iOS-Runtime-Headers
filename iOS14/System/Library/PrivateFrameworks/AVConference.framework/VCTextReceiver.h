/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCTextFrameReceiver.h>

@protocol VCTextReceiverDelegate;
@class NSArray, VCTextJitterBuffer;

@interface VCTextReceiver : NSObject <VCTextFrameReceiver> {

	tagHANDLE* _rtpHandle;
	unsigned _sampleRate;
	id<VCTextReceiverDelegate> _delegate;
	tagVCRealTimeThread* _receiverThread;
	NSArray* _supportedPayloads;
	VCTextJitterBuffer* _jitterBuffer;
	double _lastReceivedRTPPacketTime;
	double _lastReceivedRTCPPacketTime;
	OpaqueVCTransportStreamRunLoopRef _runLoop;

}

@property (assign,nonatomic) id<VCTextReceiverDelegate> delegate; 
@property (nonatomic,retain) NSArray * supportedPayloads;                      //@synthesize supportedPayloads=_supportedPayloads - In the implementation block
@property (assign,nonatomic) double lastReceivedRTPPacketTime;                 //@synthesize lastReceivedRTPPacketTime=_lastReceivedRTPPacketTime - In the implementation block
@property (assign,nonatomic) double lastReceivedRTCPPacketTime;                //@synthesize lastReceivedRTCPPacketTime=_lastReceivedRTCPPacketTime - In the implementation block
-(id<VCTextReceiverDelegate>)delegate;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(VCTextReceiverConfiguration*)arg1 ;
-(void)setDelegate:(id<VCTextReceiverDelegate>)arg1 ;
-(void)dealloc;
-(void)setSupportedPayloads:(NSArray *)arg1 ;
-(NSArray *)supportedPayloads;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)initializeTextPacket:(tagAudioPacket*)arg1 withMediaPacket:(RTPMediaPacket*)arg2 ;
-(void)processRTPPacket;
-(void)processRTCPPacket;
-(int)retrieveRTPPacket:(tagAudioPacket*)arg1 ;
-(void)splitPacket:(tagAudioPacket*)arg1 packetArray:(tagAudioPacketArray*)arg2 ;
-(void)validateAndEnqueuePackets:(tagAudioPacketArray*)arg1 ;
-(BOOL)isSupportedPayload:(int)arg1 ;
-(BOOL)enqueuePacket:(tagAudioPacket*)arg1 ;
-(tagAudioFrame*)allocFrameWithPacket:(tagAudioPacket*)arg1 data:(char*)arg2 dataLength:(int)arg3 timestamp:(unsigned)arg4 ;
-(BOOL)parsePacket:(tagAudioPacket*)arg1 ;
-(void)didDetectMissingFrame;
-(void)didReceiveFrame:(tagAudioFrame*)arg1 ;
-(void)receiverThreadCallback:(tagVCRealTimeThreadParameters*)arg1 ;
-(void)setLastReceivedRTPPacketTime:(double)arg1 ;
-(void)setLastReceivedRTCPPacketTime:(double)arg1 ;
@end

