/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/SFUnlockClientProtocol.h>

@protocol SFAutoUnlockManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {

	id<SFAutoUnlockManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) id<SFAutoUnlockManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double spinnerDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)autoUnlockSupported;
+(BOOL)autoUnlockEnabled:(unsigned)arg1 ;
+(BOOL)bluetoothAndWiFiEnabled;
+(void)enableBluetoothAndWiFi;
-(id)init;
-(id<SFAutoUnlockManagerDelegate>)delegate;
-(void)setDelegate:(id<SFAutoUnlockManagerDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)repairCloudPairing;
-(void)eligibleAutoUnlockDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2 ;
-(void)cancelEnablingAutoUnlockForDevice:(id)arg1 ;
-(void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1 ;
-(void)cancelAutoUnlock;
-(void)autoUnlockStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authPromptInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keyDeviceLocked:(id)arg1 ;
-(void)enabledDevice:(id)arg1 ;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2 ;
-(void)beganAttemptWithDevice:(id)arg1 ;
-(void)completedUnlockWithDevice:(id)arg1 ;
-(void)failedUnlockWithError:(id)arg1 ;
-(double)spinnerDelay;
-(void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 ;
-(void)attemptAutoUnlock;
@end

