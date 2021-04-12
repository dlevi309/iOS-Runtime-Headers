/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXInternalInstallNotification, _ATXInternalUninstallNotification, NSMutableDictionary;

@interface _ATXRecentInstallCache : NSObject {

	double _ttl;
	_ATXInternalInstallNotification* _installNotificationMonitor;
	_ATXInternalUninstallNotification* _uninstallNotificationMonitor;
	NSMutableDictionary* _recentInstallations;

}
-(id)init;
-(void)reset;
-(id)initTrackingAppsMoreRecentThan:(double)arg1 installMonitor:(id)arg2 uninstallMonitor:(id)arg3 ;
-(id)initTrackingAppsMoreRecentThan:(double)arg1 ;
-(void)_notifiedOfInstalls:(id)arg1 ;
-(void)_notifiedOfUninstalls:(id)arg1 ;
-(id)allRecentlyInstalledApplications;
-(id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)arg1 ;
-(id)_getRecentInstallationsMap;
@end

