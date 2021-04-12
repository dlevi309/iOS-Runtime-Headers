/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TULogging : NSObject
+(void)enablePhoneLogging;
+(void)disablePhoneLogging;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
@end

