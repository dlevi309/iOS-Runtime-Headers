/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

