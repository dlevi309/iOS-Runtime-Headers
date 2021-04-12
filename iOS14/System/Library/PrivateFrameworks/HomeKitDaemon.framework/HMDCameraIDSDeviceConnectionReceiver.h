/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamReceiverSocketProtocol.h>

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;
@class NSObject, IDSSession, NSString;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol> {

	id<HMDCameraIDSDeviceConnectionReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) int remoteAudioSocket; 
@property (nonatomic,readonly) int remoteVideoSocket; 
@property (nonatomic,readonly) IDSSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)delegate;
-(id)logIdentifier;
-(IDSSession *)session;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)setupReceiver:(id)arg1 ;
-(int)remoteAudioSocket;
-(int)remoteVideoSocket;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_socketOpened:(id)arg1 ;
@end

