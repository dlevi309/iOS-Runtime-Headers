/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_source, OS_dispatch_queue, HMDCameraSnapshotIDSRelayReceiverDelegate;
@class HMDSnapshotFile, NSMutableData, NSObject, IDSSession, HMDCameraIDSSessionInviterDeviceVerifier, NSString;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {

	HMDSnapshotFile* _snapshotFile;
	NSMutableData* _relayData;
	unsigned long long _bytesToReceive;
	unsigned long long _bytesSoFar;
	NSObject*<OS_dispatch_source> _socketSource;
	IDSSession* _idsSession;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
	HMDCameraIDSSessionInviterDeviceVerifier* _sessionInviterDeviceVerifier;

}

@property (nonatomic,retain) IDSSession * idsSession;                                                                //@synthesize idsSession=_idsSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                           //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotIDSRelayReceiverDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDCameraIDSSessionInviterDeviceVerifier * sessionInviterDeviceVerifier;              //@synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier - In the implementation block
@property (nonatomic,readonly) HMDSnapshotFile * snapshotFile;                                                       //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,retain) NSMutableData * relayData;                                                              //@synthesize relayData=_relayData - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToReceive;                                                      //@synthesize bytesToReceive=_bytesToReceive - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSoFar;                                                          //@synthesize bytesSoFar=_bytesSoFar - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> socketSource;                                             //@synthesize socketSource=_socketSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotIDSRelayReceiverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5 ;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_source>)socketSource;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(HMDCameraIDSSessionInviterDeviceVerifier *)sessionInviterDeviceVerifier;
-(void)_callFileReceived:(id)arg1 ;
-(void)setSocketSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleDataFromSocket:(id)arg1 ;
-(unsigned long long)bytesToReceive;
-(void)setBytesToReceive:(unsigned long long)arg1 ;
-(NSMutableData *)relayData;
-(unsigned long long)bytesSoFar;
-(void)setBytesSoFar:(unsigned long long)arg1 ;
-(id)_postProcessFileData;
-(void)_startFileReceive;
-(void)setRelayData:(NSMutableData *)arg1 ;
@end

