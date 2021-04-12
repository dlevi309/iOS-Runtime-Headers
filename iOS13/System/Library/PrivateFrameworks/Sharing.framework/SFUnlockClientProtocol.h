/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFUnlockClientProtocol <NSObject>
@required
-(void)keyDeviceLocked:(id)arg1;
-(void)enabledDevice:(id)arg1;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2;
-(void)beganAttemptWithDevice:(id)arg1;
-(void)completedUnlockWithDevice:(id)arg1;
-(void)failedUnlockWithError:(id)arg1;

@end

