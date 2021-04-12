/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotReceiverProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSStreamReceiverDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;
@class HMDCameraSnapshotIDSStreamReceiver, NSString;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging> {

	id<HMDCameraSnapshotRemoteStreamReceiverDelegate> _delegate;
	HMDCameraSnapshotIDSStreamReceiver* _relayReceiver;

}

@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMDCameraSnapshotIDSStreamReceiver * relayReceiver;                               //@synthesize relayReceiver=_relayReceiver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotRemoteStreamReceiverDelegate>)delegate;
-(id)logIdentifier;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_getSnapshot:(unsigned long long)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9 ;
-(HMDCameraSnapshotIDSStreamReceiver *)relayReceiver;
-(void)snapShotSendFailed:(id)arg1 ;
-(void)_callDidSaveImageDelegateWithError:(id)arg1 ;
-(void)_callGettingImageDelegate:(id)arg1 ;
-(void)setRelayReceiver:(HMDCameraSnapshotIDSStreamReceiver *)arg1 ;
-(void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2 ;
@end

