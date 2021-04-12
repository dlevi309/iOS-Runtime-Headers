/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSObject, FMFuture, NSString;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {

	BOOL _isModelInitialized;
	id<FMFSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSMutableSet* _internalHandles;
	NSXPCConnection* _connection;
	NSSet* _cachedGetHandlesSharingLocationsWithMe;
	NSSet* _cachedGetHandlesFollowingMyLocation;
	NSMutableDictionary* _cachedLocationForHandleByHandle;
	NSMutableDictionary* _cachedOfferExpirationForHandleByHandle;
	NSMutableDictionary* _cachedCanShareLocationWithHandleByHandle;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _handlesQueue;
	FMFuture* _sessionInvalidationFuture;
	FMFuture* _sessionInterruptionFuture;

}

@property (nonatomic,retain) NSMutableSet * internalHandles;                                              //@synthesize internalHandles=_internalHandles - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesSharingLocationsWithMe;                              //@synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesFollowingMyLocation;                                 //@synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLocationForHandleByHandle;                       //@synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;                //@synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;              //@synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlesQueue;                                   //@synthesize handlesQueue=_handlesQueue - In the implementation block
@property (assign,nonatomic) BOOL isModelInitialized;                                                     //@synthesize isModelInitialized=_isModelInitialized - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInvalidationFuture;                                        //@synthesize sessionInvalidationFuture=_sessionInvalidationFuture - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInterruptionFuture;                                        //@synthesize sessionInterruptionFuture=_sessionInterruptionFuture - In the implementation block
@property (nonatomic,copy) NSSet * handles; 
@property (assign,nonatomic,__weak) id<FMFSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isProvisionedForLocationSharing;
+(BOOL)FMFRestricted;
+(BOOL)isAnyAccountManaged;
+(BOOL)FMFAllowed;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(void)applicationDidEnterBackground;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)modelDidLoad;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(/*^block*/id)arg6 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(void)locatingInProgressChanged:(id)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(void)getFences:(/*^block*/id)arg1 ;
-(id)getHandlesFollowingMyLocation;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(void)removeHandles:(id)arg1 ;
-(oneway void)abDidChange;
-(FMFuture *)sessionInterruptionFuture;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(BOOL)isModelInitialized;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)handles;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)setAllowFriendRequestsEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showShareMyLocationRestrictedAlert;
-(id<FMFSessionDelegate>)delegate;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)is5XXError:(id)arg1 ;
-(id)getHandlesWithPendingOffers;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)getThisDeviceAndCompanion:(/*^block*/id)arg1 ;
-(void)getDataForPerformanceRequest:(/*^block*/id)arg1 ;
-(void)getAccountEmailAddress:(/*^block*/id)arg1 ;
-(void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(void)handleAndLocationForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(void)_registerForFMFDLaunchedNotification;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)setExpiredInitTimestamp;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(id)serverProxy;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)_sendAutoSwitchMeDevice;
-(BOOL)isMyLocationEnabled;
-(void)crashDaemon;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)getRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)dataForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)showMeDeviceAlert;
-(id)getAllDevices;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)encryptPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)handlesQueue;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasModelInitialized;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getHandlesSharingLocationsWithMe;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(id)getActiveLocationSharingDevice;
-(void)restoreClientConnection;
-(void)contactForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMFuture *)sessionInvalidationFuture;
-(void)fencesForHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)getFavoritesSharingLocationWithMe;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)reloadDataIfNotLoaded;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showShareMyLocationiCloudSettingsOffAlert;
-(void)addHandles:(id)arg1 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)setSessionInvalidationFuture:(FMFuture *)arg1 ;
-(void)deleteFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exit5XXGracePeriod;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(void)forceRefresh;
-(void)_daemonDidLaunch;
-(void)setSessionInterruptionFuture:(FMFuture *)arg1 ;
-(void)includeDeviceInAutomations:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sessionHandleReport:(/*^block*/id)arg1 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_registerForApplicationLifecycleEvents;
-(void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(double)maxLocatingInterval;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(id)cachedLocationForHandle:(id)arg1 ;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isAllowFriendRequestsEnabled:(/*^block*/id)arg1 ;
-(id)__connection;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(NSMutableSet *)internalHandles;
-(void)addInterruptionHander:(/*^block*/id)arg1 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)getFavoritesWithCompletion:(/*^block*/id)arg1 ;
-(void)addInvalidationHander:(/*^block*/id)arg1 ;
-(void)addFence:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

