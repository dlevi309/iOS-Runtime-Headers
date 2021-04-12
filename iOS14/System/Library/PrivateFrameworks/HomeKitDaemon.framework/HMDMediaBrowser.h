/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, HMDMediaBrowserDelegate, OS_dispatch_queue, HMDMediaBrowserDataSource;
@class NSMutableSet, HMDHomeManager, NSObject, HMFTimer, HMFMessageDispatcher, HMDUnassociatedMediaAccessory, NSArray, NSString;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSMutableSet* _accessoryAdvertisements;
	BOOL _discoverUnassociatedAccessories;
	BOOL _discoverAssociatedAccessories;
	BOOL _updateAvailableOutputDevices;
	id<HMDMediaBrowserDelegate> _delegate;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	void* _discoverySession;
	void* _discoverySessionCallbackToken;
	HMFTimer* _discoveryPollTimer;
	NSMutableSet* _identifiersOfAssociatedMediaAccessories;
	NSMutableSet* _mediaEndpoints;
	id<HMDMediaBrowserDataSource> _dataSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) void* discoverySession;                                            //@synthesize discoverySession=_discoverySession - In the implementation block
@property (assign,nonatomic) void* discoverySessionCallbackToken;                                 //@synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken - In the implementation block
@property (nonatomic,retain) HMFTimer * discoveryPollTimer;                                       //@synthesize discoveryPollTimer=_discoveryPollTimer - In the implementation block
@property (assign,nonatomic) BOOL updateAvailableOutputDevices;                                   //@synthesize updateAvailableOutputDevices=_updateAvailableOutputDevices - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher; 
@property (nonatomic,retain) NSMutableSet * identifiersOfAssociatedMediaAccessories;              //@synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * mediaEndpoints;                                       //@synthesize mediaEndpoints=_mediaEndpoints - In the implementation block
@property (readonly) id<HMDMediaBrowserDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaBrowserDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMDHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (copy,readonly) HMDUnassociatedMediaAccessory * currentAccessory; 
@property (copy,readonly) NSArray * accessoryAdvertisements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
+(id)advertisementsFromOutputDevices:(CFArrayRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(id<HMDMediaBrowserDelegate>)delegate;
-(void*)discoverySession;
-(id)shortDescription;
-(NSString *)debugDescription;
-(id<HMDMediaBrowserDataSource>)dataSource;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setDelegate:(id<HMDMediaBrowserDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithHomeManager:(id)arg1 ;
-(HMDUnassociatedMediaAccessory *)currentAccessory;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)dealloc;
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
-(id)initWithHomeManager:(id)arg1 dataSource:(id)arg2 ;
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
-(void*)discoverySessionCallbackToken;
-(void)setDiscoverySessionCallbackToken:(void*)arg1 ;
-(void)setDiscoveryPollTimer:(HMFTimer *)arg1 ;
-(void)setIdentifiersOfAssociatedMediaAccessories:(NSMutableSet *)arg1 ;
-(void)setMediaEndpoints:(NSMutableSet *)arg1 ;
@end

