/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject {

	NSMutableDictionary* _statusBarOverridesToRecentScenes;
	NSMutableDictionary* _statusBarOverridesToRecentSceneResetTimers;

}
-(BOOL)_isUILocked;
-(id)_workspace;
-(BOOL)handleTapForStyleOverrides:(int)arg1 ;
-(BOOL)canHandleTapForStatusBarStyleOverrides:(int)arg1 ;
-(id)_handlerForStyleOverrides:(int)arg1 ;
-(void)_addRecentlyTappedApplicationDestinations:(id)arg1 forStyleOverrides:(int)arg2 ;
-(BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handlerForStyleOverrides:(int)arg1 orOutApplications:(id*)arg2 ;
-(id)_allApplicationDestinationsForApplications:(id)arg1 ;
-(id)_foregroundApplicationDestinationsForApplications:(id)arg1 ;
-(id)_appDestinationForNextSceneToVisitForApps:(id)arg1 styleOverrides:(int)arg2 ;
-(id)_recentlyTappedApplicationDestinationsForStyleOverrides:(int)arg1 ;
-(void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1 ;
-(void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1 ;
@end

