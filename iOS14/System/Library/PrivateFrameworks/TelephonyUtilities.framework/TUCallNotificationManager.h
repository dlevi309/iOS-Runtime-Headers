/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSMutableArray;

@interface TUCallNotificationManager : NSObject {

	NSMutableArray* _deferredNotificationBlocks;

}

@property (nonatomic,retain) NSMutableArray * deferredNotificationBlocks;              //@synthesize deferredNotificationBlocks=_deferredNotificationBlocks - In the implementation block
-(void)videoPausedChangedForCall:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)connectingChangedForCall:(id)arg1 ;
-(void)faceTimeIDStatusChangedForCall:(id)arg1 ;
-(void)hardPauseDigitsStateChangedForCall:(id)arg1 ;
-(void)videoDegradedChangedForCall:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)remoteVideoContentRectChangedForCall:(id)arg1 ;
-(void)hasSentInvitationChangedForCall:(id)arg1 ;
-(void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 afterUpdatesInBlock:(/*^block*/id)arg3 ;
-(void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)arg1 ;
-(void)remoteUplinkMutedChangedForCall:(id)arg1 ;
-(void)connectedChangedForCall:(id)arg1 ;
-(void)postNotificationsForCall:(id)arg1 afterUpdatesInBlock:(/*^block*/id)arg2 ;
-(void)cameraTypeChangedForCall:(id)arg1 ;
-(void)ttyTypeChangedForCall:(id)arg1 ;
-(void)remoteScreenOrientationChangedForCall:(id)arg1 ;
-(void)modelChangedForCall:(id)arg1 ;
-(void)isEmergencyChangedForCall:(id)arg1 ;
-(void)isThirdPartyVideoChangedForCall:(id)arg1 ;
-(void)isSendingVideoChangedForCall:(id)arg1 ;
-(void)needsManualInCallSoundsChangedForCall:(id)arg1 ;
-(void)providerContextChangedForCall:(id)arg1 ;
-(void)remoteAspectRatioChangedForCall:(id)arg1 ;
-(void)setDeferredNotificationBlocks:(NSMutableArray *)arg1 ;
-(void)wantsHoldMusicChangedForCall:(id)arg1 ;
-(void)videoMirroredChangedForCall:(id)arg1 ;
-(void)conferenceParticipantCallsChangedForCallContainer:(id)arg1 conferenceParticipantCalls:(id)arg2 ;
-(void)isOnHoldChangedForCall:(id)arg1 ;
-(void)supportsTTYWithVoiceChangedForCall:(id)arg1 ;
-(void)isSendingAudioChangedForCall:(id)arg1 ;
-(void)mediaPropertiesChangedForCall:(id)arg1 remoteAspectRatioDidChange:(BOOL)arg2 remoteCameraOrientationDidChange:(BOOL)arg3 ;
-(NSMutableArray *)deferredNotificationBlocks;
-(void)localSenderIdentityAccountUUIDChangedForCall:(id)arg1 ;
-(void)remoteCameraOrientationChangedForCall:(id)arg1 ;
-(void)isUplinkMutedChangedForCall:(id)arg1 ;
-(void)endpointOnCurrentDeviceChangedForCall:(id)arg1 ;
-(void)isUsingBasebandChangedForCall:(id)arg1 ;
-(void)audioPropertiesChangedForCall:(id)arg1 ;
-(void)statusChangedForCall:(id)arg1 ;
-(void)displayContextChangedForCall:(id)arg1 ;
-(void)shouldSuppressRingtoneChangedForCall:(id)arg1 ;
-(void)deferNotificationsUntilAfterPerformingBlock:(/*^block*/id)arg1 ;
-(void)destinationIDChangedForCall:(id)arg1 ;
-(void)mediaStalledChangedForCall:(id)arg1 ;
-(void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 ;
-(void)remoteParticipantHandlesChangedForCall:(id)arg1 ;
-(void)remoteScreenAspectRatioChangedForCall:(id)arg1 ;
-(void)postNotificationsForCallContainer:(id)arg1 afterUpdatesInBlock:(/*^block*/id)arg2 ;
@end

