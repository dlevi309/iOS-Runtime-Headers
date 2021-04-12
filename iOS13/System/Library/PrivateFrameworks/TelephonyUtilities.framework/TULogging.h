/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TULogging : NSObject
+(void)enablePhoneLogging;
+(void)disablePhoneLogging;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
@end

