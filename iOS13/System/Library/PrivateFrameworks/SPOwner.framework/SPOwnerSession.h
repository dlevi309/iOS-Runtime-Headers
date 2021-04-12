/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPLostModeSupportProtocol.h>
#import <SPOwner/SPTrackingAvoidanceServiceProtocol.h>
#import <SPOwner/SPOwnerSessionPrivateProtocol.h>

@protocol SPOwnerSessionXPCProtocol, OS_dispatch_queue, OS_dispatch_source;
@class NSSet, FMXPCServiceDescription, FMXPCSession, NSObject, NSOperationQueue, NSDictionary, NSDate, NSString;

@interface SPOwnerSession : NSObject <SPLostModeSupportProtocol, SPTrackingAvoidanceServiceProtocol, SPOwnerSessionPrivateProtocol> {

	/*^block*/id beaconAddedBlock;
	/*^block*/id beaconRemovedBlock;
	/*^block*/id beaconsChangedBlock;
	/*^block*/id latestLocationsUpdatedBlock;
	NSSet* _locationSources;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPOwnerSessionXPCProtocol> _proxy;
	id<SPOwnerSessionXPCProtocol> _userAgentProxy;
	NSSet* _allBeaconsCache;
	NSSet* _clientObservedBeacons;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _notificationQueue;
	id _beaconsChangedNotificationToken;
	id _tagSeparationBeaconsChangedNotificationToken;
	id _beaconEstimatedLocationChangedNotificationToken;
	NSDictionary* _locationCache;
	NSObject*<OS_dispatch_source> _locationFetchDispatchTimer;
	NSObject*<OS_dispatch_source> _connectionExpiryDispatchTimer;
	NSDate* _fetchLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                             //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> proxy;                                      //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> userAgentProxy;                             //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (nonatomic,retain) NSSet * allBeaconsCache;                                                  //@synthesize allBeaconsCache=_allBeaconsCache - In the implementation block
@property (nonatomic,retain) NSSet * clientObservedBeacons;                                            //@synthesize clientObservedBeacons=_clientObservedBeacons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                                     //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic,__weak) id beaconsChangedNotificationToken;                                //@synthesize beaconsChangedNotificationToken=_beaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id tagSeparationBeaconsChangedNotificationToken;                   //@synthesize tagSeparationBeaconsChangedNotificationToken=_tagSeparationBeaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id beaconEstimatedLocationChangedNotificationToken;                //@synthesize beaconEstimatedLocationChangedNotificationToken=_beaconEstimatedLocationChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSDictionary * locationCache;                                             //@synthesize locationCache=_locationCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> locationFetchDispatchTimer;                 //@synthesize locationFetchDispatchTimer=_locationFetchDispatchTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionExpiryDispatchTimer;              //@synthesize connectionExpiryDispatchTimer=_connectionExpiryDispatchTimer - In the implementation block
@property (nonatomic,copy) NSDate * fetchLimit;                                                        //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,copy) NSSet * locationSources;                                                    //@synthesize locationSources=_locationSources - In the implementation block
@property (nonatomic,copy) id beaconsChangedBlock; 
@property (nonatomic,copy) id beaconAddedBlock; 
@property (nonatomic,copy) id beaconRemovedBlock; 
@property (nonatomic,copy) id latestLocationsUpdatedBlock; 
@property (nonatomic,copy,readonly) NSSet * allBeacons; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSDate *)fetchLimit;
-(void)setFetchLimit:(NSDate *)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(void)setProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(id<SPOwnerSessionXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(id)remoteInterface;
-(NSDictionary *)locationCache;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(id<SPOwnerSessionXPCProtocol>)userAgentProxy;
-(NSObject*<OS_dispatch_source>)locationFetchDispatchTimer;
-(void)setLocationFetchDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionExpiryDispatchTimer;
-(void)setConnectionExpiryDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClientObservedBeacons:(NSSet *)arg1 ;
-(id)beaconsChangedNotificationToken;
-(void)setBeaconsChangedNotificationToken:(id)arg1 ;
-(id)beaconEstimatedLocationChangedNotificationToken;
-(void)setBeaconEstimatedLocationChangedNotificationToken:(id)arg1 ;
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)unacceptedBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)locationSources;
-(void)setLocationCache:(NSDictionary *)arg1 ;
-(void)locationFetchTimerFired;
-(void)updateAllBeaconLocations;
-(void)connectionExpiryTimerFired;
-(void)updateAllBeacons;
-(void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1 ;
-(void)startRefreshing;
-(void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2 ;
-(void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5 ;
-(NSSet *)allBeaconsCache;
-(id)latestLocationsUpdatedBlock;
-(NSSet *)clientObservedBeacons;
-(void)setLocationFetchDispatchTimerWithInterval:(double)arg1 ;
-(void)locationsForBeacons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllBeaconsCache:(NSSet *)arg1 ;
-(void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1 ;
-(void)startRefreshingBeacons:(id)arg1 ;
-(void)stopRefreshing;
-(id)executeCommand:(id)arg1 ;
-(void)setLocationSources:(NSSet *)arg1 ;
-(id)beaconsChangedBlock;
-(void)setBeaconsChangedBlock:(id)arg1 ;
-(id)beaconAddedBlock;
-(void)setBeaconAddedBlock:(id)arg1 ;
-(id)beaconRemovedBlock;
-(void)setBeaconRemovedBlock:(id)arg1 ;
-(void)setLatestLocationsUpdatedBlock:(id)arg1 ;
-(NSSet *)allBeacons;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserAgentProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(id)tagSeparationBeaconsChangedNotificationToken;
-(void)setTagSeparationBeaconsChangedNotificationToken:(id)arg1 ;
@end

