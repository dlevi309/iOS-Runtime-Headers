/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSObject, NSString;

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
+(BOOL)FMFAllowed;
+(BOOL)isAnyAccountManaged;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<FMFSessionDelegate>)delegate;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSSet *)handles;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)invalidateWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(id)internalConnection;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)serverProxy;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getFavoritesSharingLocationWithMe;
-(id)getHandlesFollowingMyLocation;
-(id)getHandlesSharingLocationsWithMe;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(id)getAllDevices;
-(id)__connection;
-(void)addHandles:(id)arg1 ;
-(void)removeHandles:(id)arg1 ;
-(id)cachedLocationForHandle:(id)arg1 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(void)includeDeviceInAutomations:(/*^block*/id)arg1 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExpiredInitTimestamp;
-(void)crashDaemon;
-(void)exit5XXGracePeriod;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(void)sessionHandleReport:(/*^block*/id)arg1 ;
-(void)getDataForPerformanceRequest:(/*^block*/id)arg1 ;
-(void)showShareMyLocationiCloudSettingsOffAlert;
-(void)showMeDeviceAlert;
-(id)getActiveLocationSharingDevice;
-(double)maxLocatingInterval;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(BOOL)is5XXError:(id)arg1 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(void)showShareMyLocationRestrictedAlert;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowFriendRequestsEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isAllowFriendRequestsEnabled:(/*^block*/id)arg1 ;
-(void)getAccountEmailAddress:(/*^block*/id)arg1 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getThisDeviceAndCompanion:(/*^block*/id)arg1 ;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAndLocationForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)encryptPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)abPreferencesDidChange;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)abDidChange;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(void)getFavoritesWithCompletion:(/*^block*/id)arg1 ;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)_sendAutoSwitchMeDevice;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFences:(/*^block*/id)arg1 ;
-(void)fencesForHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(oneway void)modelDidLoad;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(void)_daemonDidLaunch;
-(void)setHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForFMFDLaunchedNotification;
-(void)locatingInProgressChanged:(id)arg1 ;
-(void)forceRefresh;
-(BOOL)isModelInitialized;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlesQueue;
-(NSMutableSet *)internalHandles;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasModelInitialized;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)reloadDataIfNotLoaded;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(id)getHandlesWithPendingOffers;
-(BOOL)isMyLocationEnabled;
@end

