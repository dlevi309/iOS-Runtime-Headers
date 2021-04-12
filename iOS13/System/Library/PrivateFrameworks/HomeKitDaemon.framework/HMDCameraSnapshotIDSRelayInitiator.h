/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_source, OS_dispatch_queue, HMDCameraSnapshotIDSRelayInitiatorDelegate;
@class HMDSnapshotFile, HMDDevice, NSMutableData, NSObject, IDSSession, NSString;

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate, HMFLogging> {

	BOOL _idsSessionStarted;
	HMDSnapshotFile* _snapshotFile;
	HMDDevice* _device;
	NSMutableData* _fileLengthAndData;
	NSObject*<OS_dispatch_source> _socketSource;
	IDSSession* _idsSession;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSRelayInitiatorDelegate> _delegate;

}

@property (nonatomic,retain) IDSSession * idsSession;                                                       //@synthesize idsSession=_idsSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL idsSessionStarted;                                                        //@synthesize idsSessionStarted=_idsSessionStarted - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * snapshotFile;                                                //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableData * fileLengthAndData;                                             //@synthesize fileLengthAndData=_fileLengthAndData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> socketSource;                                    //@synthesize socketSource=_socketSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotIDSRelayInitiatorDelegate>)delegate;
-(HMDDevice *)device;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)sendInvitation;
-(id)logIdentifier;
-(void)sendFile:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)socketSource;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(void)_sendInvitation;
-(void)setSnapshotFile:(HMDSnapshotFile *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)_sendFile;
-(BOOL)idsSessionStarted;
-(void)_startFileTransfer;
-(void)_callFileTransferFailed:(id)arg1 ;
-(void)setFileLengthAndData:(NSMutableData *)arg1 ;
-(NSMutableData *)fileLengthAndData;
-(void)setSocketSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIdsSessionStarted:(BOOL)arg1 ;
-(id)_smallData;
@end

