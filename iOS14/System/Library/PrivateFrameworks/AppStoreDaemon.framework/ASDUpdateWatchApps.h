/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@interface ASDUpdateWatchApps : NSObject
+(BOOL)shouldPromptBeforeUpdating;
+(void)shouldPromptBeforeUpdatingWithResultHandler:(/*^block*/id)arg1 ;
+(BOOL)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 error:(id*)arg3 ;
+(void)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
@end

