/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/RBSTerminationAssertionObserving.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSMutableDictionary, NSString;

@interface CPSClipCleanupManager : NSObject <LSApplicationWorkspaceObserverProtocol, RBSTerminationAssertionObserving> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _pendingTerminationAssertionsByBundleIDs;
	NSMutableDictionary* _clipDeletionPromisesByBundleIDs;
	NSObject*<OS_os_transaction> _deletionTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)_parentBundleIDsFromAppRecord:(id)arg1 ;
-(id)init;
-(void)assertionTargetProcessDidExit:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(void)_registerDistributedNotificationHandler;
-(void)_registerLocalNotifications;
-(void)_removeClipCancellingPendingRemovalIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_uninstallClipWithBundleIdentifier:(id)arg1 deletionPromise:(id)arg2 ;
-(id)_allAppClipsForPlaceholderOnly:(BOOL)arg1 ;
-(BOOL)_shouldDeleteClipWithRecord:(id)arg1 parentRecord:(id)arg2 ;
-(void)_deleteClipWhenBackgrounded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didReceiveApplicationRegisteredNotification:(id)arg1 ;
-(void)_didReceiveApplicationUnregisteredNotification:(id)arg1 ;
-(void)_didReceiveMCSettingsChangedNotification:(id)arg1 ;
-(void)_handleNewInstalledAppWithBundleID:(id)arg1 ;
-(void)_didReceiveApplicationChangedNotification:(id)arg1 operationHandler:(/*^block*/id)arg2 ;
-(void)_handleNewUninstalledAppWithBundleID:(id)arg1 ;
-(void)_applicationsDidChange:(id)arg1 operationHandler:(/*^block*/id)arg2 ;
-(void)_transferTCCPermissionsFromClipWithBundleID:(id)arg1 toParentAppWithBundleID:(id)arg2 ;
-(void)removeClipsByUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeFailedClipInstallsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)uninstallClipsWithParentAppInstalledWithCompletionHandler:(/*^block*/id)arg1 ;
@end

