/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamSenderProtocol.h>

@protocol HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;
@class NSNumber, NSObject, HMDDevice, HMDCameraNetworkConfig, AVCPacketRelay, HMFOSTransaction, NSString;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol> {

	id<HMDCameraIDSSessionInitiatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDDevice* _device;
	HMDCameraNetworkConfig* _localNetworkConfig;
	AVCPacketRelay* _packetRelay;
	HMFOSTransaction* _packetRelayTransaction;

}

@property (nonatomic,__weak,readonly) id<HMDCameraIDSSessionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                           //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (nonatomic,retain) AVCPacketRelay * packetRelay;                                            //@synthesize packetRelay=_packetRelay - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * packetRelayTransaction;                               //@synthesize packetRelayTransaction=_packetRelayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * mtu; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraIDSSessionInitiatorDelegate>)delegate;
-(HMDDevice *)device;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSNumber *)mtu;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(id)logIdentifier;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(AVCPacketRelay *)packetRelay;
-(void)setPacketRelay:(AVCPacketRelay *)arg1 ;
-(void)_sendInvitation;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(void)setPacketRelayTransaction:(HMFOSTransaction *)arg1 ;
-(void)_callSessionStarted:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(HMFOSTransaction *)packetRelayTransaction;
@end

