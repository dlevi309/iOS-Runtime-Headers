/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/SUCoreFSMDelegate.h>
#import <libobjc.A.dylib/SUCoreMobileAssetDelegate.h>
#import <libobjc.A.dylib/SUCoreMSUDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class SUCoreDescriptor, NSObject, NSString, NSDictionary, SUCoreFSM, SUCorePolicy, SUCoreMobileAsset, SUCoreMSU;

@interface SUCoreUpdate : NSObject <SUCoreFSMDelegate, SUCoreMobileAssetDelegate, SUCoreMSUDelegate> {

	SUCoreDescriptor* _updateDescriptor;
	id _updateDelegate;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSString* _updateUUID;
	NSString* _updateName;
	NSDictionary* _stateTable;
	SUCoreFSM* _updateFSM;
	long long _targetPhase;
	SUCorePolicy* _policy;
	SUCoreMobileAsset* _maControl;
	SUCoreMSU* _msuControl;
	NSObject*<OS_os_transaction> _updateTransaction;

}

@property (nonatomic,readonly) SUCoreDescriptor * updateDescriptor;                                   //@synthesize updateDescriptor=_updateDescriptor - In the implementation block
@property (nonatomic,__weak,readonly) id updateDelegate;                                              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;              //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSString * updateUUID;                                                 //@synthesize updateUUID=_updateUUID - In the implementation block
@property (nonatomic,readonly) NSString * updateName;                                                 //@synthesize updateName=_updateName - In the implementation block
@property (nonatomic,readonly) NSDictionary * stateTable;                                             //@synthesize stateTable=_stateTable - In the implementation block
@property (nonatomic,readonly) SUCoreFSM * updateFSM;                                                 //@synthesize updateFSM=_updateFSM - In the implementation block
@property (assign,nonatomic) long long targetPhase;                                                   //@synthesize targetPhase=_targetPhase - In the implementation block
@property (nonatomic,retain) SUCorePolicy * policy;                                                   //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) SUCoreMobileAsset * maControl;                                         //@synthesize maControl=_maControl - In the implementation block
@property (nonatomic,readonly) SUCoreMSU * msuControl;                                                //@synthesize msuControl=_msuControl - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> updateTransaction;                          //@synthesize updateTransaction=_updateTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_generateStateTable;
-(NSString *)description;
-(SUCorePolicy *)policy;
-(void)setPolicy:(SUCorePolicy *)arg1 ;
-(id)updateDelegate;
-(NSString *)updateName;
-(NSDictionary *)stateTable;
-(long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6 ;
-(long long)actionUnknownAction:(id)arg1 error:(id*)arg2 ;
-(long long)targetPhase;
-(void)setTargetPhase:(long long)arg1 ;
-(long long)actionLoadBrain:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportBrainLoadProgress:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportBrainLoadSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionPreflightDownloadSU:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportDownloadPreflighted:(id)arg1 error:(id*)arg2 ;
-(long long)actionDecideDownloadSpaceCheck:(id)arg1 error:(id*)arg2 ;
-(long long)actionTargetDownloadSpaceCheck:(id)arg1 error:(id*)arg2 ;
-(long long)actionDecideErrorSpaceCheck:(id)arg1 error:(id*)arg2 ;
-(long long)actionCheckSpace:(id)arg1 error:(id*)arg2 ;
-(long long)actionDownloadSU:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportDownloadProgress:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportDownloadStalled:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportSUDownloaded:(id)arg1 error:(id*)arg2 ;
-(long long)actionPrepareUpdate:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportPrepareProgress:(id)arg1 error:(id*)arg2 ;
-(long long)actionSuspendUpdate:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportPrepared:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportNotSuspended:(id)arg1 error:(id*)arg2 ;
-(long long)actionResumeUpdate:(id)arg1 error:(id*)arg2 ;
-(long long)actionApplyUpdate:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportApplyFailed:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportApplied:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportAttemptFailure:(id)arg1 error:(id*)arg2 ;
-(long long)actionRemovePrepared:(id)arg1 error:(id*)arg2 ;
-(long long)actionRemoveSU:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelPrepare:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportCanceled:(id)arg1 error:(id*)arg2 ;
-(long long)actionUpdateTarget:(id)arg1 error:(id*)arg2 ;
-(long long)actionReportAnomalyAPI:(id)arg1 error:(id*)arg2 ;
-(SUCoreFSM *)updateFSM;
-(void)_adjustTarget:(long long)arg1 withPolicy:(id)arg2 ;
-(SUCoreMSU *)msuControl;
-(SUCoreMobileAsset *)maControl;
-(NSString *)updateUUID;
-(SUCoreDescriptor *)updateDescriptor;
-(void)_updateBrainLoadStalled:(id)arg1 ;
-(void)_updateBrainLoadProgress:(id)arg1 ;
-(void)_updateBrainLoaded:(id)arg1 ;
-(void)_eventWhetherAtTarget:(long long)arg1 eventAtTarget:(id)arg2 eventContinue:(id)arg3 ;
-(void)_updateAssetDownloadPreflighted;
-(void)_updateAssetDownloadProgress:(id)arg1 ;
-(void)_updateAssetDownloadStalled:(id)arg1 ;
-(void)_updateAssetDownloaded:(id)arg1 ;
-(void)_updatePrepareProgress:(id)arg1 ;
-(void)_updatePrepared:(id)arg1 ;
-(void)_updateApplied;
-(void)_applyAttemptFailed:(id)arg1 ;
-(void)_updateAttemptFailed:(id)arg1 ;
-(void)_cleanupAfterAttempt;
-(void)_updateCanceled;
-(void)_updateAnomaly:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 updateDescriptor:(id)arg2 updateUUID:(id)arg3 withCallbackQueue:(id)arg4 ;
-(NSObject*<OS_os_transaction>)updateTransaction;
-(void)setUpdateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(void)_trackUpdateAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 ;
-(void)maDownloadProgress:(id)arg1 ;
-(void)maDownloadStalled:(id)arg1 ;
-(void)maDownloaded:(id)arg1 ;
-(void)maDownloadFailed:(id)arg1 ;
-(void)maAssetRemoved;
-(void)maAssetRemoveFailed:(id)arg1 ;
-(void)maAnomaly:(id)arg1 ;
-(void)msuBrainLoadProgress:(id)arg1 ;
-(void)msuBrainLoadStalled:(id)arg1 ;
-(void)msuBrainLoaded:(id)arg1 ;
-(void)msuBrainLoadFailed:(id)arg1 ;
-(void)msuSUDownloadPreflighted;
-(void)msuSUDownloadPreflightFailed:(id)arg1 ;
-(void)msuPrepareProgress:(id)arg1 ;
-(void)msuPrepared:(id)arg1 ;
-(void)msuPrepareFailed:(id)arg1 ;
-(void)msuSuspended;
-(void)msuSuspendFailed:(id)arg1 ;
-(void)msuResumed;
-(void)msuResumeFailed:(id)arg1 ;
-(void)msuApplied;
-(void)msuApplyFailed:(id)arg1 ;
-(void)msuRemoved;
-(void)msuRemoveFailed:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 updateDescriptor:(id)arg2 updateUUID:(id)arg3 ;
-(void)targetBrainLoaded:(id)arg1 ;
-(void)targetDownloadPreflighted:(id)arg1 ;
-(void)targetDownloaded:(id)arg1 ;
-(void)targetPrepared:(id)arg1 ;
-(void)targetApplied:(id)arg1 ;
-(void)cancelCurrentUpdate;
@end

