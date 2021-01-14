/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol BKUIPearlEnrollViewDelegate <NSObject>
@required
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1;

@end

