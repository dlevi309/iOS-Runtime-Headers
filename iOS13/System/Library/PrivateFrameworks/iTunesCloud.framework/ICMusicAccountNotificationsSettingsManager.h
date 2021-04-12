/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICMusicAccountNotificationsSettingsManager : NSObject
+(id)sharedManager;
-(id)storeRequestContext;
-(id)_getSwitchesDependingOnSubscriptionStatus:(id)arg1 withResponse:(id)arg2 togglingSwitchesToValue:(BOOL)arg3 ;
-(void)getAccountNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAccountNotificationsArtistContentFeature:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)arg1 ;
-(id)cachedAccountNotificationsShowInLibrarySwitch;
@end

