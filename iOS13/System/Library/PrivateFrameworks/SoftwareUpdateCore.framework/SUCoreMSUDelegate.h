/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

