/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NTKFaceCollection, NSString;

@interface NTKGreenfieldCompanionAppInstallationMonitor : NSObject <LSApplicationWorkspaceObserverProtocol, NTKFaceCollectionObserver> {

	BOOL _isRunning;
	BOOL _isObservingApplicationWorkspace;
	BOOL _isObservingWatchApps;
	BOOL _hasReloadedSinceObserving;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NTKFaceCollection* _library;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(id)init;
-(void)start;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)dealloc;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_toggleObserving;
-(id)_existingPlaceholderItemIds;
-(void)_reloadInstallingAppsOnPhoneAndWatch;
-(id)_queue_calculatePendingRemovalItemIdsWithExistingPlaceholderIds:(id)arg1 ;
-(void)_removePlaceholderComplicationWithItemIds:(id)arg1 ;
-(void)fetchInstalledAppsOnWatchWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_queue_fetchInstalledWatchAppsItemIds;
-(id)_queue_fetchNotInstalledWatchAppStatus;
-(void)handleAddFaceManagerDidUpdateFaceLibrary;
@end

