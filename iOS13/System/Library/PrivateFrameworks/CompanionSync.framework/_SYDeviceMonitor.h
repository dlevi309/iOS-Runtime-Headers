/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)allDevices;
-(id)deviceForPairingID:(id)arg1 ;
-(void)_rebuildDeviceList;
-(void)_clearDeviceList;
-(void)_deviceDidBecomeActive:(id)arg1 ;
-(void)_deviceDidBecomeInactive:(id)arg1 ;
-(id)currentTargetableDevice;
-(id)deviceForNRDevice:(id)arg1 ;
-(void)addNRDevice:(id)arg1 ;
-(void)removeNRDevice:(id)arg1 ;
-(void)deviceBecameTargetable:(id)arg1 ;
@end

