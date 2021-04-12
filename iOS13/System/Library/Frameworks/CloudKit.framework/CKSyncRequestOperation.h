/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@interface CKSyncRequestOperation : CKOperation {

	/*^block*/id _willBeginSyncRequestWithClientsBlock;
	/*^block*/id _clientSyncStartedBlock;
	/*^block*/id _clientSyncProgressedBlock;
	/*^block*/id _clientSyncCompletedBlock;
	/*^block*/id _syncRequestCompletionBlock;

}

@property (nonatomic,copy) id willBeginSyncRequestWithClientsBlock;              //@synthesize willBeginSyncRequestWithClientsBlock=_willBeginSyncRequestWithClientsBlock - In the implementation block
@property (nonatomic,copy) id clientSyncStartedBlock;                            //@synthesize clientSyncStartedBlock=_clientSyncStartedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncProgressedBlock;                         //@synthesize clientSyncProgressedBlock=_clientSyncProgressedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncCompletedBlock;                          //@synthesize clientSyncCompletedBlock=_clientSyncCompletedBlock - In the implementation block
@property (nonatomic,copy) id syncRequestCompletionBlock;                        //@synthesize syncRequestCompletionBlock=_syncRequestCompletionBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(id)willBeginSyncRequestWithClientsBlock;
-(id)clientSyncStartedBlock;
-(id)clientSyncProgressedBlock;
-(id)clientSyncCompletedBlock;
-(id)syncRequestCompletionBlock;
-(void)setSyncRequestCompletionBlock:(id)arg1 ;
-(void)setClientSyncStartedBlock:(id)arg1 ;
-(void)setClientSyncProgressedBlock:(id)arg1 ;
-(void)setClientSyncCompletedBlock:(id)arg1 ;
-(void)setWillBeginSyncRequestWithClientsBlock:(id)arg1 ;
@end

