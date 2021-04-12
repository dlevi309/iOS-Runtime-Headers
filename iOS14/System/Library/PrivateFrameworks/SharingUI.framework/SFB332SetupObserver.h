/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <Sharing/SFXPCClient.h>

@protocol SFB332UIProtocol;
@interface SFB332SetupObserver : SFXPCClient {

	id<SFB332UIProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SFB332UIProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)showEnableBluetoothPill;
-(void)setShouldShowWhatsNew:(BOOL)arg1 ;
-(void)acquireHUDTransaction;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)dismissChargingStatus;
-(id<SFB332UIProtocol>)delegate;
-(id)remoteObjectInterface;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(id)exportedInterface;
-(void)releaseHUDTransaction;
-(void)showPairingFailure;
-(id)machServiceName;
-(void)pairTapped;
-(void)activate;
-(void)showChargingStatus;
-(void)showSubsequentPairSuccess;
-(void)setDelegate:(id<SFB332UIProtocol>)arg1 ;
-(void)showPairingStarted;
-(void)invalidate;
-(void)dismissUnlockPrompt;
-(void)showPairingSuccess;
-(void)enableBluetoothTapped;
-(void)dismissUIAnimated:(BOOL)arg1 ;
-(void)dismissBTPrompt;
-(void)showUnlockPrompt;
-(void)updateDeviceInfoWithName:(id)arg1 batteryLevel:(double)arg2 batteryLevelKnown:(BOOL)arg3 edge:(unsigned long long)arg4 orientation:(unsigned long long)arg5 ;
-(void)showPairConsentPrompt;
@end

