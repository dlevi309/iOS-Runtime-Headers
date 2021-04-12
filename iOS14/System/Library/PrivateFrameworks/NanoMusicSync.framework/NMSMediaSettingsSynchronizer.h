/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_reconcileGreenTeaSettingsIfNecessary;
-(void)beginObservingUpdates;
-(void)_syncPodcastDefaultsIfNecessary;
-(id)_podcastsUserDefaults;
-(void)endObservingUpdates;
-(void)_createDefaultGreenTeaSettingsIfNecessary;
-(id)_podcastsAppGroupPath;
-(void)dealloc;
@end

