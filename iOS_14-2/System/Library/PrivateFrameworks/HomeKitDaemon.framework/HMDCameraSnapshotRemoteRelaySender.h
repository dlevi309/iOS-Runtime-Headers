/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotSenderProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotLocalDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSRelayInitiatorDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraSnapshotRemoteRelaySenderDelegate;
@class HMDCameraSnapshotLocal, HMDCameraSnapshotIDSRelayInitiator, NSString;

@interface HMDCameraSnapshotRemoteRelaySender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFLogging> {

	HMDCameraSnapshotLocal* _snapshotLocal;
	id<HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;
	HMDCameraSnapshotIDSRelayInitiator* _relayInitiator;

}

@property (nonatomic,readonly) HMDCameraSnapshotLocal * snapshotLocal;                                      //@synthesize snapshotLocal=_snapshotLocal - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotRemoteRelaySenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotIDSRelayInitiator * relayInitiator;                         //@synthesize relayInitiator=_relayInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraSnapshotRemoteRelaySenderDelegate>)delegate;
-(id)logIdentifier;
-(void)dealloc;
-(HMDCameraSnapshotLocal *)snapshotLocal;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg1 ;
-(void)_callDidCompleteSendImageDelegate:(id)arg1 ;
-(void)snapShotTransferComplete;
-(void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9 ;
-(HMDCameraSnapshotIDSRelayInitiator *)relayInitiator;
-(void)relayInitiatorIDSSessionDidStart:(id)arg1 ;
-(void)relayInitiatorDidSendIDSInvitation:(id)arg1 ;
-(void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2 ;
-(void)relayInitiatorDidSendDataSuccessfully:(id)arg1 ;
-(void)relayInitiatorDidStartDataSend:(id)arg1 ;
-(void)relayInitiator:(id)arg1 didSendData:(id)arg2 ;
@end

