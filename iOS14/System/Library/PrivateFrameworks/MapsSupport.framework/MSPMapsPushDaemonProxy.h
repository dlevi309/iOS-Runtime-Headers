/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>
@required
-(void)checkin;
-(void)fetchAnnouncementsURLPath:(/*^block*/id)arg1;
-(void)clearTrafficConditionsBulletin;
-(void)clearVenueBulletin;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
-(void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(BOOL)arg2 title:(id)arg3 description:(id)arg4;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)fetchDownloadedAnnouncements:(/*^block*/id)arg1;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
-(void)clearLowFuelAlertBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
-(void)resetAnnouncements;
-(void)clearMapsSuggestionsBulletin;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1;
-(void)registerForTopic;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)fetchAnnouncementsFilePath:(/*^block*/id)arg1;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)clearShownAnnouncements;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1;
-(void)clearTrafficIncidentsBulletin;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)updateActiveAnnouncement;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
-(void)setShouldUseDevAPNS:(BOOL)arg1;
-(void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;
-(void)fetchShownAnnouncements:(/*^block*/id)arg1;
-(void)simulateProblemResolution;
-(void)eraseRAPData;
-(void)updateAnnouncements:(/*^block*/id)arg1;
-(void)clearParkedCarBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1;
-(void)clearCurrentAnnouncement;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
-(void)fetchProblemStatus;

@end

