/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/HUDeviceController.h>
#import <libobjc.A.dylib/HUNearbyDeviceDelegate.h>

@protocol HUNearbyControllerDelegate, OS_dispatch_queue;
@class NSArray, SFDeviceDiscovery, RPCompanionLinkClient, AXRemoteHearingAidDevice, NSObject, AXDispatchTimer, NSString;

@interface HUNearbyController : HUDeviceController <HUNearbyDeviceDelegate> {

	BOOL _searching;
	BOOL _holdingMediaForConnection;
	BOOL _holdingPhoneForConnection;
	NSArray* _availableDevices;
	long long _state;
	id<HUNearbyControllerDelegate> _delegate;
	SFDeviceDiscovery* _deviceDiscovery;
	RPCompanionLinkClient* _client;
	AXRemoteHearingAidDevice* _localDevice;
	NSObject*<OS_dispatch_queue> _mediaQueue;
	AXDispatchTimer* _sendConnectionToCompanionTimer;

}

@property (nonatomic,copy) NSArray * availableDevices;                                      //@synthesize availableDevices=_availableDevices - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * deviceDiscovery;                           //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * client;                                //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) AXRemoteHearingAidDevice * localDevice;                        //@synthesize localDevice=_localDevice - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                             //@synthesize searching=_searching - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaQueue;                       //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * sendConnectionToCompanionTimer;              //@synthesize sendConnectionToCompanionTimer=_sendConnectionToCompanionTimer - In the implementation block
@property (assign,nonatomic) BOOL holdingMediaForConnection;                                //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) BOOL holdingPhoneForConnection;                                //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<HUNearbyControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(AXRemoteHearingAidDevice *)localDevice;
-(BOOL)isSearching;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)checkPairedPeerExists:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)hasConnectionToHearingDevice;
-(id<HUNearbyControllerDelegate>)delegate;
-(id)addDeviceWithIdentifier:(id)arg1 ;
-(void)sendMessageToAllDevices:(id)arg1 ;
-(void)sendMessage:(id)arg1 toDevices:(id)arg2 ;
-(void)setSearching:(BOOL)arg1 ;
-(void)checkConnectionPeers:(/*^block*/id)arg1 ;
-(void)start;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 toDevices:(id)arg4 ;
-(void)registerMediaNotifications;
-(void)sendWrite:(id)arg1 toDevices:(id)arg2 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)mediaPlaybackDidChange:(id)arg1 ;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(id)deviceWithIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)mediaQueue;
-(void)requestConnectionForReason:(long long)arg1 ;
-(void)sendConnectionToCompanionIfPossible;
-(void)stop;
-(void)mediaServerDied;
-(void)setAvailableDevices:(NSArray *)arg1 ;
-(void)routesDidChange:(id)arg1 ;
-(void)getConnectedPeer:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HUNearbyControllerDelegate>)arg1 ;
-(void)updateStateOnDeviceQueue;
-(void)updateState;
-(BOOL)shouldRelinquishConnectionForReason:(long long)arg1 ;
-(void)sendConnectionUpdateToPeers;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 ;
-(void)sendWriteToAllDevices:(id)arg1 ;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)relinquishConnectionForReason:(long long)arg1 ;
-(NSArray *)availableDevices;
-(void)shouldRequestAudioConnectionForCall:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)hearingDevice;
-(void)checkConnectionToHearingDevice:(/*^block*/id)arg1 ;
-(void)requestHandoffForMedia;
-(unsigned long long)currentConnectionStatus;
-(void)setState:(long long)arg1 ;
-(BOOL)representsLocalDevices;
-(id)connectedPeer;
-(long long)state;
-(void)setSendConnectionToCompanionTimer:(AXDispatchTimer *)arg1 ;
-(void)setLocalDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(BOOL)holdingPhoneForConnection;
-(void)setMediaQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)holdingMediaForConnection;
-(id)nearbyDeviceWithIdentifier:(id)arg1 ;
-(void)sendConnectionToCompanionIfPossible:(BOOL)arg1 ;
-(id)nearbyDeviceWithPeerDevice:(id)arg1 ;
-(void)unregisterMediaNotifications;
-(void)callStatusDidChange:(id)arg1 ;
-(AXDispatchTimer *)sendConnectionToCompanionTimer;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
@end

