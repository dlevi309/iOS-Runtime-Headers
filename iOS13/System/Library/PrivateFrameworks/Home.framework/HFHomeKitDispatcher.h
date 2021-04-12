/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFLocationSensingCoordinatorDelegate.h>
#import <libobjc.A.dylib/HFHomeAppInstallStateArbiterObserver.h>
#import <libobjc.A.dylib/_HFSettingsObserverTupleOwning.h>
#import <libobjc.A.dylib/HFStateRestorationSettingsObserver.h>

@class HMHomeManager, HMHome, HFLocationSensingCoordinator, NSTimer, NSMutableDictionary, NADelegateDispatcher, NSMutableArray, NAFuture, NSString;

@interface HFHomeKitDispatcher : NSObject <HFLocationSensingCoordinatorDelegate, HFHomeAppInstallStateArbiterObserver, _HFSettingsObserverTupleOwning, HFStateRestorationSettingsObserver> {

	BOOL _hasLoadedHomes;
	int _homeKitPreferencesChangedNotifyToken;
	HMHomeManager* _homeManager;
	HMHome* _home;
	HMHome* _overrideHome;
	HMHome* _selectedHome;
	HFLocationSensingCoordinator* _locationCoordinator;
	NSTimer* _homeSensingIdleTimer;
	NSMutableDictionary* _remoteAccessStateByHomeID;
	NADelegateDispatcher* _homeManagerObserverDispatcher;
	NADelegateDispatcher* _homeObserverDispatcher;
	NADelegateDispatcher* _accessoryObserverDispatcher;
	NADelegateDispatcher* _residentDeviceObserverDispatcher;
	NADelegateDispatcher* _cameraObserverDispatcher;
	NADelegateDispatcher* _mediaObjectObserverDispatcher;
	NADelegateDispatcher* _mediaSessionObserverDispatcher;
	NADelegateDispatcher* _audioControlObserverDispatcher;
	NADelegateDispatcher* _softwareUpdateControllerObserverDispatcher;
	NADelegateDispatcher* _softwareUpdateObserverDispatcher;
	NADelegateDispatcher* _userObserverDispatcher;
	NADelegateDispatcher* _symptomsHandlerObserverDispatcher;
	NADelegateDispatcher* _symptomFixSessionObserverDispatcher;
	NADelegateDispatcher* _homeKitSettingsObserverDispatcher;
	NADelegateDispatcher* _networkConfigurationObserverDispatcher;
	NADelegateDispatcher* _networkRouterObserverDispatcher;
	NADelegateDispatcher* _televisionObserverDispatcher;
	NSMutableArray* _settingsObserverTuples;
	NSMutableArray* _requestedSoftwareDownloads;
	NSMutableArray* _requestedSoftwareInstalls;
	NSMutableArray* _homePromises;
	NSMutableArray* _firstHomeAddedPromises;
	NSMutableArray* _allHomesPromises;
	NAFuture* _locationCoordinatorSetupFuture;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                                    //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                                          //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HMHome * selectedHome;                                                          //@synthesize selectedHome=_selectedHome - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedHomes;                                                            //@synthesize hasLoadedHomes=_hasLoadedHomes - In the implementation block
@property (nonatomic,retain) HFLocationSensingCoordinator * locationCoordinator;                             //@synthesize locationCoordinator=_locationCoordinator - In the implementation block
@property (nonatomic,retain) NSTimer * homeSensingIdleTimer;                                                 //@synthesize homeSensingIdleTimer=_homeSensingIdleTimer - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangedNotifyToken;                                       //@synthesize homeKitPreferencesChangedNotifyToken=_homeKitPreferencesChangedNotifyToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteAccessStateByHomeID;                                //@synthesize remoteAccessStateByHomeID=_remoteAccessStateByHomeID - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * homeManagerObserverDispatcher;                           //@synthesize homeManagerObserverDispatcher=_homeManagerObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * homeObserverDispatcher;                                  //@synthesize homeObserverDispatcher=_homeObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * accessoryObserverDispatcher;                             //@synthesize accessoryObserverDispatcher=_accessoryObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * residentDeviceObserverDispatcher;                        //@synthesize residentDeviceObserverDispatcher=_residentDeviceObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * cameraObserverDispatcher;                                //@synthesize cameraObserverDispatcher=_cameraObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * mediaObjectObserverDispatcher;                           //@synthesize mediaObjectObserverDispatcher=_mediaObjectObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * mediaSessionObserverDispatcher;                          //@synthesize mediaSessionObserverDispatcher=_mediaSessionObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * audioControlObserverDispatcher;                          //@synthesize audioControlObserverDispatcher=_audioControlObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * softwareUpdateControllerObserverDispatcher;              //@synthesize softwareUpdateControllerObserverDispatcher=_softwareUpdateControllerObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * softwareUpdateObserverDispatcher;                        //@synthesize softwareUpdateObserverDispatcher=_softwareUpdateObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * userObserverDispatcher;                                  //@synthesize userObserverDispatcher=_userObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * symptomsHandlerObserverDispatcher;                       //@synthesize symptomsHandlerObserverDispatcher=_symptomsHandlerObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * symptomFixSessionObserverDispatcher;                     //@synthesize symptomFixSessionObserverDispatcher=_symptomFixSessionObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * homeKitSettingsObserverDispatcher;                       //@synthesize homeKitSettingsObserverDispatcher=_homeKitSettingsObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * networkConfigurationObserverDispatcher;                  //@synthesize networkConfigurationObserverDispatcher=_networkConfigurationObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * networkRouterObserverDispatcher;                         //@synthesize networkRouterObserverDispatcher=_networkRouterObserverDispatcher - In the implementation block
@property (nonatomic,retain) NADelegateDispatcher * televisionObserverDispatcher;                            //@synthesize televisionObserverDispatcher=_televisionObserverDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableArray * settingsObserverTuples;                                        //@synthesize settingsObserverTuples=_settingsObserverTuples - In the implementation block
@property (nonatomic,readonly) NSMutableArray * requestedSoftwareDownloads;                                  //@synthesize requestedSoftwareDownloads=_requestedSoftwareDownloads - In the implementation block
@property (nonatomic,readonly) NSMutableArray * requestedSoftwareInstalls;                                   //@synthesize requestedSoftwareInstalls=_requestedSoftwareInstalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * homePromises;                                                  //@synthesize homePromises=_homePromises - In the implementation block
@property (nonatomic,retain) NSMutableArray * firstHomeAddedPromises;                                        //@synthesize firstHomeAddedPromises=_firstHomeAddedPromises - In the implementation block
@property (nonatomic,retain) NSMutableArray * allHomesPromises;                                              //@synthesize allHomesPromises=_allHomesPromises - In the implementation block
@property (nonatomic,retain) NAFuture * locationCoordinatorSetupFuture;                                      //@synthesize locationCoordinatorSetupFuture=_locationCoordinatorSetupFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * homeFuture; 
@property (nonatomic,readonly) NAFuture * firstHomeAddedFuture; 
@property (nonatomic,readonly) NAFuture * allHomesFuture; 
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL selectedHomeFollowsLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setConfiguration:(id)arg1 ;
+(id)configuration;
+(id)sharedDispatcher;
+(id)_defaultLogSettings;
+(id)_logSettingsWithFormatter:(/*^block*/id)arg1 ;
+(unsigned long long)_homeManagerCreationPolicy;
-(id)init;
-(void)dealloc;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)selectedHome;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)_primaryHome;
-(BOOL)hasLoadedHomes;
-(void)dispatchAccessoryObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchHomeObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)addHomeObserver:(id)arg1 ;
-(void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(BOOL)arg2 ;
-(void)coordinator:(id)arg1 homeSensingStatusDidChange:(BOOL)arg2 ;
-(NAFuture *)locationSensingAvailableFuture;
-(void)addHomeManagerObserver:(id)arg1 ;
-(void)removeHomeManagerObserver:(id)arg1 ;
-(void)dispatchCameraObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)addMediaObjectObserver:(id)arg1 ;
-(void)addAccessorySettingObserver:(id)arg1 ;
-(void)addHomeKitSettingsObserver:(id)arg1 ;
-(void)addAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3 ;
-(void)removeAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3 ;
-(void)dispatchSymptomsHandlerMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(NAFuture *)allHomesFuture;
-(void)addMediaSessionObserver:(id)arg1 ;
-(void)dispatchMediaSessionObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchSymptomFixSessionObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchMediaObjectObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchUserObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)stateRestorationSettings:(id)arg1 selectedHomeIdentifierDidUpdateExternally:(id)arg2 ;
-(NAFuture *)homeFuture;
-(void)addAccessoryObserver:(id)arg1 ;
-(void)addResidentDeviceObserver:(id)arg1 ;
-(void)addCameraObserver:(id)arg1 ;
-(void)addAudioControlObserver:(id)arg1 ;
-(void)addNetworkConfigurationObserver:(id)arg1 ;
-(void)addNetworkRouterObserver:(id)arg1 ;
-(void)addSoftwareUpdateObserver:(id)arg1 ;
-(void)addSoftwareUpdateControllerObserver:(id)arg1 ;
-(void)addSymptomsHandlerObserver:(id)arg1 ;
-(void)addTelevisionObserver:(id)arg1 ;
-(void)addUserObserver:(id)arg1 ;
-(void)addSymptomFixSessionObserver:(id)arg1 ;
-(void)removeHomeObserver:(id)arg1 ;
-(void)removeAccessoryObserver:(id)arg1 ;
-(void)removeResidentDeviceObserver:(id)arg1 ;
-(void)removeCameraObserver:(id)arg1 ;
-(void)removeMediaSessionObserver:(id)arg1 ;
-(void)removeAudioControlObserver:(id)arg1 ;
-(void)removeMediaObjectObserver:(id)arg1 ;
-(void)removeHomeKitSettingsObserver:(id)arg1 ;
-(void)removeNetworkConfigurationObserver:(id)arg1 ;
-(void)removeNetworkRouterObserver:(id)arg1 ;
-(void)removeSoftwareUpdateObserver:(id)arg1 ;
-(void)removeSoftwareUpdateControllerObserver:(id)arg1 ;
-(void)removeAccessorySettingObserver:(id)arg1 ;
-(void)removeSymptomsHandlerObserver:(id)arg1 ;
-(void)removeTelevisionObserver:(id)arg1 ;
-(void)removeUserObserver:(id)arg1 ;
-(void)removeSymptomFixSessionObserver:(id)arg1 ;
-(BOOL)hasRequestedSoftwareDownload:(id)arg1 ;
-(void)dispatchHomeManagerObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchHomeKitSettingMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)settingsObserverTupleWasInvalidated:(id)arg1 ;
-(void)installStateArbiter:(id)arg1 installStateDidChange:(BOOL)arg2 ;
-(void)_setupHomeManagerObserver;
-(void)_setupHomeObserver;
-(void)_setupAccessoryObserver;
-(void)_setupResidentDeviceObserver;
-(void)_setupMediaObjectObserver;
-(void)_setupMediaSessionObserver;
-(void)_setupSoftwareUpdateObserver;
-(void)_setupSymptomFixSessionObserver;
-(void)_createHomeManagerIfNecessary;
-(NADelegateDispatcher *)homeObserverDispatcher;
-(id)_setupLocationSensingCoordinator;
-(void)setLocationCoordinatorSetupFuture:(NAFuture *)arg1 ;
-(void)_setupStateDumpHandlers;
-(int)homeKitPreferencesChangedNotifyToken;
-(NSTimer *)homeSensingIdleTimer;
-(void)_handleHomeManagerDidUpdateHomes:(id)arg1 ;
-(void)updateSelectedHome;
-(void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(BOOL)arg2 ;
-(HMHome *)overrideHome;
-(void)setOverrideHome:(HMHome *)arg1 ;
-(void)setSelectedHome:(id)arg1 userInitiated:(BOOL)arg2 ;
-(NSMutableDictionary *)remoteAccessStateByHomeID;
-(id)homeSensingActiveFuture;
-(void)_requestSelectedHome:(id)arg1 ;
-(void)_setDelegationEnabled:(BOOL)arg1 forAccessoryHierarchy:(id)arg2 ;
-(NADelegateDispatcher *)residentDeviceObserverDispatcher;
-(void)_setDelegationEnabled:(BOOL)arg1 forMediaProfileContainer:(id)arg2 session:(id)arg3 ;
-(NSMutableArray *)requestedSoftwareDownloads;
-(NSMutableArray *)requestedSoftwareInstalls;
-(void)setHomeManagerAndUpdateDelegate:(id)arg1 ;
-(NADelegateDispatcher *)homeManagerObserverDispatcher;
-(NADelegateDispatcher *)accessoryObserverDispatcher;
-(NADelegateDispatcher *)cameraObserverDispatcher;
-(NSMutableArray *)settingsObserverTuples;
-(NADelegateDispatcher *)homeKitSettingsObserverDispatcher;
-(NADelegateDispatcher *)mediaObjectObserverDispatcher;
-(NADelegateDispatcher *)mediaSessionObserverDispatcher;
-(NADelegateDispatcher *)audioControlObserverDispatcher;
-(NADelegateDispatcher *)networkConfigurationObserverDispatcher;
-(NADelegateDispatcher *)networkRouterObserverDispatcher;
-(NADelegateDispatcher *)symptomFixSessionObserverDispatcher;
-(NADelegateDispatcher *)softwareUpdateControllerObserverDispatcher;
-(NADelegateDispatcher *)softwareUpdateObserverDispatcher;
-(NADelegateDispatcher *)userObserverDispatcher;
-(NADelegateDispatcher *)symptomsHandlerObserverDispatcher;
-(NADelegateDispatcher *)televisionObserverDispatcher;
-(void)_setDelegationEnabledForObjectsInCurrentHome:(BOOL)arg1 ;
-(NSMutableArray *)firstHomeAddedPromises;
-(void)_finishFirstHomeAddedPromises:(id)arg1 ;
-(BOOL)_shouldPersistSelectedHomeToDefaults;
-(void)updateStopHomeSensingIdleTimerState;
-(void)updateHome;
-(void)_finishHomePromises:(id)arg1 ;
-(NSMutableArray *)homePromises;
-(void)_finishAllHomesPromises:(id)arg1 ;
-(NSMutableArray *)allHomesPromises;
-(HFLocationSensingCoordinator *)locationCoordinator;
-(BOOL)selectedHomeFollowsLocation;
-(void)setLocationCoordinator:(HFLocationSensingCoordinator *)arg1 ;
-(void)dispatchSoftwareUpdateMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)setHasLoadedHomes:(BOOL)arg1 ;
-(void)_setDelegationEnabled:(BOOL)arg1 forUser:(id)arg2 ;
-(NAFuture *)locationCoordinatorSetupFuture;
-(void)startHomeSensingIdleTimer;
-(void)setHomeSensingIdleTimer:(NSTimer *)arg1 ;
-(void)addAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 ;
-(void)removeAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 ;
-(void)addMediaProfileObserver:(id)arg1 ;
-(void)removeMediaProfileObserver:(id)arg1 ;
-(void)dispatchAudioControlObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchSoftwareUpdateControllerMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchTelevisionObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchHomeKitSettingsObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchNetworkConfigurationObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)dispatchNetworkRouterObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)warmup;
-(void)setSelectedHome:(HMHome *)arg1 ;
-(BOOL)setSelectedHomeWithName:(id)arg1 ;
-(NAFuture *)firstHomeAddedFuture;
-(void)setSelectedHomeFollowsLocation:(BOOL)arg1 ;
-(void)markUpdate:(id)arg1 asRequested:(BOOL)arg2 ;
-(BOOL)hasRequestedSoftwareInstall:(id)arg1 ;
-(void)setHomeKitPreferencesChangedNotifyToken:(int)arg1 ;
-(void)setRemoteAccessStateByHomeID:(NSMutableDictionary *)arg1 ;
-(void)setHomeManagerObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setHomeObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setAccessoryObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setResidentDeviceObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setCameraObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setMediaObjectObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setMediaSessionObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setAudioControlObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setSoftwareUpdateControllerObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setSoftwareUpdateObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setUserObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setSymptomsHandlerObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setSymptomFixSessionObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setHomeKitSettingsObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setNetworkConfigurationObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setNetworkRouterObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setTelevisionObserverDispatcher:(NADelegateDispatcher *)arg1 ;
-(void)setSettingsObserverTuples:(NSMutableArray *)arg1 ;
-(void)setHomePromises:(NSMutableArray *)arg1 ;
-(void)setFirstHomeAddedPromises:(NSMutableArray *)arg1 ;
-(void)setAllHomesPromises:(NSMutableArray *)arg1 ;
@end

