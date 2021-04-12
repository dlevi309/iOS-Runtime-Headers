/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<HUNearbyControllerDelegate>)delegate;
-(void)setDelegate:(id<HUNearbyControllerDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(long long)state;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSArray *)availableDevices;
-(void)setSearching:(BOOL)arg1 ;
-(AXRemoteHearingAidDevice *)localDevice;
-(void)setLocalDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(void)updateState;
-(BOOL)isSearching;
-(NSObject*<OS_dispatch_queue>)mediaQueue;
-(void)mediaServerDied;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(BOOL)representsLocalDevices;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 ;
-(void)sendConnectionUpdateToPeers;
-(void)sendWriteToAllDevices:(id)arg1 ;
-(void)checkConnectionToHearingDevice:(/*^block*/id)arg1 ;
-(void)checkConnectionPeers:(/*^block*/id)arg1 ;
-(void)requestHandoffForMedia;
-(void)sendMessageToAllDevices:(id)arg1 ;
-(void)setMediaQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)callStatusDidChange:(id)arg1 ;
-(void)routesDidChange:(id)arg1 ;
-(void)setSendConnectionToCompanionTimer:(AXDispatchTimer *)arg1 ;
-(void)mediaPlaybackDidChange:(id)arg1 ;
-(void)unregisterMediaNotifications;
-(void)registerMediaNotifications;
-(BOOL)hasConnectionToHearingDevice;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
-(BOOL)holdingMediaForConnection;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(void)requestConnectionForReason:(long long)arg1 ;
-(void)sendConnectionToCompanionIfPossible;
-(void)shouldRequestAudioConnectionForCall:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendConnectionToCompanionIfPossible:(BOOL)arg1 ;
-(AXDispatchTimer *)sendConnectionToCompanionTimer;
-(void)sendMessage:(id)arg1 toDevices:(id)arg2 ;
-(void)getConnectedPeer:(/*^block*/id)arg1 ;
-(BOOL)shouldRelinquishConnectionForReason:(long long)arg1 ;
-(void)updateStateOnDeviceQueue;
-(id)connectedPeer;
-(void)setAvailableDevices:(NSArray *)arg1 ;
-(id)nearbyDeviceWithIdentifier:(id)arg1 ;
-(id)nearbyDeviceWithPeerDevice:(id)arg1 ;
-(id)deviceWithIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(unsigned long long)currentConnectionStatus;
-(void)relinquishConnectionForReason:(long long)arg1 ;
-(void)sendWrite:(id)arg1 toDevices:(id)arg2 ;
-(id)hearingDevice;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 toDevices:(id)arg4 ;
-(void)checkPairedPeerExists:(/*^block*/id)arg1 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(BOOL)holdingPhoneForConnection;
@end

