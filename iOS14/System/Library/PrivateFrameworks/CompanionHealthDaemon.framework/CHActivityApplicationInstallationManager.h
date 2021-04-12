/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)daemonReady:(id)arg1 ;
-(void)_queue_cleanupInstallRequest;
-(void)_queue_startInstalling;
-(id)initWithProfile:(id)arg1 ;
-(void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
-(void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)_cleanupInstallRequest;
-(void)_setAndNotifyStickersAvailable:(BOOL)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)dealloc;
@end

