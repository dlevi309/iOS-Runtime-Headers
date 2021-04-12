/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/HUNearbyControllerDelegate.h>
#import <libobjc.A.dylib/AXHALiveListenDelegate.h>

@protocol OS_os_transaction;
@class AXDispatchTimer, NSString, NSObject, NSDictionary, HCXPCMessage;

@interface AXHAController : NSObject <HUNearbyControllerDelegate, AXHALiveListenDelegate> {

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
-(void)readLiveListenLevels;
-(NSString *)pairedDeviceUUID;
-(id)registerForDeviceUpdates:(id)arg1 ;
-(void)transitionToPeer;
-(id)registerForLiveListenUpdates:(id)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)registerForAvailableDevicesUpdates:(id)arg1 ;
-(id)init;
-(id)writeDeviceProperty:(id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(id)currentDeviceController;
-(void)setPairedDeviceUUID:(NSString *)arg1 ;
-(void)willSwitchUser;
-(void)setAvailableDevicesDescription:(NSDictionary *)arg1 ;
-(id)readAvailableDevices:(id)arg1 ;
-(void)connectToPairedDevice;
-(void)setListenForAvailableDeviceUpdates:(BOOL)arg1 ;
-(void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2 ;
-(id)readAvailableControllers:(id)arg1 ;
-(NSDictionary *)availableDevicesDescription;
-(void)setLiveListenMessage:(HCXPCMessage *)arg1 ;
-(BOOL)hearingAidsPaired;
-(id)liveListenController;
-(void)updateNearbyDeviceAvailability;
-(HCXPCMessage *)liveListenMessage;
-(void)liveListenControllerStateDidChange;
-(id)disconnectAndForceSlave:(id)arg1 ;
-(id)readDeviceProperty:(id)arg1 ;
-(void)setPairedHearingAid:(id)arg1 ;
-(id)connectToControllerWithID:(id)arg1 ;
-(void)availableRemoteControllersDidChange;
-(void)dealloc;
-(id)toggleLiveListen:(id)arg1 ;
@end

