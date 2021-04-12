/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDNanoSyncServerInterface.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncServer : HDSubserver <HDNanoSyncServerInterface> {

	HDNanoSyncManager* _nanoSyncManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remote_fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithParentServer:(id)arg1 ;
@end

