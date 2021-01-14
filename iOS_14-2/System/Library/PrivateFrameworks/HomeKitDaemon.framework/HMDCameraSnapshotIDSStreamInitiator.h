/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamInitiatorDelegate;
@class HMDSnapshotFile, NSString, NSObject;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <IDSServiceDelegate, HMFLogging> {

	HMDSnapshotFile* _snapshotFile;
	NSString* _destinationID;
	NSString* _sendFileIdentifier;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSStreamInitiatorDelegate> _delegate;

}

@property (nonatomic,retain) NSString * destinationID;                                                       //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) NSString * sendFileIdentifier;                                                  //@synthesize sendFileIdentifier=_sendFileIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * snapshotFile;                                                 //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id<HMDCameraSnapshotIDSStreamInitiatorDelegate>)delegate;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
-(void)sendFile:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)setSnapshotFile:(HMDSnapshotFile *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(void)_callFileTransferFailed:(id)arg1 ;
-(void)_sendFile:(id)arg1 ;
-(void)setSendFileIdentifier:(NSString *)arg1 ;
-(NSString *)sendFileIdentifier;
@end

