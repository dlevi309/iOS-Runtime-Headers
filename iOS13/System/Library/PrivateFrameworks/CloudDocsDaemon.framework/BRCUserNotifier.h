/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol BRCUserNotifier <NSObject>
@required
-(void)close;
-(void)moveToFront;
-(void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(/*^block*/id)arg3;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorReasonUnknownForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorDeviceOfflineForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorServerNotReachableForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorParticipantLimitReachedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(/*^block*/id)arg2;

@end

