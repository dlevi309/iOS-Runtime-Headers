/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@interface SUCorePurge : NSObject
+(void)_trackPurgeBegin:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
+(void)checkForExistingPrepareWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)checkForAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllUpdateContentWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllAssetsOfTypes:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_trackPurgeBegin:(id)arg1 withIdentifier:(id)arg2 ;
+(void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
+(void)previousUpdateState:(BOOL*)arg1 tetheredRestore:(BOOL*)arg2 failedBackward:(BOOL*)arg3 failedForward:(BOOL*)arg4 ;
+(void)checkForExistingPrepare:(/*^block*/id)arg1 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)checkForAssetsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllUpdateContent:(/*^block*/id)arg1 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllAssetsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllAssetsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_trackPurgeEnd:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2 ;
@end

