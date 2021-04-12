/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, IDSService, NSObject, PBBridgeIDSReachabilityStatusObject, NSString;

@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate> {

	NSMutableOrderedSet* _observers;
	IDSService* _reachabilityService;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;
	PBBridgeIDSReachabilityStatusObject* _activeDeviceStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)deviceStatusFromIDSDevices:(id)arg1 nrDevices:(id)arg2 ;
+(id)nrDevices;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)service:(id)arg1 linkedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(unsigned long long)reachabilityForDevice:(id)arg1 ;
-(void)_processDevices:(id)arg1 ;
-(id)getDeviceStatusChangeFromIDSDevices:(id)arg1 nrDevices:(id)arg2 ;
@end

