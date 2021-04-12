/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECDeviceState : NSObject
+(BOOL)isClassCLocked;
+(BOOL)isUnlocked;
+(BOOL)isDemoModeEnabled;
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 executeIfUnlocked:(BOOL)arg2 ;
@end

