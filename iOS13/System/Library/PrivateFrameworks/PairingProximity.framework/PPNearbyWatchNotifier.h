/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
*/

#import <libobjc.A.dylib/PPDiscoveryManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, PPDiscoveryManager, NSXPCConnection, NSString;

@interface PPNearbyWatchNotifier : NSObject <PPDiscoveryManagerDelegate> {

	NSObject*<OS_dispatch_source> _timerSource;
	PPDiscoveryManager* _discoveryManager;
	/*^block*/id _discoveryCompletion;
	NSXPCConnection* _notificationService;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (nonatomic,retain) PPDiscoveryManager * discoveryManager;                  //@synthesize discoveryManager=_discoveryManager - In the implementation block
@property (nonatomic,copy) id discoveryCompletion;                                   //@synthesize discoveryCompletion=_discoveryCompletion - In the implementation block
@property (nonatomic,retain) NSXPCConnection * notificationService;                  //@synthesize notificationService=_notificationService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNotifier;
+(BOOL)shouldScanForNearbyDevices;
+(BOOL)isWatchAppRemoved;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(id)discoverForTimeInterval:(double)arg1 signalLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didStopDiscovering;
-(void)_cleanupDiscoveryDidFindDevice:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareServiceConnectionIfNeeded;
-(NSXPCConnection *)notificationService;
-(void)setNotificationService:(NSXPCConnection *)arg1 ;
-(void)didDiscoverDeviceWithAdvertisingID:(id)arg1 signalStrength:(long long)arg2 ;
-(id)discoverForNearbyWatchesWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDiscovery;
-(PPDiscoveryManager *)discoveryManager;
-(void)setDiscoveryManager:(PPDiscoveryManager *)arg1 ;
-(id)discoveryCompletion;
-(void)setDiscoveryCompletion:(id)arg1 ;
@end

