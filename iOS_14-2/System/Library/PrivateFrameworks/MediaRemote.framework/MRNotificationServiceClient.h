/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MRMediaRemoteServiceClient;

@interface MRNotificationServiceClient : NSObject {

	MRMediaRemoteServiceClient* _serviceClient;

}
-(void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg1 ;
-(void)_processActiveApplicationInvalidationHandlersForNotification:(id)arg1 ;
-(void)_notificationFired:(id)arg1 clientNotification:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4 ;
-(void)_handlePlayerDidRegisterNotification:(id)arg1 ;
-(void)_handlePlayerContentItemsDidChangeNotification:(id)arg1 ;
-(void)_processPlayerInvalidationHandlersForNotification:(id)arg1 ;
-(void)_processActiveOriginInvalidationHandlersForNotification:(id)arg1 ;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationDidForegroundNotification:(id)arg1 ;
-(void)_handlePlayerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationClientStateDidChangeNotification:(id)arg1 ;
-(void)_processApplicationInvalidationHandlersForNotification:(id)arg1 ;
-(void)_processOriginInvalidationHandlersForNotification:(id)arg1 ;
-(void)_notificationFired:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3 ;
-(void)_handleApplicationDisplayNameDidChangeNotification:(id)arg1 ;
-(void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerStateDidChangeNotification:(id)arg1 ;
-(void)_postDefaultOriginNotifications:(id)arg1 ;
-(void)_handlePlayerSupportedCommandsDidChangeNotification:(id)arg1 ;
-(void)_handleActiveOriginDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_handleVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleOriginDidRegisterNotification:(id)arg1 ;
-(void)_notificationFired:(id)arg1 playerPathNotifcation:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4 ;
-(id)initWithServiceClient:(id)arg1 ;
-(void)_handleActiveApplicationDidChangeNotification:(id)arg1 ;
-(BOOL)_processNeedsNonPlayerPathBasedNotificationsForBackwardCompatabilitySupport;
-(void)_handleActivePlayerDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerContentItemArtworkDidChangeNotification:(id)arg1 ;
-(void)_postDefaultAppilicationNotifications:(id)arg1 ;
-(BOOL)_shouldPostNotifications;
-(void)registerCallbacks;
-(void)_handleApplicationDidUnregisterNotification:(id)arg1 ;
-(void)_handleApplicationDidRegisterNotification:(id)arg1 ;
-(void)_postDefaultPlayerNotificationsWithUserInfo:(id)arg1 object:(id)arg2 ;
-(void)_handlePlayerDidUnregisterNotification:(id)arg1 ;
-(void)_processActivePlayerInvalidationHandlersForNotification:(id)arg1 ;
-(void)_handleOriginDidUnregisterNotification:(id)arg1 ;
-(void)_handleVolumeDidChangeNotification:(id)arg1 ;
@end

