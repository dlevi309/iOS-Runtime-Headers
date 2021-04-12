/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@interface ASDUpdateWatchApps : NSObject
+(BOOL)shouldPromptBeforeUpdating;
+(void)shouldPromptBeforeUpdatingWithResultHandler:(/*^block*/id)arg1 ;
+(BOOL)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 error:(id*)arg3 ;
+(void)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
@end

