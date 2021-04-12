/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxy.h>

@class NSXPCConnection, NSHashTable, MSPUserRoutingPreferences, NSString;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {

	NSXPCConnection* _connection;
	NSHashTable* _observers;
	MSPUserRoutingPreferences* _cachedUserRoutingPreferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_connection;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)checkin;
-(void)openConnection;
-(void)closeConnection;
-(void)_connectToDaemonIfNeeded;
-(id)_remoteObjectProxy;
-(void)_clearConnection;
-(void)fetchHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitHistorySerializedRepresentation:(id)arg1 reapingTombstones:(BOOL)arg2 earliestKnownSyncDate:(id)arg3 operationIdentifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)eraseHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLastKnownHistoryOperationIdentifier:(/*^block*/id)arg1 ;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitPinnedPlacesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)erasePinnedPlacesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLastKnownPinnedPlacesOperationIdentifier:(/*^block*/id)arg1 ;
-(void)fetchCollectionsSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitCollectionsSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLastKnownCollectionsOperationIdentifier:(/*^block*/id)arg1 ;
-(void)eraseCollectionsSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitFavoritesSerializedRepresentation:(id)arg1 reapingTombstones:(BOOL)arg2 operationIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchLastKnownFavoritesOperationIdentifier:(/*^block*/id)arg1 ;
-(void)eraseFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)testByNotingHistoryChangedOnDisk;
-(void)noteMapstoolChangedHistoryOnDisk;
-(void)noteMapstoolChangedFavoritesOnDisk;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1 ;
-(void)setShouldUseDevAPNS:(BOOL)arg1 ;
-(void)fetchDevicePushToken:(/*^block*/id)arg1 ;
-(void)fetchDownloadedAnnouncements:(/*^block*/id)arg1 ;
-(void)fetchAnnouncementsFilePath:(/*^block*/id)arg1 ;
-(void)fetchAnnouncementsURLPath:(/*^block*/id)arg1 ;
-(void)updateAnnouncements:(/*^block*/id)arg1 ;
-(void)updateActiveAnnouncement;
-(void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2 ;
-(void)clearCurrentAnnouncement;
-(void)clearShownAnnouncements;
-(void)resetAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1 ;
-(void)fetchShownAnnouncements:(/*^block*/id)arg1 ;
-(void)clearBulletinWithRecordID:(id)arg1 ;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1 ;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)clearTrafficConditionsBulletin;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)clearMapsSuggestionsBulletin;
-(void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(BOOL)arg2 title:(id)arg3 description:(id)arg4 ;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1 ;
-(void)clearTrafficIncidentsBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 ;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2 ;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1 ;
-(void)clearLowFuelAlertBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3 ;
-(void)clearParkedCarBulletin;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)eraseRAPData;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1 ;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(id)userRoutingPrefrencesFromSettingsWithFreshness:(double)arg1 ;
-(void)clearCachedUserRoutingPreferences;
@end

