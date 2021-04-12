/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSObject;

@interface _SYDeviceMonitor : NSObject {

	NSMutableSet* _devices;
	NSUUID* _currentTargetDeviceUUID;
	NSObject*<OS_dispatch_queue> _syncQ;

}
+(id)sharedInstance;
-(id)deviceForPairingID:(id)arg1 ;
-(id)allDevices;
-(void)addNRDevice:(id)arg1 ;
-(id)deviceForNRDevice:(id)arg1 ;
-(id)init;
-(void)deviceBecameTargetable:(id)arg1 ;
-(void)_clearDeviceList;
-(void)_deviceDidBecomeActive:(id)arg1 ;
-(void)_deviceDidBecomeInactive:(id)arg1 ;
-(void)removeNRDevice:(id)arg1 ;
-(id)currentTargetableDevice;
-(void)_rebuildDeviceList;
@end

