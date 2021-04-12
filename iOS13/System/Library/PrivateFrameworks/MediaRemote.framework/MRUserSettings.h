/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSUserDefaults, NSArray;

@interface MRUserSettings : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _externalDevicePairingAllowed;

}

@property (nonatomic,readonly) BOOL usePeerToPeerExternalDeviceConnections; 
@property (nonatomic,readonly) BOOL useNoDelayOptionForExternalDeviceSockets; 
@property (nonatomic,readonly) BOOL useDebugAVRouteWithoutVolumeControl; 
@property (nonatomic,readonly) BOOL shouldInitializeTelevisionBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeGenericBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeRapportService; 
@property (nonatomic,readonly) BOOL shouldLogPairingSetupCode; 
@property (nonatomic,readonly) BOOL shouldLogArtwork; 
@property (nonatomic,readonly) BOOL hasExternalDeviceSocketQOSLevelSet; 
@property (nonatomic,readonly) long long externalDeviceSocketQOSLevel; 
@property (assign,getter=isExternalDevicePairingAllowed,nonatomic) BOOL externalDevicePairingAllowed;                                 //@synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed - In the implementation block
@property (nonatomic,readonly) double externalDeviceTimeoutDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoArtworkCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectWaitDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectSleepDuration; 
@property (nonatomic,readonly) double externalDeviceSleepAssertionOnClientConnectDuration; 
@property (nonatomic,readonly) double bluetoothDeviceResumeDuration; 
@property (nonatomic,readonly) double broadcastCommandWaitDuration; 
@property (nonatomic,readonly) double airPlayOutputContextInitTimeoutDuration; 
@property (nonatomic,readonly) BOOL useExternalDeviceSystemPairing; 
@property (nonatomic,readonly) long long maxTransactionMemorySize; 
@property (nonatomic,readonly) double transactionWaitDurationOnOutOfMemory; 
@property (nonatomic,readonly) double transactionWaitDurationOnXpcSend; 
@property (nonatomic,readonly) double transactionWaitDurationOnNetworkSend; 
@property (nonatomic,readonly) BOOL useSystemAudioContextForAirPlayTransport; 
@property (nonatomic,readonly) BOOL useGenericTransportForHostedEndpoints; 
@property (nonatomic,retain) NSArray * connectedClientPIDs; 
@property (nonatomic,readonly) double queuedCommandsTimeoutInterval; 
@property (nonatomic,readonly) BOOL computeNowPlayingApplication; 
@property (nonatomic,readonly) double nowPlayingApplicationTimeout; 
@property (nonatomic,readonly) BOOL takelockScreenAssertion; 
@property (nonatomic,readonly) BOOL useProactiveEndpoint; 
@property (nonatomic,readonly) BOOL connectToEndpointWhenBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenAnyEndpointBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToUserSelectedEndpoint; 
@property (nonatomic,readonly) double discoverEndpointTimeoutInterval; 
@property (nonatomic,readonly) BOOL needNowPlayingForegroundState; 
@property (nonatomic,readonly) double deviceRecentlyUsedInterval; 
@property (nonatomic,readonly) double mediaRecentlyPlayedInterval; 
@property (nonatomic,readonly) double endpointRecentlyUserSelectedInterval; 
@property (nonatomic,readonly) double launchApplicationTimeoutInterval; 
@property (nonatomic,readonly) BOOL supportProximityMigration; 
@property (nonatomic,readonly) BOOL supportMigration; 
@property (nonatomic,readonly) BOOL supportLastPlayingDevice; 
@property (nonatomic,readonly) BOOL sendLastPlayingDeviceToHome; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenInProximityToAnyDevice; 
@property (nonatomic,readonly) double lastPlayingDeviceThresholdInterval; 
@property (nonatomic,readonly) double sendPlaybackSessionUpdateToCompanionCoalesceInterval; 
@property (nonatomic,readonly) double activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval; 
+(id)currentSettings;
-(id)init;
-(void)_removeValueForKey:(id)arg1 ;
-(BOOL)useExternalDeviceSystemPairing;
-(BOOL)supportMigration;
-(double)externalDeviceTimeoutDuration;
-(BOOL)_boolValueForKey:(id)arg1 usingDefaultValue:(BOOL)arg2 ;
-(double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2 ;
-(long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2 ;
-(BOOL)takelockScreenAssertion;
-(id)defaultSupportedCommandsData;
-(BOOL)usePeerToPeerExternalDeviceConnections;
-(BOOL)useNoDelayOptionForExternalDeviceSockets;
-(BOOL)useDebugAVRouteWithoutVolumeControl;
-(BOOL)shouldInitializeTelevisionBonjourService;
-(BOOL)shouldInitializeGenericBonjourService;
-(BOOL)shouldInitializeRapportService;
-(BOOL)shouldLogPairingSetupCode;
-(BOOL)shouldLogArtwork;
-(BOOL)hasExternalDeviceSocketQOSLevelSet;
-(long long)externalDeviceSocketQOSLevel;
-(double)externalDeviceNowPlayingInfoCoalesceDuration;
-(double)externalDeviceNowPlayingInfoArtworkCoalesceDuration;
-(double)externalDeviceDisconnectWaitDuration;
-(double)externalDeviceDisconnectSleepDuration;
-(double)externalDeviceSleepAssertionOnClientConnectDuration;
-(double)bluetoothDeviceResumeDuration;
-(double)broadcastCommandWaitDuration;
-(double)airPlayOutputContextInitTimeoutDuration;
-(long long)maxTransactionMemorySize;
-(double)transactionWaitDurationOnOutOfMemory;
-(double)transactionWaitDurationOnXpcSend;
-(double)transactionWaitDurationOnNetworkSend;
-(BOOL)useSystemAudioContextForAirPlayTransport;
-(BOOL)useGenericTransportForHostedEndpoints;
-(NSArray *)connectedClientPIDs;
-(void)setConnectedClientPIDs:(NSArray *)arg1 ;
-(double)queuedCommandsTimeoutInterval;
-(double)nowPlayingApplicationTimeout;
-(BOOL)computeNowPlayingApplication;
-(BOOL)needNowPlayingForegroundState;
-(BOOL)useProactiveEndpoint;
-(BOOL)connectToEndpointWhenBeginsPlayback;
-(BOOL)connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
-(BOOL)connectToUserSelectedEndpoint;
-(double)discoverEndpointTimeoutInterval;
-(double)deviceRecentlyUsedInterval;
-(double)mediaRecentlyPlayedInterval;
-(double)endpointRecentlyUserSelectedInterval;
-(double)launchApplicationTimeoutInterval;
-(BOOL)supportProximityMigration;
-(BOOL)supportLastPlayingDevice;
-(BOOL)sendLastPlayingDeviceToHome;
-(double)lastPlayingDeviceThresholdInterval;
-(double)sendPlaybackSessionUpdateToCompanionCoalesceInterval;
-(BOOL)connectToAllEndpointsWhenInProximityToAnyDevice;
-(id)defaultSupportedCommandsDataForClient:(id)arg1 ;
-(void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2 ;
-(double)activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
-(unsigned)localPlaybackState;
-(void)setLocalPlaybackState:(unsigned)arg1 ;
-(id)localLastPlayingDate;
-(void)setLocalLastPlayingDate:(id)arg1 ;
-(BOOL)isExternalDevicePairingAllowed;
-(void)setExternalDevicePairingAllowed:(BOOL)arg1 ;
@end

