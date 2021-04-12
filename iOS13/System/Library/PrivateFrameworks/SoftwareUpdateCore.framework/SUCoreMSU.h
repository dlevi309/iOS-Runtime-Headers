/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol OS_dispatch_queue, OS_os_transaction;
#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
@class NSObject, NSString, SUCoreDescriptor, MSUUpdateBrainAssetLoader;

@interface SUCoreMSU : NSObject {

	BOOL _performingOperation;
	BOOL _cancelingPrepare;
	BOOL _removingPrepared;
	BOOL _prepareProgressFinal;
	float _nextProgressThreshold;
	NSObject*<OS_dispatch_queue> _msuControlQueue;
	NSObject*<OS_dispatch_queue> _msuOperationQueue;
	NSString* _descriptionName;
	id _msuDelegate;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSString* _updateUUID;
	SUCoreDescriptor* _updateDescriptor;
	MSUUpdateBrainAssetLoader* _brainLoader;
	long long _msuHandle;
	NSObject*<OS_os_transaction> _loadBrainTransaction;
	NSObject*<OS_os_transaction> _preflightDownloadSUTransaction;
	NSObject*<OS_os_transaction> _prepareUpdateTransaction;
	NSObject*<OS_os_transaction> _suspendUpdateTransaction;
	NSObject*<OS_os_transaction> _resumeUpdateTransaction;
	NSObject*<OS_os_transaction> _applyUpdateTransaction;
	NSObject*<OS_os_transaction> _cancelPrepareTransaction;
	NSObject*<OS_os_transaction> _removePreparedTransaction;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> msuControlQueue;                           //@synthesize msuControlQueue=_msuControlQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> msuOperationQueue;                         //@synthesize msuOperationQueue=_msuOperationQueue - In the implementation block
@property (nonatomic,retain) NSString * descriptionName;                                               //@synthesize descriptionName=_descriptionName - In the implementation block
@property (nonatomic,__weak,readonly) id msuDelegate;                                                  //@synthesize msuDelegate=_msuDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;               //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,retain) NSString * updateUUID;                                                    //@synthesize updateUUID=_updateUUID - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * updateDescriptor;                                      //@synthesize updateDescriptor=_updateDescriptor - In the implementation block
@property (assign,nonatomic) BOOL performingOperation;                                                 //@synthesize performingOperation=_performingOperation - In the implementation block
@property (assign,nonatomic) BOOL cancelingPrepare;                                                    //@synthesize cancelingPrepare=_cancelingPrepare - In the implementation block
@property (assign,nonatomic) BOOL removingPrepared;                                                    //@synthesize removingPrepared=_removingPrepared - In the implementation block
@property (assign,nonatomic) float nextProgressThreshold;                                              //@synthesize nextProgressThreshold=_nextProgressThreshold - In the implementation block
@property (assign,nonatomic) BOOL prepareProgressFinal;                                                //@synthesize prepareProgressFinal=_prepareProgressFinal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> loadBrainTransaction;                        //@synthesize loadBrainTransaction=_loadBrainTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> preflightDownloadSUTransaction;              //@synthesize preflightDownloadSUTransaction=_preflightDownloadSUTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> prepareUpdateTransaction;                    //@synthesize prepareUpdateTransaction=_prepareUpdateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> suspendUpdateTransaction;                    //@synthesize suspendUpdateTransaction=_suspendUpdateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> resumeUpdateTransaction;                     //@synthesize resumeUpdateTransaction=_resumeUpdateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> applyUpdateTransaction;                      //@synthesize applyUpdateTransaction=_applyUpdateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> cancelPrepareTransaction;                    //@synthesize cancelPrepareTransaction=_cancelPrepareTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> removePreparedTransaction;                   //@synthesize removePreparedTransaction=_removePreparedTransaction - In the implementation block
@property (nonatomic,retain) MSUUpdateBrainAssetLoader * brainLoader;                                  //@synthesize brainLoader=_brainLoader - In the implementation block
@property (assign,nonatomic) long long msuHandle;                                                      //@synthesize msuHandle=_msuHandle - In the implementation block
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)resumeUpdate;
-(void)applyUpdate:(id)arg1 ;
-(NSString *)descriptionName;
-(void)setDescriptionName:(NSString *)arg1 ;
-(void)loadBrain:(id)arg1 ;
-(void)preflightDownloadSU:(id)arg1 ;
-(NSString *)updateUUID;
-(void)prepareUpdate:(id)arg1 ;
-(void)suspendUpdate;
-(SUCoreDescriptor *)updateDescriptor;
-(void)cancelPrepare;
-(void)removePrepared;
-(void)assignDescriptor:(id)arg1 updateUUID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(void)_reportAnomaly:(id)arg1 ;
-(void)setUpdateUUID:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 withCallbackQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)msuControlQueue;
-(BOOL)performingOperation;
-(BOOL)cancelingPrepare;
-(BOOL)removingPrepared;
-(void)_trackMSUAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 ;
-(void)setUpdateDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setBrainLoader:(MSUUpdateBrainAssetLoader *)arg1 ;
-(MSUUpdateBrainAssetLoader *)brainLoader;
-(void)setLoadBrainTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationLoadBrain:(id)arg1 ;
-(void)setPreflightDownloadSUTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationPreflightSUDownload:(id)arg1 ;
-(void)setPrepareUpdateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationPrepareUpdate:(id)arg1 ;
-(void)setSuspendUpdateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationSuspendUpdate;
-(void)setResumeUpdateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationResumeUpdate;
-(void)setApplyUpdateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_operationApplyUpdate:(id)arg1 ;
-(void)setCancelingPrepare:(BOOL)arg1 ;
-(void)setRemovePreparedTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_removePrepared;
-(NSObject*<OS_dispatch_queue>)msuOperationQueue;
-(void)_addRecordingServiceBaseURLToMSUOptions:(id)arg1 ;
-(void)setPerformingOperation:(BOOL)arg1 ;
-(void)_trackMSUBegin:(id)arg1 ;
-(void)loadBrainProgress:(id)arg1 error:(id)arg2 ;
-(id)_newFirstPreflightOptionsUsingPolicy:(id)arg1 ;
-(void)_addRemoteServerAccessControlToMSUOptions:(id)arg1 usingPolicy:(id)arg2 ;
-(void)_reportSUDownloadPreflighted;
-(void)_trackMSUEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(void)_reportSUDownloadPreflightFailed:(id)arg1 ;
-(void)setNextProgressThreshold:(float)arg1 ;
-(void)setPrepareProgressFinal:(BOOL)arg1 ;
-(void)setMsuHandle:(long long)arg1 ;
-(id)_newUpdateMetricsEventFieldsUsingPolicy:(id)arg1 ;
-(void)_reportPrepared:(id)arg1 ;
-(void)_reportPrepareFailed:(id)arg1 ;
-(long long)msuHandle;
-(void)_reportSuspended;
-(void)_reportSuspendFailed:(id)arg1 ;
-(void)_reportResumed;
-(void)_reportResumeFailed:(id)arg1 ;
-(void)_reportApplied;
-(void)_reportApplyFailed:(id)arg1 ;
-(void)_reportRemoved;
-(void)_reportRemoveFailed:(id)arg1 ;
-(void)setRemovingPrepared:(BOOL)arg1 ;
-(void)_reportBrainLoadStalled:(id)arg1 ;
-(void)_reportBrainLoaded:(id)arg1 ;
-(void)_reportBrainLoadProgress:(id)arg1 ;
-(void)_reportBrainLoadFailed:(id)arg1 ;
-(float)nextProgressThreshold;
-(BOOL)prepareProgressFinal;
-(void)_reportPrepareProgress:(id)arg1 ;
-(id)msuDelegate;
-(NSObject*<OS_os_transaction>)loadBrainTransaction;
-(NSObject*<OS_os_transaction>)preflightDownloadSUTransaction;
-(NSObject*<OS_os_transaction>)prepareUpdateTransaction;
-(NSObject*<OS_os_transaction>)suspendUpdateTransaction;
-(NSObject*<OS_os_transaction>)resumeUpdateTransaction;
-(NSObject*<OS_os_transaction>)applyUpdateTransaction;
-(NSObject*<OS_os_transaction>)removePreparedTransaction;
-(void)_trackMSUAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 underlying:(id)arg4 ;
-(int)prepareProgress:(CFDictionaryRef)arg1 ;
-(void)_trackMSUEnd:(id)arg1 ;
-(NSObject*<OS_os_transaction>)cancelPrepareTransaction;
-(void)setCancelPrepareTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

