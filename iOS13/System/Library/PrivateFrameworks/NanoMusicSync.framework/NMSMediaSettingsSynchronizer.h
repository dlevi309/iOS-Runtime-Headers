/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {

	BOOL _isObserving;
	NSUserDefaults* _mediaPlaybackCoreDefaults;
	NSUserDefaults* _mobileIPodDefaults;
	NSUserDefaults* _nanoMusicSyncDefaults;
	NSUserDefaults* _podcastsDefaults;

}
+(id)sharedSynchronizer;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)endObservingUpdates;
-(void)_createDefaultGreenTeaSettingsIfNecessary;
-(id)_podcastsUserDefaults;
-(void)_syncPodcastDefaultsIfNecessary;
-(id)_podcastsAppGroupPath;
-(void)beginObservingUpdates;
-(void)_reconcileGreenTeaSettingsIfNecessary;
@end

