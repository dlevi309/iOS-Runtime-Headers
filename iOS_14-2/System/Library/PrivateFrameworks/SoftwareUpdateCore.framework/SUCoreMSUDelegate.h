/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol SUCoreMSUDelegate <NSObject>
@optional
-(void)msuBrainLoadProgress:(id)arg1;
-(void)msuBrainLoadStalled:(id)arg1;
-(void)msuBrainLoaded:(id)arg1;
-(void)msuBrainLoadFailed:(id)arg1;
-(void)msuSUDownloadPreflighted;
-(void)msuSUDownloadPreflightFailed:(id)arg1;
-(void)msuPersonalizePreflighted;
-(void)msuPersonalizePreflightFailed:(id)arg1;
-(void)msuFDRRecoveryPreflighted;
-(void)msuFDRRecoveryPreflightFailed:(id)arg1;
-(void)msuWakeupPreflighted;
-(void)msuWakeupPreflightFailed:(id)arg1;
-(void)msuPrerequisiteCheckPreflighted;
-(void)msuPrerequisiteCheckPreflightFailed:(id)arg1;
-(void)msuPrepareProgress:(id)arg1;
-(void)msuPrepared:(id)arg1;
-(void)msuPrepareFailed:(id)arg1;
-(void)msuSuspended;
-(void)msuSuspendFailed:(id)arg1;
-(void)msuResumed;
-(void)msuResumeFailed:(id)arg1;
-(void)msuApplied;
-(void)msuApplyFailed:(id)arg1;
-(void)msuRemoved;
-(void)msuRemoveFailed:(id)arg1;
-(void)msuAnomaly:(id)arg1;

@end

