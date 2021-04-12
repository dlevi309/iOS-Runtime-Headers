/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@interface ADLockScreenManager : NSObject
+(id)sharedManager;
-(BOOL)isDeviceLocked;
-(void)requestPassCodeUnlockUIWithBlock:(/*^block*/id)arg1 ;
@end

