/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {

	_PASLock* _lock;
	id _blacklistNotificationToken;
	ATXAppPredictionBlacklist* _appPredictionBlacklist;
	int _prefsChangeNotificationToken;

}
+(id)sharedInstanceWithoutAppPredictionBlacklist;
+(id)sharedInstanceWithAppPredictionBlacklist;
-(id)init;
-(void)dealloc;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(BOOL)arg3 ;
-(id)initWithAppPredictionBlacklist:(id)arg1 ;
-(void)setBlacklistFromAssetData:(id)arg1 predictionBlacklist:(id)arg2 shortcutBlacklist:(id)arg3 primaryShortcutBlacklist:(id)arg4 ;
-(void)addToBlacklists:(id)arg1 blacklistAppList:(id)arg2 blacklistActionList:(id)arg3 blacklistAppAndActionList:(id)arg4 ;
-(id)disabledBundlesInSettings;
-(id)_perfsDisabledApps;
-(id)spotlightDisabledShortcutsInSettings;
-(void)_handlePrefsChange;
-(BOOL)isBundleIdBlacklisted:(id)arg1 ;
-(BOOL)shouldPredictBundleId:(id)arg1 action:(id)arg2 ;
-(id)shouldPredictBundleIdHelper:(id)arg1 action:(id)arg2 ;
@end

