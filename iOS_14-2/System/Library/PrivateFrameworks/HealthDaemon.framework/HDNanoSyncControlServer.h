/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKNanoSyncControlServer.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncControlServer : HDStandardTaskServer <HKNanoSyncControlServer> {

	HDNanoSyncManager* _nanoSyncManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

