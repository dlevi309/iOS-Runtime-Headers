/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCEDUModeUtilities : NSObject
+(BOOL)isEphemeralMultiUser;
+(id)_configureQuotaSizeForSharedDeviceImmediately:(id)arg1 ;
+(id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)arg1 ;
+(BOOL)isFirstSetupBuddyDone;
+(unsigned long long)_getDiskSize;
+(unsigned long long)getDiskAvailableSize;
+(id)configureToSharedDevice;
+(id)configureQuotaSizeForSharedDevice:(id)arg1 ;
+(id)configureResidentUsersNumberForSharedDevice:(id)arg1 ;
@end

