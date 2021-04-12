/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_source;
@class HMFActivity, IDSSession, HMDCameraIDSSessionInviterDeviceVerifier, NSUUID, NSMutableData, NSObject, NSString;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {

	HMFActivity* _activity;
	IDSSession* _idsSession;
	id<HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
	HMDCameraIDSSessionInviterDeviceVerifier* _sessionInviterDeviceVerifier;
	NSUUID* _machOUUID;
	NSMutableData* _relayData;
	unsigned long long _bytesToReceive;
	unsigned long long _bytesSoFar;
	NSObject*<OS_dispatch_source> _socketSource;

}

@property (retain) IDSSession * idsSession;                                                                //@synthesize idsSession=_idsSession - In the implementation block
@property (__weak,readonly) id<HMDCameraSnapshotIDSRelayReceiverDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMDCameraIDSSessionInviterDeviceVerifier * sessionInviterDeviceVerifier;              //@synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier - In the implementation block
@property (readonly) NSUUID * machOUUID;                                                                   //@synthesize machOUUID=_machOUUID - In the implementation block
@property (retain) NSMutableData * relayData;                                                              //@synthesize relayData=_relayData - In the implementation block
@property (assign) unsigned long long bytesToReceive;                                                      //@synthesize bytesToReceive=_bytesToReceive - In the implementation block
@property (assign) unsigned long long bytesSoFar;                                                          //@synthesize bytesSoFar=_bytesSoFar - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> socketSource;                                             //@synthesize socketSource=_socketSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5 ;
-(id<HMDCameraSnapshotIDSRelayReceiverDelegate>)delegate;
-(id)logIdentifier;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)dealloc;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 machOUUID:(id)arg3 workQueue:(id)arg4 sessionInviterDeviceVerifier:(id)arg5 delegate:(id)arg6 ;
-(HMDCameraIDSSessionInviterDeviceVerifier *)sessionInviterDeviceVerifier;
-(void)setSocketSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)socketSource;
-(void)_handleDataFromSocket:(id)arg1 ;
-(void)_didReceiveData:(id)arg1 error:(id)arg2 ;
-(unsigned long long)bytesToReceive;
-(void)setBytesToReceive:(unsigned long long)arg1 ;
-(NSMutableData *)relayData;
-(unsigned long long)bytesSoFar;
-(void)setBytesSoFar:(unsigned long long)arg1 ;
-(NSUUID *)machOUUID;
-(void)_startDataReceive;
-(void)setRelayData:(NSMutableData *)arg1 ;
@end
