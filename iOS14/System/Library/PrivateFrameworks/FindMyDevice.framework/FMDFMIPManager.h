/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface FMDFMIPManager : NSObject {

	NSURL* _managedLostModeFileURL;
	NSURL* _needsLocateAckLostModeFileURL;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSURL * managedLostModeFileURL;                        //@synthesize managedLostModeFileURL=_managedLostModeFileURL - In the implementation block
@property (nonatomic,retain) NSURL * needsLocateAckLostModeFileURL;                 //@synthesize needsLocateAckLostModeFileURL=_needsLocateAckLostModeFileURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
+(id)sharedInstance;
-(id)getNeedsLocateAckLostModeFileURL;
-(BOOL)_checkLostModeInSharedContainer;
-(NSURL *)needsLocateAckLostModeFileURL;
-(void)setDailyLocateReportEnabled:(BOOL)arg1 ;
-(void)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceActivationDidSucceed;
-(BOOL)lockdownShouldDisableDeviceRestore;
-(id)init;
-(id)_postWipePrefPath;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)fmipAccount;
-(void)userNotifiedOfActivationLockForAllPairedDevices;
-(void)fmipAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)pathsToPreserveAcrossWipe;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)signatureHeadersWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)lostModeInfo;
-(void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_needsAckLostModeType;
-(void)addNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activationLockVersionWithCompletion:(/*^block*/id)arg1 ;
-(void)userNotifiedOfActivationLockForPairedDevices:(id)arg1 ;
-(void)clearData:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSURL *)managedLostModeFileURL;
-(void)playSoundWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isActivationLockEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)playSoundWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)lockdownShouldDisableDevicePairing;
-(void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)disableLostMode;
-(void)showDailyLocateReport;
-(void)setNeedsLocateAckLostModeFileURL:(NSURL *)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 ;
-(void)isActivationLockAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateManagedLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_forceFMWUpgradeAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopAlarm;
-(void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)lostModeIsActive;
-(void)disableBiometricIDForLostModeWithCompletion:(/*^block*/id)arg1 ;
-(void)setManagedLostModeFileURL:(NSURL *)arg1 ;
-(void)fmipStateWithCompletion:(/*^block*/id)arg1 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)_managedLostModeType;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_quickFetchFMIPEnabledstate;
-(void)enableManagedLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)enableFMIPInContext:(unsigned long long)arg1 ;
-(void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)soundStoppedForAccessoryIdentifier:(id)arg1 ;
-(void)stopSoundMessageWithCompletion:(/*^block*/id)arg1 ;
-(void)userDidAckManagedLostModeLocateWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAccessoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)lowBatteryLocateEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLostModeActive;
-(BOOL)_isRunningAsMobileUser;
-(BOOL)needsLostModeExitAuth;
-(void)disableFMIPForAccount:(id)arg1 pairedDeviceWithUDID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isManagedLostModeActive;
-(id)getManagedLostModeFileURL;
-(void)didChangeFMIPAccountInfo:(id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(id)enableLostModeWithInfo:(id)arg1 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

