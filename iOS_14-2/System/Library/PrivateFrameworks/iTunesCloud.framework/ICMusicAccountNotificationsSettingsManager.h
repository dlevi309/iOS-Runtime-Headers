/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICMusicAccountNotificationsSettingsManager : NSObject
+(id)sharedManager;
-(id)_getSwitchesDependingOnSubscriptionStatus:(id)arg1 withResponse:(id)arg2 togglingSwitchesToValue:(BOOL)arg3 ;
-(id)storeRequestContext;
-(id)cachedAccountNotificationsShowInLibrarySwitch;
-(void)setAccountNotificationsArtistContentFeature:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)arg1 ;
-(void)getAccountNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

