/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)openConnection;
-(void)checkin;
-(void)closeConnection;
-(void)addObserver:(id)arg1 ;
-(void)fetchLastKnownFavoritesOperationIdentifier:(/*^block*/id)arg1 ;
-(void)fetchLastKnownHistoryOperationIdentifier:(/*^block*/id)arg1 ;
-(void)fetchAnnouncementsURLPath:(/*^block*/id)arg1 ;
-(void)clearTrafficConditionsBulletin;
-(void)clearVenueBulletin;
-(void)fetchHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1 ;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1 ;
-(void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(BOOL)arg2 title:(id)arg3 description:(id)arg4 ;
-(void)favoritesDidChange;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)fetchDownloadedAnnouncements:(/*^block*/id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3 ;
-(void)commitCollectionsSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)eraseCollectionsSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)clearLowFuelAlertBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2 ;
-(void)fetchFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)resetAnnouncements;
-(void)historyDidChange;
-(void)clearMapsSuggestionsBulletin;
-(void)noteMapstoolChangedHistoryOnDisk;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)commitFavoritesSerializedRepresentation:(id)arg1 reapingTombstones:(BOOL)arg2 operationIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1 ;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCollectionsSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForTopic;
-(void)eraseHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitHistorySerializedRepresentation:(id)arg1 reapingTombstones:(BOOL)arg2 earliestKnownSyncDate:(id)arg3 operationIdentifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)clearBulletinWithRecordID:(id)arg1 ;
-(void)eraseFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAnnouncementsFilePath:(/*^block*/id)arg1 ;
-(void)fetchDevicePushToken:(/*^block*/id)arg1 ;
-(void)clearCachedUserRoutingPreferences;
-(void)clearShownAnnouncements;
-(void)erasePinnedPlacesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(void)_connectToDaemonIfNeeded;
-(void)fetchLastKnownPinnedPlacesOperationIdentifier:(/*^block*/id)arg1 ;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)clearTrafficIncidentsBulletin;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)commitPinnedPlacesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLastKnownCollectionsOperationIdentifier:(/*^block*/id)arg1 ;
-(void)noteMapstoolChangedFavoritesOnDisk;
-(void)_clearConnection;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)updateActiveAnnouncement;
-(void)testByNotingHistoryChangedOnDisk;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 ;
-(id)_connection;
-(id)userRoutingPrefrencesFromSettingsWithFreshness:(double)arg1 ;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2 ;
-(void)setShouldUseDevAPNS:(BOOL)arg1 ;
-(void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2 ;
-(void)fetchShownAnnouncements:(/*^block*/id)arg1 ;
-(void)simulateProblemResolution;
-(void)eraseRAPData;
-(void)updateAnnouncements:(/*^block*/id)arg1 ;
-(void)clearParkedCarBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)clearCurrentAnnouncement;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1 ;
-(void)fetchProblemStatus;
@end

