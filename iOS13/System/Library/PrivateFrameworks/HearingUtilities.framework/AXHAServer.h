/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingCore/HCServer.h>
#import <libobjc.A.dylib/AXHARemoteUpdateProtocol.h>

@class NSMutableDictionary, NSArray, NSString;

@interface AXHAServer : HCServer <AXHARemoteUpdateProtocol> {

	NSMutableDictionary* _responseBlocks;
	BOOL _hearingAidReachableForAudioTransfer;
	BOOL _hearingAidConnectedOrReachable;
	NSArray* _availableHearingAids;
	NSArray* _availableControllers;
	NSString* _hearingDeviceName;
	NSString* _connectedDeviceName;
	NSMutableDictionary* _updates;

}

@property (nonatomic,copy) NSArray * availableHearingAids;                          //@synthesize availableHearingAids=_availableHearingAids - In the implementation block
@property (nonatomic,retain) NSArray * availableControllers;                        //@synthesize availableControllers=_availableControllers - In the implementation block
@property (assign,nonatomic) BOOL hearingAidConnectedOrReachable;                   //@synthesize hearingAidConnectedOrReachable=_hearingAidConnectedOrReachable - In the implementation block
@property (assign,nonatomic) BOOL hearingAidReachableForAudioTransfer;              //@synthesize hearingAidReachableForAudioTransfer=_hearingAidReachableForAudioTransfer - In the implementation block
@property (nonatomic,retain) NSString * hearingDeviceName;                          //@synthesize hearingDeviceName=_hearingDeviceName - In the implementation block
@property (nonatomic,retain) NSString * connectedDeviceName;                        //@synthesize connectedDeviceName=_connectedDeviceName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updates;                         //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) BOOL hearingAidReachable; 
@property (assign,nonatomic,__weak) id<AXHAServerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)updates;
-(void)setUpdates:(NSMutableDictionary *)arg1 ;
-(NSArray *)availableControllers;
-(void)resetConnection;
-(void)registerResponseBlock:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(BOOL)shouldRestartOnInterruption;
-(void)startServerWithDelegate:(id)arg1 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 ;
-(NSArray *)availableHearingAids;
-(void)availableDevicesDidUpdate:(id)arg1 ;
-(void)deviceDidUpdateProperty:(id)arg1 ;
-(void)liveListenDidUpdate:(id)arg1 ;
-(void)setAvailableControllers:(NSArray *)arg1 ;
-(void)setHearingDeviceName:(NSString *)arg1 ;
-(void)setHearingAidReachableForAudioTransfer:(BOOL)arg1 ;
-(BOOL)hearingAidConnectedOrReachable;
-(void)setConnectedDeviceName:(NSString *)arg1 ;
-(void)setHearingAidConnectedOrReachable:(BOOL)arg1 ;
-(void)environmentalDosimetryDidUpdate:(id)arg1 ;
-(void)setAvailableHearingAids:(NSArray *)arg1 ;
-(void)registerUpdateBlock:(id)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3 ;
-(void)_registerListener:(id)arg1 forAvailableDeviceHandler:(/*^block*/id)arg2 beginSearching:(BOOL)arg3 ;
-(void)unregisterUpdateListener:(id)arg1 ;
-(void)registerListener:(id)arg1 forAvailableDeviceHandler:(/*^block*/id)arg2 ;
-(void)registerPassiveListener:(id)arg1 forAvailableDeviceHandler:(/*^block*/id)arg2 ;
-(void)registerListener:(id)arg1 forPropertyUpdateHandler:(/*^block*/id)arg2 ;
-(void)connectToControllerWithID:(id)arg1 ;
-(void)requestHearingAidConnectionWithReason:(long long)arg1 ;
-(void)cancelHearingAidConnectionRequest;
-(BOOL)hearingAidReachable;
-(void)registerListener:(id)arg1 forLiveListenLevelsHandler:(/*^block*/id)arg2 ;
-(void)startLiveListen;
-(void)stopLiveListen;
-(void)registerListener:(id)arg1 forLiveDosimetryUpdates:(BOOL)arg2 withDoseHandler:(/*^block*/id)arg3 ;
-(void)unregisterDoseHandler:(id)arg1 ;
-(BOOL)hearingAidReachableForAudioTransfer;
-(NSString *)hearingDeviceName;
-(NSString *)connectedDeviceName;
@end

