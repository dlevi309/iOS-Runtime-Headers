/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class _ATXAppInfoManager, NSDictionary, NSObject;

@interface _ATXAppInstallMonitor : NSObject {

	_ATXAppInfoManager* _appInfoManager;
	NSDictionary* _assetData;
	NSObject*<OS_dispatch_queue> _installQueue;
	/*^block*/id _updateCompletionBlock;

}
+(id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)train;
-(BOOL)restoreInProgress;
-(id)initWithAppInfoManager:(id)arg1 ;
-(void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)synchronousUpdateAndBackdate:(BOOL)arg1 ;
-(void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)receivedStateChangeNotification:(id)arg1 ;
-(void)receivedInstallNotification:(id)arg1 ;
-(void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(BOOL)arg2 ;
-(void)receivedUninstallNotification:(id)arg1 ;
-(void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(BOOL)arg2 ;
-(void)handleInstallationOfApps:(id)arg1 andBackdate:(BOOL)arg2 ;
-(void)handleUninstallationOfApps:(id)arg1 ;
-(id)_fetchInstalledApps;
-(id)_fetchAllAppsFromDatastore;
-(id)_fetchAllAppsWithInstallDateFromDatastore;
-(void)setUpdateCompletionBlock:(/*^block*/id)arg1 ;
@end

