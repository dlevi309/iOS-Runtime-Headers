/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/HUNearbyControllerDelegate.h>
#import <libobjc.A.dylib/AXIDCControllerBrowserDelegateProtocol.h>
#import <libobjc.A.dylib/AXHALiveListenDelegate.h>

@protocol OS_os_transaction;
@class AXDispatchTimer, NSString, NSObject, NSDictionary, HCXPCMessage;

@interface AXHAController : NSObject <HUNearbyControllerDelegate, AXIDCControllerBrowserDelegateProtocol, AXHALiveListenDelegate> {

	BOOL _isListening;
	AXDispatchTimer* _liveListenLevelsTimer;
	NSString* _pairedDeviceUUID;
	NSObject*<OS_os_transaction> _transaction;
	NSDictionary* _availableDevicesDescription;
	HCXPCMessage* _liveListenMessage;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * pairedDeviceUUID;                             //@synthesize pairedDeviceUUID=_pairedDeviceUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * availableDevicesDescription;              //@synthesize availableDevicesDescription=_availableDevicesDescription - In the implementation block
@property (nonatomic,retain) HCXPCMessage * liveListenMessage;                        //@synthesize liveListenMessage=_liveListenMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)willSwitchUser;
-(void)availableRemoteControllersDidChange;
-(id)connectToControllerWithID:(id)arg1 ;
-(void)setPairedHearingAid:(id)arg1 ;
-(BOOL)hearingAidsPaired;
-(void)setListenForAvailableDeviceUpdates:(BOOL)arg1 ;
-(void)setPairedDeviceUUID:(NSString *)arg1 ;
-(void)setAvailableDevicesDescription:(NSDictionary *)arg1 ;
-(NSString *)pairedDeviceUUID;
-(id)currentDeviceController;
-(id)liveListenController;
-(void)readLiveListenLevels;
-(void)setLiveListenMessage:(HCXPCMessage *)arg1 ;
-(void)updateNearbyDeviceAvailability;
-(NSDictionary *)availableDevicesDescription;
-(void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2 ;
-(void)connectToPairedDevice;
-(void)transitionToPeer;
-(void)liveListenControllerStateDidChange;
-(id)registerForAvailableDevicesUpdates:(id)arg1 ;
-(id)registerForDeviceUpdates:(id)arg1 ;
-(id)readDeviceProperty:(id)arg1 ;
-(id)writeDeviceProperty:(id)arg1 ;
-(id)readAvailableDevices:(id)arg1 ;
-(id)readAvailableControllers:(id)arg1 ;
-(id)disconnectAndForceSlave:(id)arg1 ;
-(id)toggleLiveListen:(id)arg1 ;
-(id)registerForLiveListenUpdates:(id)arg1 ;
-(HCXPCMessage *)liveListenMessage;
@end

