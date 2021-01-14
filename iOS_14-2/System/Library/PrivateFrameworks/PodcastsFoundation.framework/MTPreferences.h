/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@interface MTPreferences : NSObject
+(id)sharedUserDefaults;
+(id)_defaultSettings;
+(BOOL)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(BOOL)arg2 ;
+(void)registerDefaults;
+(void)moveUserDefaultToSharedContainer:(id)arg1 ;
+(BOOL)copySettingsToSharedContainer;
@end

