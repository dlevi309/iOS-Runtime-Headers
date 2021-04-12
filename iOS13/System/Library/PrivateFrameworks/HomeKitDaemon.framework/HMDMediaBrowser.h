/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMediaBrowserDelegate, OS_dispatch_queue;
@class NSMutableSet, HMDHomeManager, NSObject, HMFTimer, HMFMessageDispatcher, HMDUnassociatedMediaAccessory, NSArray, NSString;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSMutableSet* _accessoryAdvertisements;
	BOOL _discoverUnassociatedAccessories;
	BOOL _discoverAssociatedAccessories;
	BOOL _updateAvailableOutputDevices;
	id<HMDMediaBrowserDelegate> _delegate;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	void* _discoverySession;
	void* _discoverySessionCallbackToken;
	HMFTimer* _discoveryPollTimer;
	NSMutableSet* _identifiersOfAssociatedMediaAccessories;
	NSMutableSet* _mediaEndpoints;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                        //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) void* discoverySession;                                            //@synthesize discoverySession=_discoverySession - In the implementation block
@property (assign,nonatomic) void* discoverySessionCallbackToken;                                 //@synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken - In the implementation block
@property (nonatomic,retain) HMFTimer * discoveryPollTimer;                                       //@synthesize discoveryPollTimer=_discoveryPollTimer - In the implementation block
@property (assign,nonatomic) BOOL updateAvailableOutputDevices;                                   //@synthesize updateAvailableOutputDevices=_updateAvailableOutputDevices - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher; 
@property (nonatomic,retain) NSMutableSet * identifiersOfAssociatedMediaAccessories;              //@synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * mediaEndpoints;                                       //@synthesize mediaEndpoints=_mediaEndpoints - In the implementation block
@property (__weak) id<HMDMediaBrowserDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMDHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (copy,readonly) HMDUnassociatedMediaAccessory * currentAccessory; 
@property (copy,readonly) NSArray * accessoryAdvertisements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(id)advertisementsFromOutputDevices:(CFArrayRef)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDMediaBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaBrowserDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMDUnassociatedMediaAccessory *)currentAccessory;
-(void)timerDidFire:(id)arg1 ;
-(void*)discoverySession;
-(void*)discoverySessionCallbackToken;
-(void)setDiscoverySessionCallbackToken:(void*)arg1 ;
-(HMDHomeManager *)homeManager;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(NSArray *)accessoryAdvertisements;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(void)updateSessionsForAccessories:(id)arg1 ;
-(NSMutableSet *)identifiersOfAssociatedMediaAccessories;
-(void)registerAccessories:(id)arg1 ;
-(void)stopDiscoveringAssociatedAccessories;
-(void)startDiscoveringAssociatedAccessories;
-(void)_startDiscoveringAccessories;
-(id)unassociatedAccessoryFromAdvertisementData:(id)arg1 ;
-(void)deregisterAccessories:(id)arg1 ;
-(void)startDiscoveringUnassociatedAccessories;
-(void)stopDiscoveringUnassociatedAccessories;
-(void)setIdentifiersOfAssociatedMediaAccessories:(NSMutableSet *)arg1 ;
-(void)_notifyDelegateOfAddedAdvertisements:(id)arg1 ;
-(void)_notifyDelegateOfRemovedAdvertisements:(id)arg1 ;
-(void)checkForUpdatedAvailableOutputDevices:(CFArrayRef)arg1 ;
-(void)_handleAvailableOutputDevices:(CFArrayRef)arg1 ;
-(void)_removeAdvertisements:(id)arg1 ;
-(void)_stopDiscoveringAccessories;
-(void)_addAdvertisements:(id)arg1 ;
-(void)setUpdateAvailableOutputDevices:(BOOL)arg1 ;
-(NSMutableSet *)mediaEndpoints;
-(void)_notifyDelegateOfUpdatedEndpoints:(id)arg1 ;
-(void)_updateSessionsForAccessories:(id)arg1 ;
-(void)_updateSessionForAccessory:(id)arg1 ;
-(HMFTimer *)discoveryPollTimer;
-(BOOL)updateAvailableOutputDevices;
-(void)setDiscoveryPollTimer:(HMFTimer *)arg1 ;
-(void)setMediaEndpoints:(NSMutableSet *)arg1 ;
@end

