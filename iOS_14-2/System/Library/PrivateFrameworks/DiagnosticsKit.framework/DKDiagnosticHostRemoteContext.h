/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKDiagnosticHostRemoteContext <NSObject>
@required
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostShowUI:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostRequestPluginReloadOnFinishWithCompletion:(/*^block*/id)arg1;

@end

