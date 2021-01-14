/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECDeviceState : NSObject
+(BOOL)isDemoModeEnabled;
+(BOOL)isClassCLocked;
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(BOOL)isUnlocked;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 executeIfUnlocked:(BOOL)arg2 ;
@end

