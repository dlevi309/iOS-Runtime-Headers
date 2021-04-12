/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@protocol VCVideoReceiverDelegate, VCMediaStreamSyncSource;
@class NSString;

@interface VCVideoReceiverBase : NSObject <VCMediaStreamSyncDestination, VCConnectionChangedHandler> {

	int _remoteVideoOrientation;
	id<VCVideoReceiverDelegate> _delegate;
	id<VCMediaStreamSyncSource> _syncSource;
	double _roundTripTime;
	double _lastReceivedVideoRTPPacketTime;
	double _lastReceivedVideoRTCPPacketTime;

}

@property (assign) int remoteVideoOrientation;                                       //@synthesize remoteVideoOrientation=_remoteVideoOrientation - In the implementation block
@property (assign,nonatomic) id<VCVideoReceiverDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamSyncSource> syncSource;                 //@synthesize syncSource=_syncSource - In the implementation block
@property (assign) double roundTripTime;                                             //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (readonly) double lastReceivedVideoRTPPacketTime;                          //@synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime - In the implementation block
@property (readonly) double lastReceivedVideoRTCPPacketTime;                         //@synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime - In the implementation block
@property (nonatomic,readonly) unsigned lastDisplayedFrameRTPTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VCVideoReceiverDelegate>)delegate;
-(void)setDelegate:(id<VCVideoReceiverDelegate>)arg1 ;
-(void)pauseVideo;
-(double)roundTripTime;
-(void)startVideo;
-(void)stopVideo;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setTargetStreamID:(unsigned short)arg1 ;
-(BOOL)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)setSyncSource:(id<VCMediaStreamSyncSource>)arg1 ;
-(id<VCMediaStreamSyncSource>)syncSource;
-(void)setRoundTripTime:(double)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_AV77*)arg1 ;
-(void)rtcpSendIntervalElapsed;
-(unsigned)lastDisplayedFrameRTPTimestamp;
-(void)collectChannelMetrics:(SCD_Struct_VC69*)arg1 interval:(float)arg2 ;
-(int)remoteVideoOrientation;
-(void)setRemoteVideoOrientation:(int)arg1 ;
-(double)lastReceivedVideoRTPPacketTime;
-(double)lastReceivedVideoRTCPPacketTime;
@end

