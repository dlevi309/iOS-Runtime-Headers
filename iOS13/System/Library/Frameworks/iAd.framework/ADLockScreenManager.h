/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@interface ADLockScreenManager : NSObject
+(id)sharedManager;
-(BOOL)isDeviceLocked;
-(void)requestPassCodeUnlockUIWithBlock:(/*^block*/id)arg1 ;
@end

