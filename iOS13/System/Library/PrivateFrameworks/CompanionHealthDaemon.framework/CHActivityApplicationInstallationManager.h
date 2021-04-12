/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDNanoSyncManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, ASDSystemAppRequest, NSObject, NSString;

@interface CHActivityApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {

	HDProfile* _profile;
	BOOL _installationRequestInProgress;
	ASDSystemAppRequest* _systemAppRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(void)_setAndNotifyStickersAvailable:(BOOL)arg1 ;
-(void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)_queue_startInstalling;
-(void)_cleanupInstallRequest;
-(void)_queue_cleanupInstallRequest;
-(void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
@end

