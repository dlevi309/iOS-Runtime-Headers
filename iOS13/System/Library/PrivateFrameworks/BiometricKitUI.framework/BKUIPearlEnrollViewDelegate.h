/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol BKUIPearlEnrollViewDelegate <NSObject>
@required
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1;

@end

