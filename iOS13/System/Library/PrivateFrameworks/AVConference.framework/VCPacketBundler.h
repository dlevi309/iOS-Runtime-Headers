/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCPacketBundler : NSObject {

	char* _buffer;
	unsigned _bufferSize;
	unsigned _maxPacketSize;
	opaque_pthread_mutex_t _mutex;
	unsigned _packetsPerBundle;
	int _payload;
	unsigned _timestamp;
	unsigned _encodedBufferSize;
	unsigned _accessUnitDataSectionSize;
	unsigned _bundledPackets;
	BOOL _currentBundleVoiceActivity;
	BOOL _lastBundleVoiceActivity;
	tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
	int _bundlingScheme;
	BOOL _allowLargePackets;
	BOOL _isFull;
	int _operatingMode;
	unsigned char _priority;

}

@property (assign,nonatomic) unsigned maxPacketSize; 
@property (assign,nonatomic) BOOL allowLargePackets;                    //@synthesize allowLargePackets=_allowLargePackets - In the implementation block
@property (assign,nonatomic) int payload;                               //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) int bundlingScheme;                        //@synthesize bundlingScheme=_bundlingScheme - In the implementation block
@property (nonatomic,readonly) unsigned packetsPerBundle; 
@property (nonatomic,readonly) char* encodedBuffer; 
@property (nonatomic,readonly) unsigned encodedBufferSize; 
@property (nonatomic,readonly) unsigned bundledPackets;                 //@synthesize bundledPackets=_bundledPackets - In the implementation block
@property (nonatomic,readonly) BOOL isFull;                             //@synthesize isFull=_isFull - In the implementation block
@property (nonatomic,readonly) BOOL isTalkSpurtStart; 
@property (nonatomic,readonly) unsigned char priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(unsigned)timestamp;
-(unsigned char)priority;
-(void)setTimestamp:(unsigned)arg1 ;
-(void)setPayload:(int)arg1 ;
-(int)payload;
-(BOOL)isFull;
-(void)setBundlingScheme:(int)arg1 ;
-(BOOL)setPacketsPerBundle:(unsigned)arg1 ;
-(void)resetBuffer;
-(unsigned)packetsPerBundle;
-(unsigned)maxPacketSize;
-(unsigned)bundledPackets;
-(void)setAllowLargePackets:(BOOL)arg1 ;
-(void)initLock;
-(BOOL)reallocateBufferWithMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(void)releaseBundleBuffer;
-(unsigned)bundleBufferSizeWidthMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(char*)encodedBufferForRFC3640;
-(unsigned)encodedBufferSizeForRFC3640;
-(unsigned)accessUnitHeaderSectionSize;
-(char*)accessUnitDataSectionHead;
-(unsigned)accessUnitHeaderSectionSizeMaximum;
-(BOOL)bundleAudioLegacy:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(BOOL)bundleAudioRFC3640:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(BOOL)_copyInputBytes:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(void)updatePriority:(unsigned char)arg1 ;
-(id)initWithOperatingMode:(int)arg1 ;
-(BOOL)allocateBundleBuffer:(unsigned)arg1 ;
-(void)setMaxPacketSize:(unsigned)arg1 ;
-(char*)encodedBuffer;
-(unsigned)encodedBufferSize;
-(BOOL)isTalkSpurtStart;
-(BOOL)bundleAudio:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 voiceActivity:(BOOL)arg5 priority:(unsigned char)arg6 ;
-(BOOL)allowLargePackets;
-(int)bundlingScheme;
@end

