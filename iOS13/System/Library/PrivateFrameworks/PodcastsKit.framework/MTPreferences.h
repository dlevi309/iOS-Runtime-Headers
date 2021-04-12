/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTPreferences : NSObject
+(id)sharedUserDefaults;
+(id)_defaultSettings;
+(void)registerDefaults;
+(void)moveUserDefaultToSharedContainer:(id)arg1 ;
+(BOOL)copySettingsToSharedContainer;
+(BOOL)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(BOOL)arg2 ;
@end

