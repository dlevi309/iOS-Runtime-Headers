/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDSyncRequestOperation : CKDOperation {

	/*^block*/id _willBeginSyncRequestWithClientsBlock;
	/*^block*/id _clientSyncStartedBlock;
	/*^block*/id _clientSyncProgressedBlock;
	/*^block*/id _clientSyncCompletedBlock;

}

@property (nonatomic,copy) id willBeginSyncRequestWithClientsBlock;              //@synthesize willBeginSyncRequestWithClientsBlock=_willBeginSyncRequestWithClientsBlock - In the implementation block
@property (nonatomic,copy) id clientSyncStartedBlock;                            //@synthesize clientSyncStartedBlock=_clientSyncStartedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncProgressedBlock;                         //@synthesize clientSyncProgressedBlock=_clientSyncProgressedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncCompletedBlock;                          //@synthesize clientSyncCompletedBlock=_clientSyncCompletedBlock - In the implementation block
-(void)main;
-(id)willBeginSyncRequestWithClientsBlock;
-(id)clientSyncStartedBlock;
-(id)clientSyncProgressedBlock;
-(id)clientSyncCompletedBlock;
-(void)setClientSyncStartedBlock:(id)arg1 ;
-(void)setClientSyncProgressedBlock:(id)arg1 ;
-(void)setClientSyncCompletedBlock:(id)arg1 ;
-(void)setWillBeginSyncRequestWithClientsBlock:(id)arg1 ;
@end

