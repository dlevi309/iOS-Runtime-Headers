/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamSenderProtocol.h>

@protocol HMDCameraIDSDeviceConnectionSenderDelegate, OS_dispatch_queue;
@class NSObject, NSString, AVCPacketRelay, HMFOSTransaction, NSNumber;

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol> {

	id<HMDCameraIDSDeviceConnectionSenderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _destinationID;
	AVCPacketRelay* _videoPacketRelay;
	AVCPacketRelay* _audioPacketRelay;
	HMFOSTransaction* _packetRelayTransaction;

}

@property (nonatomic,__weak,readonly) id<HMDCameraIDSDeviceConnectionSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationID;                                               //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) AVCPacketRelay * videoPacketRelay;                                             //@synthesize videoPacketRelay=_videoPacketRelay - In the implementation block
@property (nonatomic,retain) AVCPacketRelay * audioPacketRelay;                                             //@synthesize audioPacketRelay=_audioPacketRelay - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * packetRelayTransaction;                                     //@synthesize packetRelayTransaction=_packetRelayTransaction - In the implementation block
@property (nonatomic,readonly) NSNumber * mtu; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSNumber *)mtu;
-(id<HMDCameraIDSDeviceConnectionSenderDelegate>)delegate;
-(NSString *)destinationID;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned)arg2 cameraAudioSSRC:(unsigned)arg3 ;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(void)setPacketRelayTransaction:(HMFOSTransaction *)arg1 ;
-(HMFOSTransaction *)packetRelayTransaction;
-(void)_socketOpened:(id)arg1 ;
-(AVCPacketRelay *)videoPacketRelay;
-(void)setVideoPacketRelay:(AVCPacketRelay *)arg1 ;
-(AVCPacketRelay *)audioPacketRelay;
-(void)setAudioPacketRelay:(AVCPacketRelay *)arg1 ;
-(void)_startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned)arg2 cameraAudioSSRC:(unsigned)arg3 ;
-(void)_startVideoPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3 ;
-(void)_startAudioPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3 ;
@end
