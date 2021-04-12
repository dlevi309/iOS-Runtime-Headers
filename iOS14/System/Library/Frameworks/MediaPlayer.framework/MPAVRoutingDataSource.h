/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPAVRoutingDataSource : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _devicePresenceDetected;
	long long _discoveryMode;
	long long _filterMode;

}

@property (assign,nonatomic) long long discoveryMode;                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) BOOL devicePresenceDetected;                 //@synthesize devicePresenceDetected=_devicePresenceDetected - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultipleSelection; 
@property (assign,nonatomic) long long filterMode;                          //@synthesize filterMode=_filterMode - In the implementation block
-(BOOL)devicePresenceDetected;
-(id)getRoutesForCategory:(id)arg1 ;
-(long long)discoveryMode;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(id)init;
-(BOOL)supportsMultipleSelection;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFilterMode:(long long)arg1 ;
-(void)getExternalScreenTypeWithCompletion:(/*^block*/id)arg1 ;
-(void)unpickAirPlayAVRoutesWithCompletion:(/*^block*/id)arg1 ;
-(void)_superclassRegisterNotifications;
-(void)_superclassUnregisterNotifications;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)filterMode;
-(void)dealloc;
@end

