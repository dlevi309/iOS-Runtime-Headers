/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@class VCVideoRule, NSString;

@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler> {

	void* _controlInfoGenerator;
	unsigned _captureWidth;
	unsigned _captureHeight;
	unsigned _encodingWidth;
	unsigned _encodingHeight;
	unsigned _targetFramerate;
	unsigned _targetBitrate;
	unsigned _targetBitrateChangeCounter;
	unsigned _txMaxBitrate;
	unsigned _txMinBitrate;
	unsigned _temporaryMaximumBitrate;
	VCVideoRule* _videoRule;
	SCD_Struct_AV77 _latestSampleBufferTimestamp;
	double _lastKeyFrameSentTime;
	unsigned _timestamp;
	unsigned _lastSentAudioSampleTime;
	double _lastSentAudioHostTime;
	BOOL _isServerBasedBandwidthProbingEnabled;

}

@property (assign) SCD_Struct_AV77 lastFrameTime;                                    //@synthesize latestSampleBufferTimestamp=_latestSampleBufferTimestamp - In the implementation block
@property (assign) double lastKeyFrameSentTime;                                      //@synthesize lastKeyFrameSentTime=_lastKeyFrameSentTime - In the implementation block
@property (assign) unsigned lastRTPTimestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned lastSentAudioSampleTime;                                 //@synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime - In the implementation block
@property (assign) double lastSentAudioHostTime;                                     //@synthesize lastSentAudioHostTime=_lastSentAudioHostTime - In the implementation block
@property (assign,nonatomic) BOOL isServerBasedBandwidthProbingEnabled;              //@synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled - In the implementation block
@property (assign,nonatomic) unsigned targetBitrate;                                 //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) unsigned targetBitrateChangeCounter;                    //@synthesize targetBitrateChangeCounter=_targetBitrateChangeCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithConfig:(id)arg1 ;
-(unsigned)targetBitrate;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)generateKeyFrame;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)setLastKeyFrameSentTime:(double)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(unsigned)lastSentAudioSampleTime;
-(void)collectChannelMetrics:(SCD_Struct_VC69*)arg1 interval:(float)arg2 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(void)setLastSentAudioHostTime:(double)arg1 ;
-(SCD_Struct_AV77)lastFrameTime;
-(void)setLastFrameTime:(SCD_Struct_AV77)arg1 ;
-(unsigned)lastRTPTimestamp;
-(void)setLastRTPTimestamp:(unsigned)arg1 ;
-(double)lastKeyFrameSentTime;
-(double)lastSentAudioHostTime;
-(BOOL)isServerBasedBandwidthProbingEnabled;
-(unsigned)targetBitrateChangeCounter;
-(void)setTargetBitrateChangeCounter:(unsigned)arg1 ;
@end

