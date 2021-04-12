/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@interface AVOutputDeviceFrecencyManager : NSObject
+(id)_frecentsReaderAfterMigrationIfNecessary;
+(id)_frecentsWriter;
+(BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg1 ;
+(void)updateFrecencyListForDeviceID:(id)arg1 ;
+(id)_frecentsFilePath;
+(id)_frecentsContainerPath;
+(id)_applicationSupportPath;
+(double)frecencyScoreForDeviceID:(id)arg1 ;
@end

