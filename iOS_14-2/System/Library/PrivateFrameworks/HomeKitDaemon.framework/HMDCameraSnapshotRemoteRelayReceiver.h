/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotReceiverProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSRelayReceiverDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;
@class HMDCameraSnapshotIDSRelayReceiver, NSString;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging> {

	id<HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;
	HMDCameraSnapshotIDSRelayReceiver* _relayReceiver;

}

@property (assign,nonatomic,__weak) id<HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMDCameraSnapshotIDSRelayReceiver * relayReceiver;                             //@synthesize relayReceiver=_relayReceiver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraSnapshotRemoteRelayReceiverDelegate>)delegate;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDCameraSnapshotRemoteRelayReceiverDelegate>)arg1 ;
-(void)dealloc;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_getSnapshot:(unsigned long long)arg1 ;
-(HMDCameraSnapshotIDSRelayReceiver *)relayReceiver;
-(void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3 ;
-(void)relayReceiverDidAcceptIDSInvitation:(id)arg1 ;
-(void)relayReceiverIDSSessionDidStart:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9 ;
-(void)snapShotSendFailed:(id)arg1 ;
-(void)_callDidSaveImageDelegateWithError:(id)arg1 ;
-(void)_callGettingImageDelegate:(id)arg1 ;
-(void)setRelayReceiver:(HMDCameraSnapshotIDSRelayReceiver *)arg1 ;
@end

