/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSObject;

@interface RENetworkSourceAudioUnit : AUAudioUnit {

	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AVAudioPCMBuffer* _inputBuffer;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer> >* _jitterBuffer;
	shared_ptr<REPacketEncoder>* _encoder;
	long long _targetLatency;
	unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool> >* _payloadPool;
	unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger> >* _encoderMessenger;
	AVAudioPCMBuffer* _cannedRecordingBuffer;
	mutex _cannedRecordingMutex;
	BOOL _shortCircuit;
	BOOL _cannedRecording;
	NSObject*<OS_dispatch_queue> _sendQueue;
	/*^block*/id _sendCompressedBytes;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sendQueue;               //@synthesize sendQueue=_sendQueue - In the implementation block
@property (copy) id sendCompressedBytes;                                           //@synthesize sendCompressedBytes=_sendCompressedBytes - In the implementation block
@property (assign) BOOL shortCircuit;                                              //@synthesize shortCircuit=_shortCircuit - In the implementation block
@property (assign,nonatomic) BOOL cannedRecording;                                 //@synthesize cannedRecording=_cannedRecording - In the implementation block
@property (readonly) unsigned jitterBufferSize; 
@property (nonatomic,readonly) double currentPlaybackTime; 
@property (nonatomic,readonly) int samplesPerPacket; 
@property (nonatomic,readonly) int droppedPacketRecoveryLimit; 
@property (nonatomic,readonly) unsigned long long decodedSampleCount; 
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(NSObject*<OS_dispatch_queue>)sendQueue;
-(id)channelCapabilities;
-(void)deallocateRenderResources;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(double)currentPlaybackTime;
-(void)receiveCompressedBytes:(const char*)arg1 size:(unsigned)arg2 timestamp:(double)arg3 ;
-(BOOL)shortCircuit;
-(void)receive:(id)arg1 timestamp:(unsigned)arg2 ;
-(void)receive:(const char*)arg1 size:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(void)receiveCompressedBytes:(id)arg1 timestamp:(double)arg2 ;
-(void)setCannedRecording:(BOOL)arg1 ;
-(void)configureJitterBufferForTargetLatency:(long long)arg1 ;
-(unsigned)jitterBufferSize;
-(unsigned long long)decodedSampleCount;
-(int)droppedPacketRecoveryLimit;
-(int)samplesPerPacket;
-(void)setSendQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sendCompressedBytes;
-(void)setSendCompressedBytes:(id)arg1 ;
-(void)setShortCircuit:(BOOL)arg1 ;
-(BOOL)cannedRecording;
@end

