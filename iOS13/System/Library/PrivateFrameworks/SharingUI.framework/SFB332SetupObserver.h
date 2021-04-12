/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <Sharing/SFXPCClient.h>

@protocol SFB332UIProtocol;
@interface SFB332SetupObserver : SFXPCClient {

	id<SFB332UIProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SFB332UIProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<SFB332UIProtocol>)delegate;
-(void)setDelegate:(id<SFB332UIProtocol>)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)activate;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)updateDeviceInfoWithName:(id)arg1 batteryLevel:(double)arg2 batteryLevelKnown:(BOOL)arg3 edge:(unsigned long long)arg4 orientation:(unsigned long long)arg5 ;
-(void)showPairingStarted;
-(void)showEnableBluetoothPill;
-(void)showPairingSuccess;
-(void)showPairingFailure;
-(void)showSubsequentPairSuccess;
-(void)showChargingStatus;
-(void)dismissChargingStatus;
-(void)showUnlockPrompt;
-(void)showPairConsentPrompt;
-(void)dismissUnlockPrompt;
-(void)dismissBTPrompt;
-(void)dismissUIAnimated:(BOOL)arg1 ;
-(void)acquireHUDTransaction;
-(void)releaseHUDTransaction;
-(void)enableBluetoothTapped;
-(void)pairTapped;
@end

