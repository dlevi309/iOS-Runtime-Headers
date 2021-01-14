/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSXPCConnection *)notificationService;
-(void)setNotificationService:(NSXPCConnection *)arg1 ;
-(id)discoverForTimeInterval:(double)arg1 signalLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didStopDiscovering;
-(void)_cleanupDiscoveryDidFindDevice:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareServiceConnectionIfNeeded;
-(void)didDiscoverDeviceWithAdvertisingID:(id)arg1 signalStrength:(long long)arg2 ;
-(id)discoverForNearbyWatchesWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDiscovery;
-(PPDiscoveryManager *)discoveryManager;
-(void)setDiscoveryManager:(PPDiscoveryManager *)arg1 ;
-(id)discoveryCompletion;
-(void)setDiscoveryCompletion:(id)arg1 ;
@end

