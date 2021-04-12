/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKDiagnosticHostRemoteContext <NSObject>
@required
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2;

@end

